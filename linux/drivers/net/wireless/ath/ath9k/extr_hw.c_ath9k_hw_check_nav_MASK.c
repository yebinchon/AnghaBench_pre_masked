
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,int ,char*,int) ;

void FUNC_4(struct ath_hw *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (VAR_4 != 0xdeadbeef && VAR_4 > 0x7fff) {
  FUNC_3(VAR_3, VAR_1, "Abnormal NAV: 0x%x\n", VAR_4);
  FUNC_1(VAR_2, VAR_0, 0);
 }
}
