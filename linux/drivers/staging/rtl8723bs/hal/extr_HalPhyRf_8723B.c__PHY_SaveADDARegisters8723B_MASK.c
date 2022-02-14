
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int Adapter; } ;
struct hal_com_data {TYPE_1__ odmpriv; } ;
struct adapter {int dummy; } ;
typedef TYPE_1__* PDM_ODM_T ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_0 ;
 int FUNC_1 (struct adapter*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int ,char*) ;
 size_t FUNC_3 (int ,size_t,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(
 struct adapter *VAR_3,
 u32 *VAR_4,
 u32 *VAR_5,
 u32 VAR_6
)
{
 u32 VAR_7;
 struct hal_com_data *VAR_8 = FUNC_0(VAR_3);
 PDM_ODM_T VAR_9 = &VAR_8->odmpriv;

 if (!FUNC_1(VAR_3))
  return;

 FUNC_2(VAR_9, VAR_0, VAR_1, ("Save ADDA parameters.\n"));
 for (VAR_7 = 0 ; VAR_7 < VAR_6 ; VAR_7++) {
  VAR_5[VAR_7] = FUNC_3(VAR_9->Adapter, VAR_4[VAR_7], VAR_2);
 }
}
