
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct host_cmd_sdio_sp_rx_aggr_cfg {int enable; scalar_t__ action; } ;
struct TYPE_2__ {struct host_cmd_sdio_sp_rx_aggr_cfg sdio_rx_aggr_cfg; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct host_cmd_ds_command *VAR_3,
     u16 VAR_4, void *VAR_5)
{
 struct host_cmd_sdio_sp_rx_aggr_cfg *VAR_6 =
     &VAR_3->params.sdio_rx_aggr_cfg;

 VAR_3->command = FUNC_0(VAR_1);
 VAR_3->size =
  FUNC_0(sizeof(struct host_cmd_sdio_sp_rx_aggr_cfg) +
       VAR_2);
 VAR_6->action = VAR_4;
 if (VAR_4 == VAR_0)
  VAR_6->enable = *(u8 *)VAR_5;

 return 0;
}
