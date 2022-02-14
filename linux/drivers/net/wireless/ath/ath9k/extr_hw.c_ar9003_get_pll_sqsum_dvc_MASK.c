
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hw*,int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_common*,char*) ;
 int FUNC_6 (int) ;

u32 FUNC_7(struct ath_hw *VAR_5)
{
 struct ath_common *VAR_6 = FUNC_4(VAR_5);
 int VAR_7 = 0;

 FUNC_0(VAR_5, VAR_0, VAR_1);
 FUNC_6(100);
 FUNC_2(VAR_5, VAR_0, VAR_1);

 while ((FUNC_1(VAR_5, VAR_2) & VAR_3) == 0) {

  FUNC_6(100);

  if (FUNC_3(VAR_7 >= 100)) {
   FUNC_5(VAR_6, "PLL4 measurement not done\n");
   break;
  }

  VAR_7++;
 }

 return (FUNC_1(VAR_5, VAR_0) & VAR_4) >> 3;
}
