
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct vub300_mmc_host {size_t dynamic_register_count; TYPE_1__* sdio_register; } ;
struct offload_registers_access {int* command_byte; int * Respond_Byte; } ;
struct TYPE_2__ {int activate; size_t func_num; scalar_t__ sdio_reg; int prepared; int regvalue; int response; } ;


 int FUNC_0 (struct vub300_mmc_host*,struct offload_registers_access*,size_t) ;

__attribute__((used)) static void FUNC_1(struct vub300_mmc_host *VAR_0,
         struct offload_registers_access *VAR_1)
{
 u32 VAR_2 = ((0x03 & VAR_1->command_byte[0]) << 15)
   | ((0xFF & VAR_1->command_byte[1]) << 7)
   | ((0xFE & VAR_1->command_byte[2]) >> 1);
 u8 VAR_3 = ((0x70 & VAR_1->command_byte[0]) >> 4);
 u8 VAR_4 = VAR_0->dynamic_register_count;
 u8 VAR_5 = 0;
 while (0 < VAR_4-- && 1 == VAR_0->sdio_register[VAR_5].activate) {
  if (VAR_0->sdio_register[VAR_5].func_num == VAR_3 &&
      VAR_0->sdio_register[VAR_5].sdio_reg == VAR_2) {
   if (VAR_0->sdio_register[VAR_5].prepared == 0)
    VAR_0->sdio_register[VAR_5].prepared = 1;
   VAR_0->sdio_register[VAR_5].response =
    VAR_1->Respond_Byte[2];
   VAR_0->sdio_register[VAR_5].regvalue =
    VAR_1->Respond_Byte[3];
   return;
  } else {
   VAR_5 += 1;
   continue;
  }
 }
 FUNC_0(VAR_0, VAR_1, VAR_3);
}
