
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct htc_target {int tx_lock; int cred_dist_list; int credit_info; struct htc_endpoint* endpoint; } ;
struct TYPE_4__ {int txq_depth; int cred_to_dist; int credits; } ;
struct TYPE_3__ {int tx_cred_rpt; int cred_rpt_from_rx; int cred_rpt_ep0; int cred_rpt_from_other; int cred_from_other; int cred_from_ep0; int cred_from_rx; int cred_retnd; } ;
struct htc_endpoint {int txq; TYPE_2__ cred_dist; TYPE_1__ ep_st; } ;
struct htc_credit_report {size_t eid; scalar_t__ credits; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,char*,size_t,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct htc_target*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct htc_target *VAR_4,
         struct htc_credit_report *VAR_5,
         int VAR_6,
         enum htc_endpoint_id VAR_7)
{
 struct htc_endpoint *VAR_8;
 int VAR_9 = 0, VAR_10;
 bool VAR_11 = 0;

 FUNC_5(&VAR_4->tx_lock);

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++, VAR_5++) {
  if (VAR_5->eid >= VAR_2) {
   FUNC_0(1);
   FUNC_6(&VAR_4->tx_lock);
   return;
  }

  VAR_8 = &VAR_4->endpoint[VAR_5->eid];

  FUNC_2(VAR_0,
      "credit report ep %d credits %d\n",
      VAR_5->eid, VAR_5->credits);

  VAR_8->ep_st.tx_cred_rpt += 1;
  VAR_8->ep_st.cred_retnd += VAR_5->credits;

  if (VAR_7 == VAR_5->eid) {




   VAR_8->ep_st.cred_from_rx += VAR_5->credits;
   VAR_8->ep_st.cred_rpt_from_rx += 1;
  } else if (VAR_7 == VAR_1) {

   VAR_8->ep_st.cred_from_ep0 += VAR_5->credits;
   VAR_8->ep_st.cred_rpt_ep0 += 1;
  } else {
   VAR_8->ep_st.cred_from_other += VAR_5->credits;
   VAR_8->ep_st.cred_rpt_from_other += 1;
  }

  if (VAR_5->eid == VAR_1)

   VAR_8->cred_dist.credits += VAR_5->credits;
  else {
   VAR_8->cred_dist.cred_to_dist += VAR_5->credits;
   VAR_11 = 1;
  }






  VAR_8->cred_dist.txq_depth =
   FUNC_3(&VAR_8->txq);

  VAR_9 += VAR_5->credits;
 }

 if (VAR_11) {




  FUNC_1(VAR_4->credit_info,
      &VAR_4->cred_dist_list,
      VAR_3);
 }

 FUNC_6(&VAR_4->tx_lock);

 if (VAR_9)
  FUNC_4(VAR_4);
}
