
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ath_hw {int analogBank6Data; } ;
struct ath_common {int dummy; } ;


 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int,int,int,int) ;
 int FUNC_4 (struct ath_hw*,int*) ;
 struct ath_common* FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct ath_common*,int ,char*,int,int) ;

__attribute__((used)) static void FUNC_8(struct ath_hw *VAR_1, u16 VAR_2)
{
 struct ath_common *VAR_3 = FUNC_5(VAR_1);
 u32 VAR_4;
 int VAR_5 = 0;
 u32 VAR_6 = 0;

 if (!FUNC_0(VAR_1) || VAR_2 >= 3000)
  return;

 FUNC_2(FUNC_1(VAR_1));

 if (VAR_2 < 2412)
  VAR_6 = 0;
 else if (VAR_2 < 2422)
  VAR_6 = 1;
 else
  VAR_6 = 2;


 VAR_4 = FUNC_6(VAR_6, 3);

 FUNC_7(VAR_3, VAR_0, "Force rf_pwd_icsyndiv to %1d on %4d\n",
  VAR_6, VAR_2);


 FUNC_3(VAR_1->analogBank6Data, VAR_4, 3, 181, 3);


 FUNC_4(VAR_1, &VAR_5);
}
