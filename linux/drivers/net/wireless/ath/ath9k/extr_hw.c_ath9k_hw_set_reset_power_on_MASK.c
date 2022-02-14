
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
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,int ,int) ;
 int VAR_12 ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,int ) ;
 int FUNC_7 (struct ath_hw*,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static bool FUNC_10(struct ath_hw *VAR_13)
{
 FUNC_2(VAR_13);

 if (FUNC_1(VAR_13)) {
  FUNC_4(VAR_13, VAR_10, VAR_13->WARegVal);
  FUNC_9(10);
 }

 FUNC_4(VAR_13, VAR_3, VAR_4 |
    VAR_5);

 if (!FUNC_0(VAR_13) && !FUNC_1(VAR_13))
  FUNC_4(VAR_13, VAR_1, VAR_2);

 FUNC_4(VAR_13, VAR_6, 0);

 FUNC_3(VAR_13);

 FUNC_9(2);

 if (!FUNC_0(VAR_13) && !FUNC_1(VAR_13))
  FUNC_4(VAR_13, VAR_1, 0);

 FUNC_4(VAR_13, VAR_6, 1);

 if (!FUNC_7(VAR_13,
      VAR_7,
      VAR_8,
      VAR_9,
      VAR_0)) {
  FUNC_8(FUNC_5(VAR_13), VAR_12, "RTC not waking up\n");
  return 0;
 }

 return FUNC_6(VAR_13, VAR_11);
}
