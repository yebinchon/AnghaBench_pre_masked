
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bfi_ioc_image_hdr {int dummy; } ;
struct TYPE_2__ {int ioc_usage_sem_reg; int ioc_usage_reg; int ioc_fwstate; int ioc_fail_sync; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; } ;
typedef enum bfi_ioc_state { ____Placeholder_bfi_ioc_state } bfi_ioc_state ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_ioc*) ;
 int FUNC_3 (struct bfa_ioc*,struct bfi_ioc_image_hdr*) ;
 int FUNC_4 (struct bfa_ioc*,struct bfi_ioc_image_hdr*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static bool
FUNC_9(struct bfa_ioc *VAR_2)
{
 enum bfi_ioc_state VAR_3;
 u32 VAR_4;
 struct bfi_ioc_image_hdr VAR_5;




 if (FUNC_1(FUNC_2(VAR_2)) <
      VAR_0)
  return 1;

 FUNC_5(VAR_2->ioc_regs.ioc_usage_sem_reg);
 VAR_4 = FUNC_7(VAR_2->ioc_regs.ioc_usage_reg);




 if (VAR_4 == 0) {
  FUNC_8(1, VAR_2->ioc_regs.ioc_usage_reg);
  FUNC_6(VAR_2->ioc_regs.ioc_usage_sem_reg);
  FUNC_8(0, VAR_2->ioc_regs.ioc_fail_sync);
  return 1;
 }

 VAR_3 = FUNC_7(VAR_2->ioc_regs.ioc_fwstate);




 FUNC_0(!(VAR_3 != VAR_1));




 FUNC_4(VAR_2, &VAR_5);
 if (!FUNC_3(VAR_2, &VAR_5)) {
  FUNC_6(VAR_2->ioc_regs.ioc_usage_sem_reg);
  return 0;
 }




 VAR_4++;
 FUNC_8(VAR_4, VAR_2->ioc_regs.ioc_usage_reg);
 FUNC_6(VAR_2->ioc_regs.ioc_usage_sem_reg);
 return 1;
}
