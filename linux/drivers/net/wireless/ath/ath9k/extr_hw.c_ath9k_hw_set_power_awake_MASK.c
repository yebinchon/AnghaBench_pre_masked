
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int WARegVal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_hw*,int ,int ) ;
 int FUNC_5 (struct ath_hw*,int ,int ) ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*,int *) ;
 scalar_t__ FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*,int ) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;

__attribute__((used)) static bool FUNC_14(struct ath_hw *VAR_13)
{
 u32 VAR_14;
 int VAR_15;


 if (FUNC_1(VAR_13)) {
  FUNC_5(VAR_13, VAR_10, VAR_13->WARegVal);
  FUNC_13(10);
 }

 if ((FUNC_3(VAR_13, VAR_4) &
      VAR_5) == VAR_7) {
  if (!FUNC_10(VAR_13, VAR_11)) {
   return 0;
  }
  if (!FUNC_1(VAR_13))
   FUNC_8(VAR_13, ((void*)0));
 }
 if (FUNC_0(VAR_13))
  FUNC_4(VAR_13, VAR_2,
       VAR_3);

 FUNC_4(VAR_13, VAR_0,
      VAR_1);
 if (FUNC_0(VAR_13))
  FUNC_12(10);
 else
  FUNC_13(50);

 for (VAR_15 = VAR_12 / 50; VAR_15 > 0; VAR_15--) {
  VAR_14 = FUNC_3(VAR_13, VAR_4) & VAR_5;
  if (VAR_14 == VAR_6)
   break;
  FUNC_13(50);
  FUNC_4(VAR_13, VAR_0,
       VAR_1);
 }
 if (VAR_15 == 0) {
  FUNC_11(FUNC_7(VAR_13),
   "Failed to wakeup in %uus\n",
   VAR_12 / 20);
  return 0;
 }

 if (FUNC_9(VAR_13))
  FUNC_6(VAR_13);

 FUNC_2(VAR_13, VAR_8, VAR_9);

 return 1;
}
