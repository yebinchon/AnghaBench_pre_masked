
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {scalar_t__ curchan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 int FUNC_3 (struct ath_hw*,int ,int) ;
 int FUNC_4 (struct ath_hw*,int ,int ) ;
 int FUNC_5 (struct ath_hw*,int) ;
 int FUNC_6 (int) ;

void FUNC_7(struct ath_hw *VAR_10)
{
 int VAR_11 = 1000;
 int VAR_12, VAR_13;

 if (VAR_10->curchan) {
  if (FUNC_0(VAR_10->curchan))
   VAR_11 *= 2;
  else if (FUNC_1(VAR_10->curchan))
   VAR_11 *= 4;
 }

 FUNC_4(VAR_10, VAR_8, VAR_9);

 FUNC_3(VAR_10, VAR_7, VAR_6 | VAR_5);
 FUNC_3(VAR_10, VAR_1, VAR_0);
 FUNC_3(VAR_10, VAR_2, VAR_3);

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
   if (VAR_12)
    FUNC_6(5);

   if (!FUNC_5(VAR_10, VAR_13))
    break;
  }
 }

 FUNC_2(VAR_10, VAR_7, VAR_6 | VAR_5);
 FUNC_2(VAR_10, VAR_1, VAR_0);
 FUNC_2(VAR_10, VAR_2, VAR_3);

 FUNC_4(VAR_10, VAR_8, 0);
}
