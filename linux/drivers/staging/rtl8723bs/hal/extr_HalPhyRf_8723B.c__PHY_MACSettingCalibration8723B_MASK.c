
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_3__ {int Adapter; } ;
struct hal_com_data {TYPE_1__ odmpriv; } ;
struct adapter {int dummy; } ;
typedef TYPE_1__* PDM_ODM_T ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_2 (int ,size_t,int) ;

__attribute__((used)) static void FUNC_3(
 struct adapter *VAR_5, u32 *VAR_6, u32 *VAR_7
)
{
 u32 VAR_8 = 0;
 struct hal_com_data *VAR_9 = FUNC_0(VAR_5);
 PDM_ODM_T VAR_10 = &VAR_9->odmpriv;

 FUNC_1(VAR_10, VAR_3, VAR_4, ("MAC settings for Calibration.\n"));

 FUNC_2(VAR_10->Adapter, VAR_6[VAR_8], 0x3F);

 for (VAR_8 = 1 ; VAR_8 < (VAR_2 - 1); VAR_8++) {
  FUNC_2(VAR_10->Adapter, VAR_6[VAR_8], (u8)(VAR_7[VAR_8]&(~VAR_0)));
 }
 FUNC_2(VAR_10->Adapter, VAR_6[VAR_8], (u8)(VAR_7[VAR_8]&(~VAR_1)));

}
