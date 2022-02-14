
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int DeltaSwingTableIdx_5GB_N; int DeltaSwingTableIdx_5GB_P; int DeltaSwingTableIdx_5GA_N; int DeltaSwingTableIdx_5GA_P; int DeltaSwingTableIdx_2GCCKB_N; int DeltaSwingTableIdx_2GCCKB_P; int DeltaSwingTableIdx_2GCCKA_N; int DeltaSwingTableIdx_2GCCKA_P; int DeltaSwingTableIdx_2GB_N; int DeltaSwingTableIdx_2GB_P; int DeltaSwingTableIdx_2GA_N; int DeltaSwingTableIdx_2GA_P; } ;
struct TYPE_6__ {TYPE_1__ RFCalibrateInfo; } ;
typedef TYPE_1__* PODM_RF_CAL_T ;
typedef TYPE_2__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(PDM_ODM_T VAR_15)
{
 PODM_RF_CAL_T VAR_16 = &(VAR_15->RFCalibrateInfo);

 FUNC_0(
  VAR_15,
  VAR_1,
  VAR_2,
  ("===> ODM_ReadAndConfig_MP_MP_8723B\n")
 );


 FUNC_1(
  VAR_16->DeltaSwingTableIdx_2GA_P,
  VAR_4,
  VAR_0
 );
 FUNC_1(
  VAR_16->DeltaSwingTableIdx_2GA_N,
  VAR_3,
  VAR_0
 );
 FUNC_1(
  VAR_16->DeltaSwingTableIdx_2GB_P,
  VAR_6,
  VAR_0
 );
 FUNC_1(
  VAR_16->DeltaSwingTableIdx_2GB_N,
  VAR_5,
  VAR_0
 );

 FUNC_1(
  VAR_16->DeltaSwingTableIdx_2GCCKA_P,
  VAR_8,
  VAR_0
 );
 FUNC_1(
  VAR_16->DeltaSwingTableIdx_2GCCKA_N,
  VAR_7,
  VAR_0
 );
 FUNC_1(
  VAR_16->DeltaSwingTableIdx_2GCCKB_P,
  VAR_10,
  VAR_0
 );
 FUNC_1(
  VAR_16->DeltaSwingTableIdx_2GCCKB_N,
  VAR_9,
  VAR_0
 );

 FUNC_1(
  VAR_16->DeltaSwingTableIdx_5GA_P,
  VAR_12,
  VAR_0*3
 );
 FUNC_1(
  VAR_16->DeltaSwingTableIdx_5GA_N,
  VAR_11,
  VAR_0*3
 );
 FUNC_1(
  VAR_16->DeltaSwingTableIdx_5GB_P,
  VAR_14,
  VAR_0*3
 );
 FUNC_1(
  VAR_16->DeltaSwingTableIdx_5GB_N,
  VAR_13,
  VAR_0*3
 );
}
