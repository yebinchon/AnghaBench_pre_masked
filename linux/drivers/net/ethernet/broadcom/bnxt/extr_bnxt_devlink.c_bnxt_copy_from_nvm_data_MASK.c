
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union devlink_param_value {scalar_t__ vu8; scalar_t__ vu16; scalar_t__ vu32; int vbool; } ;
union bnxt_nvm_data {int val32; int val8; } ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(union devlink_param_value *VAR_0,
        union bnxt_nvm_data *VAR_1,
        int VAR_2, int VAR_3)
{
 u32 VAR_4;

 if (VAR_2 == 1) {
  VAR_0->vbool = VAR_1->val8;
  return;
 }
 VAR_4 = FUNC_0(VAR_1->val32);
 if (VAR_3 == 4)
  VAR_0->vu32 = VAR_4;
 else if (VAR_3 == 2)
  VAR_0->vu16 = (u16)VAR_4;
 else if (VAR_3 == 1)
  VAR_0->vu8 = (u8)VAR_4;
}
