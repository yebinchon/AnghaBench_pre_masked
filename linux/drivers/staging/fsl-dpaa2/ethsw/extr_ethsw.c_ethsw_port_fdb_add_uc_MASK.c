
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ethsw_port_priv {int netdev; TYPE_1__* ethsw_data; int idx; } ;
struct dpsw_fdb_unicast_cfg {int mac_addr; int type; int if_egress; int member_0; } ;
struct TYPE_2__ {int dpsw_handle; int mc_io; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,struct dpsw_fdb_unicast_cfg*) ;
 int FUNC_1 (int ,unsigned char const*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct ethsw_port_priv *VAR_1,
     const unsigned char *VAR_2)
{
 struct dpsw_fdb_unicast_cfg VAR_3 = {0};
 int VAR_4;

 VAR_3.if_egress = VAR_1->idx;
 VAR_3.type = VAR_0;
 FUNC_1(VAR_3.mac_addr, VAR_2);

 VAR_4 = FUNC_0(VAR_1->ethsw_data->mc_io, 0,
       VAR_1->ethsw_data->dpsw_handle,
       0, &VAR_3);
 if (VAR_4)
  FUNC_2(VAR_1->netdev,
      "dpsw_fdb_add_unicast err %d\n", VAR_4);
 return VAR_4;
}
