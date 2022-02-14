
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct msg_anybus_init {int op_mode; int wd_val; int notif_config; int output_total_len; int output_dpram_len; int output_io_len; int input_total_len; int input_dpram_len; int input_io_len; } ;
struct anybuss_memcfg {int input_io; int input_dpram; int input_total; int output_io; int output_dpram; int output_total; int offl_mode; } ;
struct anybuss_host {int dummy; } ;
struct anybuss_client {struct anybuss_host* host; } ;
typedef int msg ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct anybuss_host*,int ,int,struct msg_anybus_init*,int,int *,int ,int *,int ) ;
 int FUNC_1 (int) ;

int FUNC_2(struct anybuss_client *VAR_6,
         const struct anybuss_memcfg *VAR_7)
{
 int VAR_8;
 u16 VAR_9;
 struct anybuss_host *VAR_10 = VAR_6->host;
 struct msg_anybus_init VAR_11 = {
  .input_io_len = FUNC_1(VAR_7->input_io),
  .input_dpram_len = FUNC_1(VAR_7->input_dpram),
  .input_total_len = FUNC_1(VAR_7->input_total),
  .output_io_len = FUNC_1(VAR_7->output_io),
  .output_dpram_len = FUNC_1(VAR_7->output_dpram),
  .output_total_len = FUNC_1(VAR_7->output_total),
  .notif_config = FUNC_1(0x000F),
  .wd_val = FUNC_1(0),
 };

 switch (VAR_7->offl_mode) {
 case 130:
  VAR_9 = 0;
  break;
 case 129:
  VAR_9 = VAR_4;
  break;
 case 128:
  VAR_9 = VAR_5;
  break;
 default:
  return -VAR_2;
 }
 VAR_11.op_mode = FUNC_1(VAR_9 | VAR_3);
 VAR_8 = FUNC_0(VAR_10, VAR_1, 0, ((void*)0), 0,
          ((void*)0), 0, ((void*)0), 0);
 if (VAR_8)
  return VAR_8;
 return FUNC_0(VAR_10, VAR_0, 0,
   &VAR_11, sizeof(VAR_11), ((void*)0), 0, ((void*)0), 0);
}
