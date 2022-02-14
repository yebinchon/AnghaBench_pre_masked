
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct htc_target {unsigned int tgt_cred_sz; int credit_info; } ;
struct TYPE_3__ {int cred_cosumd; int cred_low_indicate; } ;
struct TYPE_4__ {int credits; int seek_cred; int cred_per_msg; } ;
struct htc_endpoint {TYPE_1__ ep_st; TYPE_2__ cred_dist; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct htc_target *VAR_4,
        struct htc_endpoint *VAR_5, u8 *VAR_6,
        enum htc_endpoint_id VAR_7, unsigned int VAR_8,
        int *VAR_9)
{
 *VAR_9 = (VAR_8 > VAR_4->tgt_cred_sz) ?
       FUNC_0(VAR_8, VAR_4->tgt_cred_sz) : 1;

 FUNC_2(VAR_0, "credit check need %d got %d\n",
     *VAR_9, VAR_5->cred_dist.credits);

 if (VAR_5->cred_dist.credits < *VAR_9) {
  if (VAR_7 == VAR_2)
   return -VAR_1;


  VAR_5->cred_dist.seek_cred = *VAR_9 - VAR_5->cred_dist.credits;

  FUNC_1(VAR_4->credit_info, &VAR_5->cred_dist);

  VAR_5->cred_dist.seek_cred = 0;

  if (VAR_5->cred_dist.credits < *VAR_9) {
   FUNC_2(VAR_0,
       "credit not found for ep %d\n",
       VAR_7);
   return -VAR_1;
  }
 }

 VAR_5->cred_dist.credits -= *VAR_9;
 VAR_5->ep_st.cred_cosumd += *VAR_9;


 if (VAR_5->cred_dist.credits < VAR_5->cred_dist.cred_per_msg) {
  VAR_5->cred_dist.seek_cred =
  VAR_5->cred_dist.cred_per_msg - VAR_5->cred_dist.credits;

  FUNC_1(VAR_4->credit_info, &VAR_5->cred_dist);


  if (VAR_5->cred_dist.credits < VAR_5->cred_dist.cred_per_msg) {

   *VAR_6 |= VAR_3;
   VAR_5->ep_st.cred_low_indicate += 1;
   FUNC_2(VAR_0,
       "credit we need credits asap\n");
  }
 }

 return 0;
}
