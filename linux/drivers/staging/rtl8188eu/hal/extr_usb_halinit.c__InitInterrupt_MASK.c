
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_4__ {int ishighspeed; } ;
struct TYPE_3__ {int* IntrMask; } ;


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
 TYPE_2__* FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,int) ;
 int FUNC_3 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_13)
{
 u32 VAR_14, VAR_15;
 u8 VAR_16;


 FUNC_2(VAR_13, VAR_11, 0xFFFFFFFF);

 VAR_14 = VAR_2 | VAR_5 | VAR_1 | VAR_0;
 FUNC_2(VAR_13, VAR_10, VAR_14);
 VAR_13->HalData->IntrMask[0] = VAR_14;

 VAR_15 = VAR_6 | VAR_3 | VAR_7 | VAR_4;
 FUNC_2(VAR_13, VAR_9, VAR_15);
 VAR_13->HalData->IntrMask[1] = VAR_15;




 VAR_16 = FUNC_1(VAR_13, VAR_12);

 if (!FUNC_0(VAR_13)->ishighspeed)
  VAR_16 = VAR_16 & (~VAR_8);
 else
  VAR_16 = VAR_16 | (VAR_8);

 FUNC_3(VAR_13, VAR_12, VAR_16);
}
