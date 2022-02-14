
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct HAL_VERSION {scalar_t__ ChipType; scalar_t__ VendorType; int CUTVersion; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,...) ;

void FUNC_2(struct HAL_VERSION VAR_7)
{
 uint VAR_8 = 0;
 char VAR_9[128];

 VAR_8 += FUNC_1((VAR_9+VAR_8), "Chip Version Info: CHIP_8188E_");
 VAR_8 += FUNC_1((VAR_9+VAR_8), "%s_", VAR_7.ChipType == VAR_6 ?
         "Normal_Chip" : "Test_Chip");
 VAR_8 += FUNC_1((VAR_9+VAR_8), "%s_", VAR_7.VendorType == VAR_2 ?
         "TSMC" : "UMC");
 if (VAR_7.CUTVersion == VAR_0)
  VAR_8 += FUNC_1((VAR_9+VAR_8), "A_CUT_");
 else if (VAR_7.CUTVersion == VAR_1)
  VAR_8 += FUNC_1((VAR_9+VAR_8), "B_CUT_");
 else if (VAR_7.CUTVersion == VAR_3)
  VAR_8 += FUNC_1((VAR_9+VAR_8), "C_CUT_");
 else if (VAR_7.CUTVersion == VAR_4)
  VAR_8 += FUNC_1((VAR_9+VAR_8), "D_CUT_");
 else if (VAR_7.CUTVersion == VAR_5)
  VAR_8 += FUNC_1((VAR_9+VAR_8), "E_CUT_");
 else
  VAR_8 += FUNC_1((VAR_9+VAR_8), "UNKNOWN_CUT(%d)_",
          VAR_7.CUTVersion);
 VAR_8 += FUNC_1((VAR_9+VAR_8), "1T1R_");
 VAR_8 += FUNC_1((VAR_9+VAR_8), "RomVer(0)\n");

 FUNC_0("%s", VAR_9);
}
