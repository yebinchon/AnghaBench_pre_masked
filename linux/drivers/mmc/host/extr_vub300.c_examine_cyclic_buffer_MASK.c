
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct vub300_mmc_host {int total_offload_count; TYPE_1__* fn; } ;
struct offload_registers_access {size_t* command_byte; int* Respond_Byte; } ;
struct mmc_command {int arg; size_t* resp; } ;
struct TYPE_2__ {int offload_point; size_t offload_count; struct offload_registers_access* reg; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct vub300_mmc_host *VAR_1,
     struct mmc_command *VAR_2, u8 VAR_3)
{

 u8 VAR_4 = 0xFF & (VAR_2->arg >> 24);
 u8 VAR_5 = 0xFF & (VAR_2->arg >> 16);
 u8 VAR_6 = 0xFF & (VAR_2->arg >> 8);
 u8 VAR_7 = 0xFF & (VAR_2->arg >> 0);
 int VAR_8 = VAR_0 & VAR_1->fn[VAR_3].offload_point;
 struct offload_registers_access *VAR_9 = &VAR_1->fn[VAR_3].reg[VAR_8];
 if (VAR_4 == VAR_9->command_byte[0] &&
     VAR_5 == VAR_9->command_byte[1] &&
     VAR_6 == VAR_9->command_byte[2] &&
     VAR_7 == VAR_9->command_byte[3]) {
  u8 VAR_10 = 0x00;
  VAR_2->resp[1] = VAR_10 << 24;
  VAR_2->resp[0] = (VAR_9->Respond_Byte[0] << 24)
   | (VAR_9->Respond_Byte[1] << 16)
   | (VAR_9->Respond_Byte[2] << 8)
   | (VAR_9->Respond_Byte[3] << 0);
  VAR_1->fn[VAR_3].offload_point += 1;
  VAR_1->fn[VAR_3].offload_count -= 1;
  VAR_1->total_offload_count -= 1;
  return 1;
 } else {
  int VAR_11 = 1;
  u8 VAR_12 = VAR_1->fn[VAR_3].offload_count - 1;
  u32 VAR_13 = VAR_1->fn[VAR_3].offload_point + 1;
  while (0 < VAR_12) {
   int VAR_14 = VAR_0 & VAR_13;
   struct offload_registers_access *VAR_15 =
    &VAR_1->fn[VAR_3].reg[VAR_14];
   if (VAR_4 == VAR_15->command_byte[0] &&
       VAR_5 == VAR_15->command_byte[1] &&
       VAR_6 == VAR_15->command_byte[2] &&
       VAR_7 == VAR_15->command_byte[3]) {
    u8 VAR_16 = 0x00;
    VAR_2->resp[1] = VAR_16 << 24;
    VAR_2->resp[0] = (VAR_15->Respond_Byte[0] << 24)
     | (VAR_15->Respond_Byte[1] << 16)
     | (VAR_15->Respond_Byte[2] << 8)
     | (VAR_15->Respond_Byte[3] << 0);
    VAR_1->fn[VAR_3].offload_point += VAR_11;
    VAR_1->fn[VAR_3].offload_count -= VAR_11;
    VAR_1->total_offload_count -= VAR_11;
    return 1;
   } else {
    VAR_13 += 1;
    VAR_12 -= 1;
    VAR_11 += 1;
    continue;
   }
  }
  return 0;
 }
}
