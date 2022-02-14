
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int imask; int intr_ref_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

void FUNC_3(struct ath_hw *VAR_1)
{
 if (!(VAR_1->imask & VAR_0))
  FUNC_2(&VAR_1->intr_ref_cnt, -1);
 else
  FUNC_1(&VAR_1->intr_ref_cnt);

 FUNC_0(VAR_1);
}
