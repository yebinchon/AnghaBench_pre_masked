
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hal_com_data {int CrystalCap; } ;
struct adapter {int dummy; } ;
struct TYPE_2__ {struct adapter* Adapter; } ;
typedef TYPE_1__* PDM_ODM_T ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;

__attribute__((used)) static u8 FUNC_1(void *VAR_0)
{
 PDM_ODM_T VAR_1 = (PDM_ODM_T)VAR_0;
 u8 VAR_2 = 0x20;

 struct adapter *VAR_3 = VAR_1->Adapter;
 struct hal_com_data *VAR_4 = FUNC_0(VAR_3);

 VAR_2 = VAR_4->CrystalCap;

 VAR_2 = VAR_2 & 0x3f;

 return VAR_2;
}
