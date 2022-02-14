
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw_private_ops {int is_aic_enabled; } ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 struct ath_hw_private_ops* FUNC_0 (struct ath_hw*) ;

void FUNC_1(struct ath_hw *VAR_1)
{
 struct ath_hw_private_ops *VAR_2 = FUNC_0(VAR_1);

 VAR_2->is_aic_enabled = VAR_0;
}
