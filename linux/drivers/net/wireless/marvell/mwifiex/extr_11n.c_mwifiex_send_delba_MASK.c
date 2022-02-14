
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u8 ;
struct mwifiex_private {int dummy; } ;
struct host_cmd_ds_11n_delba {int peer_mac_addr; int del_ba_param_set; } ;
typedef int delba ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (struct host_cmd_ds_11n_delba*,int ,int) ;
 int FUNC_4 (struct mwifiex_private*,int ,int ,int ,struct host_cmd_ds_11n_delba*,int) ;

int FUNC_5(struct mwifiex_private *VAR_5, int VAR_6, u8 *VAR_7,
         int VAR_8)
{
 struct host_cmd_ds_11n_delba VAR_9;
 int VAR_10;
 uint16_t VAR_11;

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.del_ba_param_set = FUNC_0(VAR_6 << VAR_0);

 VAR_11 = FUNC_1(VAR_9.del_ba_param_set);
 if (VAR_8)
  VAR_11 |= VAR_4;
 else
  VAR_11 &= ~VAR_4;

 FUNC_2(&VAR_9.peer_mac_addr, VAR_7, VAR_1);


 VAR_10 = FUNC_4(VAR_5, VAR_3,
          VAR_2, 0, &VAR_9, 0);

 return VAR_10;
}
