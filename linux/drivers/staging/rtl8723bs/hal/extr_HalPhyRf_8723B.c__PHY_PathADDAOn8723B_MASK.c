
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
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_2 (int ,size_t,int ,size_t) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(
 struct adapter *VAR_4,
 u32 *VAR_5,
 bool VAR_6
)
{
 u32 VAR_7;
 u32 VAR_8;
 struct hal_com_data *VAR_9 = FUNC_0(VAR_4);
 PDM_ODM_T VAR_10 = &VAR_9->odmpriv;

 FUNC_1(VAR_10, VAR_1, VAR_2, ("ADDA ON.\n"));

 VAR_7 = 0x01c00014;
 if (!VAR_6) {
  VAR_7 = 0x01c00014;
  FUNC_2(VAR_10->Adapter, VAR_5[0], VAR_3, 0x01c00014);
 } else {
  FUNC_2(VAR_10->Adapter, VAR_5[0], VAR_3, VAR_7);
 }

 for (VAR_8 = 1 ; VAR_8 < VAR_0 ; VAR_8++) {
  FUNC_2(VAR_10->Adapter, VAR_5[VAR_8], VAR_3, VAR_7);
 }

}
