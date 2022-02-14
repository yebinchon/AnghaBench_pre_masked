
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mwifiex_private {int adapter; } ;
struct host_cmd_ds_txbuf_cfg {void* buff_size; void* action; } ;
struct TYPE_2__ {struct host_cmd_ds_txbuf_cfg tx_buf; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*,int) ;

int FUNC_2(struct mwifiex_private *VAR_3,
        struct host_cmd_ds_command *VAR_4, int VAR_5,
        u16 *VAR_6)
{
 struct host_cmd_ds_txbuf_cfg *VAR_7 = &VAR_4->params.tx_buf;
 u16 VAR_8 = (u16) VAR_5;

 VAR_4->command = FUNC_0(VAR_1);
 VAR_4->size =
  FUNC_0(sizeof(struct host_cmd_ds_txbuf_cfg) + VAR_2);
 VAR_7->action = FUNC_0(VAR_8);
 switch (VAR_8) {
 case 128:
  FUNC_1(VAR_3->adapter, VAR_0,
       "cmd: set tx_buf=%d\n", *VAR_6);
  VAR_7->buff_size = FUNC_0(*VAR_6);
  break;
 case 129:
 default:
  VAR_7->buff_size = 0;
  break;
 }
 return 0;
}
