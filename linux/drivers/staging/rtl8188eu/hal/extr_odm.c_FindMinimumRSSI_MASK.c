
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_priv {int EntryMinUndecoratedSmoothedPWDB; int MinUndecoratedPWDBForDM; } ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {struct dm_priv dmpriv; } ;



__attribute__((used)) static void FUNC_0(struct adapter *VAR_0)
{
 struct dm_priv *VAR_1 = &VAR_0->HalData->dmpriv;


 VAR_1->MinUndecoratedPWDBForDM = VAR_1->EntryMinUndecoratedSmoothedPWDB;
}
