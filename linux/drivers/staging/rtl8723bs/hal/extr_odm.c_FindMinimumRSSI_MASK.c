
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bLinked; } ;
struct dm_priv {scalar_t__ EntryMinUndecoratedSmoothedPWDB; scalar_t__ MinUndecoratedPWDBForDM; } ;
struct hal_com_data {TYPE_1__ odmpriv; struct dm_priv dmpriv; } ;
struct adapter {int dummy; } ;
typedef TYPE_1__* PDM_ODM_T ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0)
{
 struct hal_com_data *VAR_1 = FUNC_0(VAR_0);
 struct dm_priv *VAR_2 = &VAR_1->dmpriv;
 PDM_ODM_T VAR_3 = &(VAR_1->odmpriv);



 if (
  (VAR_3->bLinked != 1) &&
  (VAR_2->EntryMinUndecoratedSmoothedPWDB == 0)
 ) {
  VAR_2->MinUndecoratedPWDBForDM = 0;

 } else
  VAR_2->MinUndecoratedPWDBForDM = VAR_2->EntryMinUndecoratedSmoothedPWDB;



}
