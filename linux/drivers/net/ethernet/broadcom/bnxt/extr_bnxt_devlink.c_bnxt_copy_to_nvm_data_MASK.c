
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union devlink_param_value {scalar_t__ vu8; scalar_t__ vu16; scalar_t__ vu32; int vbool; } ;
union bnxt_nvm_data {int val32; int val8; } ;
typedef scalar_t__ u32 ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(union bnxt_nvm_data *VAR_0,
      union devlink_param_value *VAR_1,
      int VAR_2, int VAR_3)
{
 u32 VAR_4 = 0;

 if (VAR_2 == 1) {
  VAR_0->val8 = VAR_1->vbool;
  return;
 }
 if (VAR_3 == 4)
  VAR_4 = VAR_1->vu32;
 else if (VAR_3 == 2)
  VAR_4 = (u32)VAR_1->vu16;
 else if (VAR_3 == 1)
  VAR_4 = (u32)VAR_1->vu8;
 VAR_0->val32 = FUNC_0(VAR_4);
}
