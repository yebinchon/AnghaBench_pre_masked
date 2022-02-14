
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct odm_dm_struct {int dummy; } ;
struct dm_priv {int DMFlag; int DM_Type; } ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {struct odm_dm_struct odmpriv; struct dm_priv dmpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct odm_dm_struct*) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;

void FUNC_3(struct adapter *VAR_2)
{
 struct dm_priv *VAR_3 = &VAR_2->HalData->dmpriv;
 struct odm_dm_struct *VAR_4 = &(VAR_2->HalData->odmpriv);

 FUNC_2(VAR_2);
 VAR_3->DM_Type = VAR_0;
 VAR_3->DMFlag = VAR_1;
 FUNC_1(VAR_2);
 FUNC_0(VAR_4);
}
