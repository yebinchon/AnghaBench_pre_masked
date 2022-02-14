
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct odm_dm_struct {int dummy; } ;
struct dm_priv {int dummy; } ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {struct odm_dm_struct odmpriv; struct dm_priv dmpriv; } ;


 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct odm_dm_struct*) ;
 int FUNC_2 (struct dm_priv*,int ,int) ;

void FUNC_3(struct adapter *VAR_0)
{
 struct dm_priv *VAR_1 = &VAR_0->HalData->dmpriv;
 struct odm_dm_struct *VAR_2 = &VAR_0->HalData->odmpriv;

 FUNC_2(VAR_1, 0, sizeof(struct dm_priv));
 FUNC_0(VAR_0);
 FUNC_1(VAR_2);
}
