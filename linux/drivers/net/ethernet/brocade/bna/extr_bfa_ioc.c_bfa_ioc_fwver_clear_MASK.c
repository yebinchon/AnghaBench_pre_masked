
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct bfi_ioc_image_hdr {int dummy; } ;
struct TYPE_2__ {scalar_t__ smem_page_start; scalar_t__ host_page_num_fn; int smem_pg0; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct bfa_ioc *VAR_0)
{
 u32 VAR_1, VAR_2, VAR_3 = 0;
 int VAR_4;

 VAR_1 = FUNC_0(VAR_0->ioc_regs.smem_pg0, VAR_3);
 VAR_2 = FUNC_1(VAR_3);
 FUNC_2(VAR_1, VAR_0->ioc_regs.host_page_num_fn);

 for (VAR_4 = 0; VAR_4 < (sizeof(struct bfi_ioc_image_hdr) / sizeof(u32)); VAR_4++) {
  FUNC_2(0, VAR_0->ioc_regs.smem_page_start + VAR_3);
  VAR_3 += sizeof(u32);
 }
}
