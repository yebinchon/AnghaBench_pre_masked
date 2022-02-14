
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bfi_ioc_image_hdr {int exec; } ;
struct TYPE_2__ {int ioc_init_sem_reg; int ioc_sem_reg; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_ioc*) ;
 int FUNC_1 (struct bfa_ioc*) ;
 int FUNC_2 (struct bfa_ioc*,int) ;
 int FUNC_3 (struct bfa_ioc*,int) ;
 int FUNC_4 (struct bfa_ioc*,struct bfi_ioc_image_hdr*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void
FUNC_9(struct bfa_ioc *VAR_2)
{
 struct bfi_ioc_image_hdr VAR_3;
 u32 VAR_4, VAR_5;


 VAR_5 = FUNC_5(VAR_2->ioc_regs.ioc_init_sem_reg);
 while (VAR_5 & 0x1) {
  FUNC_7(20);
  VAR_5 = FUNC_5(VAR_2->ioc_regs.ioc_init_sem_reg);
 }

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 == VAR_1) {
  FUNC_8(1, VAR_2->ioc_regs.ioc_init_sem_reg);
  return;
 }

 FUNC_4(VAR_2, &VAR_3);

 if (FUNC_6(VAR_3.exec) == VAR_0) {
  FUNC_8(1, VAR_2->ioc_regs.ioc_init_sem_reg);
  return;
 }

 FUNC_0(VAR_2);
 FUNC_3(VAR_2, VAR_1);
 FUNC_2(VAR_2, VAR_1);




 FUNC_5(VAR_2->ioc_regs.ioc_sem_reg);
 FUNC_8(1, VAR_2->ioc_regs.ioc_sem_reg);


 FUNC_8(1, VAR_2->ioc_regs.ioc_init_sem_reg);
}
