
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethsw_port_priv {int idx; TYPE_1__* ethsw_data; } ;
struct TYPE_2__ {int dpsw_handle; int mc_io; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 struct ethsw_port_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{
 struct ethsw_port_priv *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;


 FUNC_4(VAR_0);

 VAR_2 = FUNC_1(VAR_1->ethsw_data->mc_io, 0,
        VAR_1->ethsw_data->dpsw_handle,
        VAR_1->idx);
 if (VAR_2) {
  FUNC_2(VAR_0, "dpsw_if_enable err %d\n", VAR_2);
  return VAR_2;
 }


 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2) {
  FUNC_2(VAR_0,
      "port_carrier_state_sync err %d\n", VAR_2);
  goto err_carrier_sync;
 }

 return 0;

err_carrier_sync:
 FUNC_0(VAR_1->ethsw_data->mc_io, 0,
   VAR_1->ethsw_data->dpsw_handle,
   VAR_1->idx);
 return VAR_2;
}
