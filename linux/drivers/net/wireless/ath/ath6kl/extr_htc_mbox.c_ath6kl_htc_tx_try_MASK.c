
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct htc_target {int tx_lock; } ;
struct htc_packet {int list; } ;
struct htc_ep_callbacks {scalar_t__ (* tx_full ) (int ,struct htc_packet*) ;} ;
struct TYPE_2__ {int tx_dropped; } ;
struct htc_endpoint {int max_txq_depth; int txq; TYPE_1__ ep_st; int target; int eid; struct htc_ep_callbacks ep_cb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ,int,int) ;
 int FUNC_1 (struct htc_target*,struct htc_endpoint*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,struct htc_packet*) ;

__attribute__((used)) static bool FUNC_7(struct htc_target *VAR_2,
         struct htc_endpoint *VAR_3,
         struct htc_packet *VAR_4)
{
 struct htc_ep_callbacks VAR_5;
 int VAR_6;
 bool VAR_7 = 0;

 VAR_5 = VAR_3->ep_cb;

 FUNC_4(&VAR_2->tx_lock);
 VAR_6 = FUNC_2(&VAR_3->txq);
 FUNC_5(&VAR_2->tx_lock);

 if (VAR_6 >= VAR_3->max_txq_depth)
  VAR_7 = 1;

 if (VAR_7)
  FUNC_0(VAR_0,
      "htc tx overflow ep %d depth %d max %d\n",
      VAR_3->eid, VAR_6,
      VAR_3->max_txq_depth);

 if (VAR_7 && VAR_5.tx_full) {
  if (VAR_5.tx_full(VAR_3->target, VAR_4) ==
      VAR_1) {
   VAR_3->ep_st.tx_dropped += 1;
   return 0;
  }
 }

 FUNC_4(&VAR_2->tx_lock);
 FUNC_3(&VAR_4->list, &VAR_3->txq);
 FUNC_5(&VAR_2->tx_lock);

 FUNC_1(VAR_2, VAR_3);

 return 1;
}
