
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ar5416IniArray {unsigned int ia_rows; } ;
struct TYPE_2__ {int aspm_l1_fix; } ;
struct ath_hw {int WARegVal; struct ar5416IniArray iniPcieSerdesLowPower; struct ar5416IniArray iniPcieSerdes; TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_2 ;
 int FUNC_1 (struct ar5416IniArray*,unsigned int,int) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;
 int FUNC_3 (struct ath_hw*,int,int) ;

__attribute__((used)) static void FUNC_4(struct ath_hw *VAR_3,
      bool VAR_4)
{
 unsigned int VAR_5;
 struct ar5416IniArray *VAR_6;






 if (FUNC_0(VAR_3)) {
  u32 VAR_7 = VAR_3->config.aspm_l1_fix;
  if ((VAR_7 & 0xff000000) == 0x17000000) {
   VAR_7 &= 0x00ffffff;
   VAR_7 |= 0x27000000;
   FUNC_3(VAR_3, 0x570c, VAR_7);
  }
 }


 if (!VAR_4 ) {

  FUNC_2(VAR_3, VAR_0, VAR_1);
  FUNC_3(VAR_3, VAR_2, VAR_3->WARegVal);
 }





 VAR_6 = VAR_4 ? &VAR_3->iniPcieSerdes :
  &VAR_3->iniPcieSerdesLowPower;

 for (VAR_5 = 0; VAR_5 < VAR_6->ia_rows; VAR_5++) {
  FUNC_3(VAR_3,
     FUNC_1(VAR_6, VAR_5, 0),
     FUNC_1(VAR_6, VAR_5, 1));
 }
}
