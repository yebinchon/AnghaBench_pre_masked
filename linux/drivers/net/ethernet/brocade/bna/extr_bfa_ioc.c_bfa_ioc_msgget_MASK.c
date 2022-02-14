
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union bfi_ioc_i2h_msg_u {int dummy; } bfi_ioc_i2h_msg_u ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ lpu_mbox_cmd; scalar_t__ lpu_mbox; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static bool
FUNC_3(struct bfa_ioc *VAR_0, void *VAR_1)
{
 u32 *VAR_2 = VAR_1;
 u32 VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_0->ioc_regs.lpu_mbox_cmd);
 if ((VAR_3 & 1) == 0)
  return 0;




 for (VAR_4 = 0; VAR_4 < (sizeof(union bfi_ioc_i2h_msg_u) / sizeof(u32));
      VAR_4++) {
  VAR_3 = FUNC_1(VAR_0->ioc_regs.lpu_mbox +
       VAR_4 * sizeof(u32));
  VAR_2[VAR_4] = FUNC_0(VAR_3);
 }




 FUNC_2(1, VAR_0->ioc_regs.lpu_mbox_cmd);
 FUNC_1(VAR_0->ioc_regs.lpu_mbox_cmd);

 return 1;
}
