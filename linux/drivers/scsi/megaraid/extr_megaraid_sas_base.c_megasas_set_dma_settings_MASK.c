
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct megasas_instance {scalar_t__ consistent_mask_64bit; } ;
struct TYPE_6__ {TYPE_2__* sge32; TYPE_1__* sge64; } ;
struct megasas_dcmd_frame {int flags; TYPE_3__ sgl; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {void* length; void* phys_addr; } ;
struct TYPE_4__ {void* length; int phys_addr; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct megasas_instance *VAR_1,
         struct megasas_dcmd_frame *VAR_2,
         dma_addr_t VAR_3, u32 VAR_4)
{
 if (VAR_1->consistent_mask_64bit) {
  VAR_2->sgl.sge64[0].phys_addr = FUNC_2(VAR_3);
  VAR_2->sgl.sge64[0].length = FUNC_1(VAR_4);
  VAR_2->flags = FUNC_0(VAR_2->flags | VAR_0);

 } else {
  VAR_2->sgl.sge32[0].phys_addr =
    FUNC_1(FUNC_3(VAR_3));
  VAR_2->sgl.sge32[0].length = FUNC_1(VAR_4);
  VAR_2->flags = FUNC_0(VAR_2->flags);
 }
}
