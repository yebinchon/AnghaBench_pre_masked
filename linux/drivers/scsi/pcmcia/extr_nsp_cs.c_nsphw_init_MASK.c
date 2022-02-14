
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int BaseAddress; int ScsiClockDiv; int TransferMode; scalar_t__ FifoCount; int * CurrentSC; } ;
typedef TYPE_1__ nsp_hw_data ;


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
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (unsigned int,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(nsp_hw_data *VAR_32)
{
 unsigned int VAR_33 = VAR_32->BaseAddress;

 FUNC_0(VAR_15, "in base=0x%x", VAR_33);

 VAR_32->ScsiClockDiv = VAR_3 | VAR_5;
 VAR_32->CurrentSC = ((void*)0);
 VAR_32->FifoCount = 0;
 VAR_32->TransferMode = VAR_14;

 FUNC_6(VAR_32);


 FUNC_5(VAR_33, VAR_10, VAR_12);


 FUNC_5(VAR_33, VAR_7, VAR_8);

 FUNC_2(VAR_33, VAR_23, 0);

 FUNC_2(VAR_33, VAR_30, VAR_14);
 FUNC_2(VAR_33, VAR_2, VAR_32->ScsiClockDiv);

 FUNC_2(VAR_33, VAR_17, 0);
 FUNC_2(VAR_33, VAR_18, VAR_19 |
         VAR_1 |
         VAR_21 |
         VAR_6);


 FUNC_5(VAR_33, VAR_7, VAR_9);
 FUNC_2(VAR_33, VAR_27, 0);
 if ((FUNC_1(VAR_33, VAR_16) & VAR_29) == 0) {
  FUNC_3(VAR_13, "terminator power on");
  FUNC_2(VAR_33, VAR_27, VAR_20);
 }

 FUNC_2(VAR_33, VAR_28, 0);
 FUNC_2(VAR_33, VAR_28, 0);

 FUNC_2(VAR_33, VAR_26, 0);
 FUNC_2(VAR_33, VAR_0, 0);


 FUNC_2(VAR_33, VAR_23, VAR_24 |
         VAR_22 |
         VAR_25 );
 FUNC_5(VAR_33, VAR_10, VAR_11);

 FUNC_4(VAR_32, VAR_4);

 return VAR_31;
}
