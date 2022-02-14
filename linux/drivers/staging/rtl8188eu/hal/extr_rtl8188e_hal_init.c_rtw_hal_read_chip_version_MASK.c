
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct HAL_VERSION {int CUTVersion; int VendorType; int ChipType; } ;
struct hal_data_8188e {struct HAL_VERSION VersionID; } ;
struct adapter {struct hal_data_8188e* HalData; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct HAL_VERSION) ;
 int FUNC_1 (struct adapter*,int ) ;

void FUNC_2(struct adapter *VAR_9)
{
 u32 VAR_10;
 struct HAL_VERSION VAR_11;
 struct hal_data_8188e *VAR_12 = VAR_9->HalData;

 VAR_10 = FUNC_1(VAR_9, VAR_5);
 VAR_11.ChipType = ((VAR_10 & VAR_6) ? VAR_7 : VAR_4);
 VAR_11.VendorType = ((VAR_10 & VAR_8) ? VAR_1 : VAR_0);
 VAR_11.CUTVersion = (VAR_10 & VAR_2)>>VAR_3;

 FUNC_0(VAR_11);

 VAR_12->VersionID = VAR_11;
}
