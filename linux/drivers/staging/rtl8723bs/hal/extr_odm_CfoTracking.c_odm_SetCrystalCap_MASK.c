
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int CrystalCap; } ;
struct TYPE_4__ {int Adapter; TYPE_2__ DM_CfoTrack; } ;
typedef TYPE_1__* PDM_ODM_T ;
typedef TYPE_2__* PCFO_TRACKING ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(void *VAR_3, u8 VAR_4)
{
 PDM_ODM_T VAR_5 = (PDM_ODM_T)VAR_3;
 PCFO_TRACKING VAR_6 = &VAR_5->DM_CfoTrack;

 if (VAR_6->CrystalCap == VAR_4)
  return;

 VAR_6->CrystalCap = VAR_4;


 VAR_4 = VAR_4 & 0x3F;
 FUNC_1(
  VAR_5->Adapter,
  VAR_2,
  0x00FFF000,
  (VAR_4 | (VAR_4 << 6))
 );

 FUNC_0(
  VAR_5,
  VAR_0,
  VAR_1,
  (
   "odm_SetCrystalCap(): CrystalCap = 0x%x\n",
   VAR_4
  )
 );
}
