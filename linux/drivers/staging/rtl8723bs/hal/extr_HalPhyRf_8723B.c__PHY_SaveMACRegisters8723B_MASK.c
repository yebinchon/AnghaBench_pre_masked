
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int Adapter; } ;
struct hal_com_data {TYPE_1__ odmpriv; } ;
struct adapter {int dummy; } ;
typedef TYPE_1__* PDM_ODM_T ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(
 struct adapter *VAR_3, u32 *VAR_4, u32 *VAR_5
)
{
 u32 VAR_6;
 struct hal_com_data *VAR_7 = FUNC_0(VAR_3);
 PDM_ODM_T VAR_8 = &VAR_7->odmpriv;

 FUNC_1(VAR_8, VAR_1, VAR_2, ("Save MAC parameters.\n"));
 for (VAR_6 = 0 ; VAR_6 < (VAR_0 - 1); VAR_6++) {
  VAR_5[VAR_6] = FUNC_3(VAR_8->Adapter, VAR_4[VAR_6]);
 }
 VAR_5[VAR_6] = FUNC_2(VAR_8->Adapter, VAR_4[VAR_6]);

}
