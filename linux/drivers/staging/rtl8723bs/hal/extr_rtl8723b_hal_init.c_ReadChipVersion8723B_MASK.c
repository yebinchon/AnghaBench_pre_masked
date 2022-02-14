
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int CUTVersion; int ROMVer; int VendorType; int RFType; int ChipType; int ICType; } ;
struct hal_com_data {int rf_type; TYPE_1__ VersionID; int PolarityCtl; int MultiFunc; int RegulatorMode; } ;
struct adapter {int dummy; } ;
typedef TYPE_1__ HAL_VERSION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_1__) ;
 scalar_t__ FUNC_2 (TYPE_1__) ;
 int FUNC_3 (char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_4 (TYPE_1__) ;
 int FUNC_5 (struct adapter*,int ) ;

__attribute__((used)) static HAL_VERSION FUNC_6(struct adapter *VAR_30)
{
 u32 VAR_31;
 HAL_VERSION VAR_32;
 struct hal_com_data *VAR_33;


 VAR_33 = FUNC_0(VAR_30);

 VAR_31 = FUNC_5(VAR_30, VAR_10);
 VAR_32.ICType = VAR_1;
 VAR_32.ChipType = ((VAR_31 & VAR_16) ? VAR_26 : VAR_7);
 VAR_32.RFType = VAR_15;
 VAR_32.VendorType = ((VAR_31 & VAR_27) ? VAR_3 : VAR_2);
 VAR_32.CUTVersion = (VAR_31 & VAR_4)>>VAR_5;


 VAR_33->RegulatorMode = ((VAR_31 & VAR_25) ? VAR_17 : VAR_24);

 VAR_31 = FUNC_5(VAR_30, VAR_8);
 VAR_32.ROMVer = ((VAR_31 & VAR_14) >> 20);


 VAR_33->MultiFunc = VAR_20;
 VAR_31 = FUNC_5(VAR_30, VAR_9);
 VAR_33->MultiFunc |= ((VAR_31 & VAR_28) ? VAR_21 : 0);
 VAR_33->MultiFunc |= ((VAR_31 & VAR_0) ? VAR_18 : 0);
 VAR_33->MultiFunc |= ((VAR_31 & VAR_6) ? VAR_19 : 0);
 VAR_33->PolarityCtl = ((VAR_31 & VAR_29) ? VAR_22 : VAR_23);

 FUNC_4(VAR_32);

 VAR_33->VersionID = VAR_32;
 if (FUNC_1(VAR_32))
  VAR_33->rf_type = VAR_12;
 else if (FUNC_2(VAR_32))
  VAR_33->rf_type = VAR_13;
 else
  VAR_33->rf_type = VAR_11;

 FUNC_3("RF_Type is %x!!\n", VAR_33->rf_type);

 return VAR_32;
}
