
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct bfi_ioc_image_hdr_s {int exec; } ;
struct bfa_iocpf_s {TYPE_2__* ioc; } ;
struct TYPE_9__ {int ioc_init_sem_reg; int smem_page_start; int host_page_num_fn; int smem_pg0; } ;
struct TYPE_10__ {TYPE_1__ ioc_regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,struct bfi_ioc_image_hdr_s*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,int ) ;

__attribute__((used)) static void
FUNC_14(struct bfa_iocpf_s *VAR_2)
{
 struct bfi_ioc_image_hdr_s VAR_3;
 u32 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8 = 0;
 int VAR_9;




 VAR_4 = FUNC_10(VAR_2->ioc->ioc_regs.ioc_init_sem_reg);
 while (VAR_4 & 0x1) {
  FUNC_12(20);
  VAR_4 = FUNC_10(VAR_2->ioc->ioc_regs.ioc_init_sem_reg);
 }


 VAR_5 = FUNC_3(VAR_2->ioc);
 if (VAR_5 == VAR_1) {
  FUNC_13(1, VAR_2->ioc->ioc_regs.ioc_init_sem_reg);
  goto sem_get;
 }

 FUNC_2(VAR_2->ioc, &VAR_3);

 if (FUNC_11(VAR_3.exec) == VAR_0) {
  FUNC_13(1, VAR_2->ioc->ioc_regs.ioc_init_sem_reg);
  goto sem_get;
 }




 VAR_6 = FUNC_0(VAR_2->ioc->ioc_regs.smem_pg0, VAR_8);
 VAR_7 = FUNC_1(VAR_8);
 FUNC_13(VAR_6, VAR_2->ioc->ioc_regs.host_page_num_fn);

 for (VAR_9 = 0; VAR_9 < sizeof(struct bfi_ioc_image_hdr_s) / sizeof(u32); VAR_9++) {
  FUNC_8(VAR_2->ioc->ioc_regs.smem_page_start, VAR_8, 0);
  VAR_8 += sizeof(u32);
 }

 FUNC_9(VAR_2->ioc, VAR_5);
 FUNC_9(VAR_2->ioc, FUNC_11(VAR_3.exec));
 FUNC_7(VAR_2->ioc, VAR_1);
 FUNC_6(VAR_2->ioc, VAR_1);




 FUNC_5(VAR_2->ioc);




 FUNC_13(1, VAR_2->ioc->ioc_regs.ioc_init_sem_reg);

sem_get:
 FUNC_4(VAR_2->ioc);
}
