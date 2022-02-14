
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int* command_response; } ;
struct TYPE_4__ {TYPE_1__ response; } ;
struct vub300_mmc_host {int resp_len; TYPE_2__ resp; } ;
struct mmc_command {int* resp; int opcode; } ;



__attribute__((used)) static void FUNC_0(struct vub300_mmc_host *VAR_0,
           struct mmc_command *VAR_1)
{
 int VAR_2 = VAR_0->resp_len;
 int VAR_3 = (17 == VAR_2) ? VAR_2 : VAR_2 - 1;
 int VAR_4 = 3 & VAR_3;
 int VAR_5 = VAR_3 >> 2;
 u8 *VAR_6 = VAR_0->resp.response.command_response;
 if (VAR_4 == 3) {
  VAR_1->resp[VAR_5] = (VAR_6[1 + (VAR_5 << 2)] << 24)
   | (VAR_6[2 + (VAR_5 << 2)] << 16)
   | (VAR_6[3 + (VAR_5 << 2)] << 8);
 } else if (VAR_4 == 2) {
  VAR_1->resp[VAR_5] = (VAR_6[1 + (VAR_5 << 2)] << 24)
   | (VAR_6[2 + (VAR_5 << 2)] << 16);
 } else if (VAR_4 == 1) {
  VAR_1->resp[VAR_5] = (VAR_6[1 + (VAR_5 << 2)] << 24);
 }
 while (VAR_5-- > 0) {
  VAR_1->resp[VAR_5] = (VAR_6[1 + (VAR_5 << 2)] << 24)
   | (VAR_6[2 + (VAR_5 << 2)] << 16)
   | (VAR_6[3 + (VAR_5 << 2)] << 8)
   | (VAR_6[4 + (VAR_5 << 2)] << 0);
 }
 if ((VAR_1->opcode == 53) && (0x000000FF & VAR_1->resp[0]))
  VAR_1->resp[0] &= 0xFFFFFF00;
}
