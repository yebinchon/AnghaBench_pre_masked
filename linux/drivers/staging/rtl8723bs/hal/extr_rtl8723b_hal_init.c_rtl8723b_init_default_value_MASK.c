
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_5__ {int fakeBTEfuseModifiedMap; int fakeBTEfuseInitMap; int fakeBTEfuseContent; scalar_t__ fakeBTEfuseUsedBytes; int BTEfuseModifiedMap; int BTEfuseInitMap; int BTEfuseContent; scalar_t__ BTEfuseUsedPercentage; scalar_t__ BTEfuseUsedBytes; int fakeEfuseModifiedMap; int fakeEfuseInitMap; int fakeEfuseContent; scalar_t__ fakeEfuseUsedBytes; scalar_t__ fakeEfuseBank; } ;
struct dm_priv {scalar_t__* ThermalValue_HP; scalar_t__ ThermalValue_HP_index; scalar_t__ TM_Trigger; } ;
struct hal_com_data {int fw_ractrl; int bIQKInitialized; TYPE_2__ EfuseHal; scalar_t__ EfuseUsedPercentage; scalar_t__ EfuseUsedBytes; scalar_t__ LastHMEBoxNum; struct dm_priv dmpriv; } ;
struct TYPE_4__ {int wireless_mode; } ;
struct adapter {TYPE_1__ registrypriv; } ;
struct TYPE_6__ {int bkeepfwalive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 size_t VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_1 (struct adapter*) ;
 int FUNC_2 (int ,int,int) ;

void FUNC_3(struct adapter *VAR_6)
{
 struct hal_com_data *VAR_7;
 struct dm_priv *VAR_8;
 u8 VAR_9;


 VAR_7 = FUNC_0(VAR_6);
 VAR_8 = &VAR_7->dmpriv;

 VAR_6->registrypriv.wireless_mode = VAR_5;


 VAR_7->fw_ractrl = 0;
 VAR_7->bIQKInitialized = 0;
 if (!FUNC_1(VAR_6)->bkeepfwalive)
  VAR_7->LastHMEBoxNum = 0;

 VAR_7->bIQKInitialized = 0;


 VAR_8->TM_Trigger = 0;




 VAR_8->ThermalValue_HP_index = 0;
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  VAR_8->ThermalValue_HP[VAR_9] = 0;


 VAR_7->EfuseUsedBytes = 0;
 VAR_7->EfuseUsedPercentage = 0;
}
