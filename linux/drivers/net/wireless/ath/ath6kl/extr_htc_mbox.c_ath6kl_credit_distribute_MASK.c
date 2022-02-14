
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct ath6kl_htc_credit_info {scalar_t__ cur_free_credits; scalar_t__ total_avail_credits; } ;
typedef enum htc_credit_dist_reason { ____Placeholder_htc_credit_dist_reason } htc_credit_dist_reason ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct ath6kl_htc_credit_info*,struct list_head*) ;
 int FUNC_2 (struct ath6kl_htc_credit_info*,struct list_head*) ;

__attribute__((used)) static void FUNC_3(struct ath6kl_htc_credit_info *VAR_0,
         struct list_head *VAR_1,
         enum htc_credit_dist_reason VAR_2)
{
 switch (VAR_2) {
 case 128:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 129:
  FUNC_1(VAR_0, VAR_1);
  break;
 default:
  break;
 }

 FUNC_0(VAR_0->cur_free_credits > VAR_0->total_avail_credits);
 FUNC_0(VAR_0->cur_free_credits < 0);
}
