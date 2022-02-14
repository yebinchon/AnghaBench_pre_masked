
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_priv {int DMFlag; int InitDMFlag; int DM_Type; } ;
struct hal_com_data {int odmpriv; struct dm_priv dmpriv; } ;
struct adapter {int dummy; } ;
typedef int * PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct adapter*) ;

void FUNC_3(struct adapter *VAR_3)
{
 struct hal_com_data *VAR_4 = FUNC_0(VAR_3);
 struct dm_priv *VAR_5 = &VAR_4->dmpriv;
 PDM_ODM_T VAR_6 = &(VAR_4->odmpriv);

 VAR_5->DM_Type = VAR_0;
 VAR_5->DMFlag = VAR_2;

 VAR_5->DMFlag |= VAR_1;

 VAR_5->InitDMFlag = VAR_5->DMFlag;

 FUNC_2(VAR_3);

 FUNC_1(VAR_6);
}
