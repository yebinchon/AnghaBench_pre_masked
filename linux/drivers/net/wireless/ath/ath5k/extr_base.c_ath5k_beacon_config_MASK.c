
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {int imask; scalar_t__ opmode; int block; int bhalq; scalar_t__ enable_beacon; scalar_t__ bmisscount; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ath5k_hw*) ;
 int FUNC_1 (struct ath5k_hw*,int) ;
 int FUNC_2 (struct ath5k_hw*) ;
 scalar_t__ FUNC_3 (struct ath5k_hw*) ;
 int FUNC_4 (struct ath5k_hw*,int) ;
 int FUNC_5 (struct ath5k_hw*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct ath5k_hw *VAR_3)
{
 FUNC_6(&VAR_3->block);
 VAR_3->bmisscount = 0;
 VAR_3->imask &= ~(VAR_0 | VAR_1);

 if (VAR_3->enable_beacon) {







  FUNC_2(VAR_3);

  VAR_3->imask |= VAR_1;

  if (VAR_3->opmode == VAR_2) {
   if (FUNC_3(VAR_3))
    FUNC_0(VAR_3);
  } else
   FUNC_1(VAR_3, -1);
 } else {
  FUNC_5(VAR_3, VAR_3->bhalq);
 }

 FUNC_4(VAR_3, VAR_3->imask);
 FUNC_7(&VAR_3->block);
}
