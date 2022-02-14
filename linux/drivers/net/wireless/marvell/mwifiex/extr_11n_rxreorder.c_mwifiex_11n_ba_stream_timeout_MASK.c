
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mwifiex_private {int dummy; } ;
struct host_cmd_ds_11n_delba {int reason_code; int del_ba_param_set; int peer_mac_addr; } ;
struct host_cmd_ds_11n_batimeout {scalar_t__ origninator; scalar_t__ tid; int peer_mac_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct host_cmd_ds_11n_delba*,int ,int) ;
 int FUNC_3 (struct mwifiex_private*,int ,int ,int ,struct host_cmd_ds_11n_delba*,int) ;

void FUNC_4(struct mwifiex_private *VAR_5,
       struct host_cmd_ds_11n_batimeout *VAR_6)
{
 struct host_cmd_ds_11n_delba VAR_7;

 FUNC_2(&VAR_7, 0, sizeof(struct host_cmd_ds_11n_delba));
 FUNC_1(VAR_7.peer_mac_addr, VAR_6->peer_mac_addr, VAR_2);

 VAR_7.del_ba_param_set |=
  FUNC_0((u16) VAR_6->tid << VAR_1);
 VAR_7.del_ba_param_set |= FUNC_0(
  (u16) VAR_6->origninator << VAR_0);
 VAR_7.reason_code = FUNC_0(VAR_4);
 FUNC_3(VAR_5, VAR_3, 0, 0, &VAR_7, 0);
}
