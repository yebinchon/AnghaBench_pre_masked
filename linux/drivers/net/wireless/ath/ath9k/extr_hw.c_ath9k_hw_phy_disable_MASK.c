
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int htc_reset_init; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int *) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ) ;

bool FUNC_4(struct ath_hw *VAR_1)
{
 if (FUNC_2(VAR_1))
  FUNC_0(VAR_1);

 if (!FUNC_3(VAR_1, VAR_0))
  return 0;

 FUNC_1(VAR_1, ((void*)0));
 VAR_1->htc_reset_init = 1;
 return 1;
}
