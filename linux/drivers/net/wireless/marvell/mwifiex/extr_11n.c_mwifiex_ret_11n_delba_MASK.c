
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct mwifiex_tx_ba_stream_tbl {int tid; int ra; } ;
struct mwifiex_private {int dummy; } ;
struct host_cmd_ds_11n_delba {scalar_t__ del_result; int peer_mac_addr; int del_ba_param_set; } ;
struct TYPE_2__ {struct host_cmd_ds_11n_delba del_ba; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mwifiex_private*,int ,int,int ) ;
 int FUNC_3 (struct mwifiex_private*,int,int ,int ,int) ;
 struct mwifiex_tx_ba_stream_tbl* FUNC_4 (struct mwifiex_private*,int ) ;
 int FUNC_5 (struct mwifiex_private*,int,int ) ;

int FUNC_6(struct mwifiex_private *VAR_4,
     struct host_cmd_ds_command *VAR_5)
{
 int VAR_6;
 struct mwifiex_tx_ba_stream_tbl *VAR_7;
 struct host_cmd_ds_11n_delba *VAR_8 = &VAR_5->params.del_ba;
 uint16_t VAR_9 = FUNC_1(VAR_8->del_ba_param_set);

 VAR_6 = VAR_9 >> VAR_2;
 if (VAR_8->del_result == VAR_0) {
  FUNC_3(VAR_4, VAR_6, VAR_8->peer_mac_addr,
       VAR_3,
       FUNC_0(VAR_9));

  VAR_7 = FUNC_4(VAR_4, VAR_1);
  if (VAR_7)
   FUNC_5(VAR_4, VAR_7->tid,
        VAR_7->ra);
 } else {



  if (!FUNC_0(VAR_9))
   return 0;

  FUNC_2(VAR_4, VAR_8->peer_mac_addr, VAR_6,
          VAR_1);

  VAR_7 = FUNC_4(VAR_4, VAR_1);

  if (VAR_7)
   FUNC_3(VAR_4, VAR_7->tid, VAR_7->ra,
        VAR_3, 1);
 }

 return 0;
}
