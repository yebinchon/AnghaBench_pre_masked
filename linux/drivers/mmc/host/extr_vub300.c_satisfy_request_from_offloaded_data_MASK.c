
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct vub300_mmc_host {size_t dynamic_register_count; scalar_t__ total_offload_count; TYPE_2__* fn; TYPE_1__* sdio_register; } ;
struct mmc_command {int arg; size_t* resp; } ;
struct TYPE_4__ {scalar_t__ offload_count; } ;
struct TYPE_3__ {size_t func_num; scalar_t__ sdio_reg; size_t response; size_t regvalue; scalar_t__ prepared; } ;


 size_t FUNC_0 (struct mmc_command*) ;
 scalar_t__ FUNC_1 (struct mmc_command*) ;
 int FUNC_2 (struct vub300_mmc_host*,struct mmc_command*,size_t) ;

__attribute__((used)) static int FUNC_3(struct vub300_mmc_host *VAR_0,
            struct mmc_command *VAR_1)
{

 u8 VAR_2 = VAR_0->dynamic_register_count;
 u8 VAR_3 = 0;
 u8 VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5 = FUNC_1(VAR_1);
 while (0 < VAR_2--) {
  if ((VAR_0->sdio_register[VAR_3].func_num == VAR_4) &&
      (VAR_0->sdio_register[VAR_3].sdio_reg == VAR_5)) {
   if (!VAR_0->sdio_register[VAR_3].prepared) {
    return 0;
   } else if ((0x80000000 & VAR_1->arg) == 0x80000000) {




    VAR_0->sdio_register[VAR_3].prepared = 0;
    return 0;
   } else {
    u8 VAR_6 = 0x00;
    u8 VAR_7 = 0x00;
    u8 VAR_8 = 0x00;
    u8 VAR_9 = VAR_0->sdio_register[VAR_3].response;
    u8 VAR_10 = VAR_0->sdio_register[VAR_3].regvalue;
    VAR_0->sdio_register[VAR_3].prepared = 0;
    VAR_1->resp[1] = VAR_6 << 24;
    VAR_1->resp[0] = (VAR_7 << 24)
     | (VAR_8 << 16)
     | (VAR_9 << 8)
     | (VAR_10 << 0);
    return 1;
   }
  } else {
   VAR_3 += 1;
   continue;
  }
 }
 if (VAR_0->total_offload_count == 0)
  return 0;
 else if (VAR_0->fn[VAR_4].offload_count == 0)
  return 0;
 else
  return FUNC_2(VAR_0, VAR_1, VAR_4);
}
