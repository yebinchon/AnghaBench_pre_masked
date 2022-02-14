
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct bfi_ioc_image_hdr {int dummy; } ;
struct TYPE_2__ {scalar_t__ smem_page_start; int host_page_num_fn; } ;
struct bfa_ioc {TYPE_1__ ioc_regs; } ;


 scalar_t__ FUNC_0 (struct bfa_ioc*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;

void
FUNC_4(struct bfa_ioc *VAR_0, struct bfi_ioc_image_hdr *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3 = 0;
 int VAR_4;
 u32 *VAR_5 = (u32 *) VAR_1;

 VAR_2 = FUNC_0(VAR_0, VAR_3);
 FUNC_3(VAR_2, VAR_0->ioc_regs.host_page_num_fn);

 for (VAR_4 = 0; VAR_4 < (sizeof(struct bfi_ioc_image_hdr) / sizeof(u32));
      VAR_4++) {
  VAR_5[VAR_4] =
   FUNC_2(FUNC_1(VAR_3 + VAR_0->ioc_regs.smem_page_start));
  VAR_3 += sizeof(u32);
 }
}
