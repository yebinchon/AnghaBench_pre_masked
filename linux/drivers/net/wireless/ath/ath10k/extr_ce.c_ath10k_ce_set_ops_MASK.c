
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_ce_pipe {int * ops; } ;
struct ath10k {int hw_rev; } ;



 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ath10k *VAR_2,
         struct ath10k_ce_pipe *VAR_3)
{
 switch (VAR_2->hw_rev) {
 case 128:
  VAR_3->ops = &VAR_0;
  break;
 default:
  VAR_3->ops = &VAR_1;
  break;
 }
}
