
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htc_endpoint_credit_dist {int credits; int cred_assngd; int endpoint; } ;
struct ath6kl_htc_credit_info {int cur_free_credits; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ath6kl_htc_credit_info *VAR_1,
      struct htc_endpoint_credit_dist *VAR_2,
      int VAR_3)
{
 FUNC_0(VAR_0, "credit deposit ep %d credits %d\n",
     VAR_2->endpoint, VAR_3);

 VAR_2->credits += VAR_3;
 VAR_2->cred_assngd += VAR_3;
 VAR_1->cur_free_credits -= VAR_3;
}
