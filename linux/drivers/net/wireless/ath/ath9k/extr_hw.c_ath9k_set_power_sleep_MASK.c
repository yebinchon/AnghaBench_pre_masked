
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int WARegVal; } ;


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
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (struct ath_hw*,int ,int) ;
 int FUNC_7 (struct ath_hw*,int ,int ) ;
 int FUNC_8 (struct ath_hw*,int ,int) ;
 scalar_t__ FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct ath_hw *VAR_15)
{
 FUNC_7(VAR_15, VAR_10, VAR_11);

 if (FUNC_4(VAR_15) || FUNC_5(VAR_15)) {
  FUNC_6(VAR_15, VAR_12, 0xff);
  FUNC_6(VAR_15, VAR_1, 0xff);
  FUNC_6(VAR_15, VAR_9, 0xfffff);

  FUNC_8(VAR_15, VAR_0, 0);
  FUNC_10(100);
 }





 FUNC_6(VAR_15, VAR_5, VAR_6);

 if (FUNC_9(VAR_15))
  FUNC_10(100);

 if (!FUNC_1(VAR_15) && !FUNC_3(VAR_15))
  FUNC_8(VAR_15, VAR_2, VAR_3 | VAR_4);


 if (!FUNC_0(VAR_15) && !FUNC_2(VAR_15)) {
  FUNC_6(VAR_15, VAR_7, VAR_8);
  FUNC_10(2);
 }


 if (FUNC_3(VAR_15))
  FUNC_8(VAR_15, VAR_13, VAR_15->WARegVal & ~VAR_14);
}
