
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int Adapter; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(PDM_ODM_T VAR_2, u32 VAR_3, u8 VAR_4)
{
 FUNC_1(VAR_2->Adapter, VAR_3, VAR_4);
 FUNC_0(
  VAR_2,
  VAR_0,
  VAR_1,
  (
   "===> ODM_ConfigMACWithHeaderFile: [MAC_REG] %08X %08X\n",
   VAR_3,
   VAR_4
  )
 );
}
