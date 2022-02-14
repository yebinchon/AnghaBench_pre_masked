
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u8 ;
struct mwifiex_private {int dummy; } ;
struct host_cmd_ds_11n_delba {int peer_mac_addr; int del_ba_param_set; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mwifiex_private*,int,int ,int ,int ) ;

void FUNC_3(struct mwifiex_private *VAR_2, u8 *VAR_3)
{
 struct host_cmd_ds_11n_delba *VAR_4 =
  (struct host_cmd_ds_11n_delba *) VAR_3;
 uint16_t VAR_5 = FUNC_1(VAR_4->del_ba_param_set);
 int VAR_6;

 VAR_6 = VAR_5 >> VAR_0;

 FUNC_2(VAR_2, VAR_6, VAR_4->peer_mac_addr,
      VAR_1, FUNC_0(VAR_5));
}
