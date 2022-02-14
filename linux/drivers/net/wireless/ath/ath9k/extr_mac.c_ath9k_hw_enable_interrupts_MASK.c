
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int imask; int intr_ref_cnt; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_common*,int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ath_hw *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_1(VAR_2);

 if (!(VAR_2->imask & VAR_0))
  return;

 if (!FUNC_3(&VAR_2->intr_ref_cnt)) {
  FUNC_2(VAR_3, VAR_1, "Do not enable IER ref count %d\n",
   FUNC_4(&VAR_2->intr_ref_cnt));
  return;
 }

 FUNC_0(VAR_2);
}
