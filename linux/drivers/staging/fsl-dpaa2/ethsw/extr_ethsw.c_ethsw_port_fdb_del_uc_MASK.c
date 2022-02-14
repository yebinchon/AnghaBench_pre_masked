
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ethsw_port_priv {int netdev; TYPE_1__* ethsw_data; int idx; } ;
struct dpsw_fdb_unicast_cfg {int mac_addr; int type; int if_egress; int member_0; } ;
struct TYPE_2__ {int dpsw_handle; int mc_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,struct dpsw_fdb_unicast_cfg*) ;
 int FUNC_1 (int ,unsigned char const*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct ethsw_port_priv *VAR_2,
     const unsigned char *VAR_3)
{
 struct dpsw_fdb_unicast_cfg VAR_4 = {0};
 int VAR_5;

 VAR_4.if_egress = VAR_2->idx;
 VAR_4.type = VAR_0;
 FUNC_1(VAR_4.mac_addr, VAR_3);

 VAR_5 = FUNC_0(VAR_2->ethsw_data->mc_io, 0,
          VAR_2->ethsw_data->dpsw_handle,
          0, &VAR_4);

 if (VAR_5 && VAR_5 != -VAR_1)
  FUNC_2(VAR_2->netdev,
      "dpsw_fdb_remove_unicast err %d\n", VAR_5);
 return VAR_5;
}
