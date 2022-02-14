
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct ethsw_port_priv {int idx; struct ethsw_core* ethsw_data; struct net_device* netdev; } ;
struct ethsw_core {int dpsw_handle; int mc_io; } ;
struct dpsw_vlan_if_cfg {int num_ifs; int * if_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,struct dpsw_vlan_if_cfg*) ;
 int FUNC_1 (int ,int ,int ,int ,struct dpsw_vlan_if_cfg*) ;
 int FUNC_2 (struct ethsw_port_priv*,int ) ;
 int FUNC_3 (struct net_device*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct ethsw_port_priv *VAR_1, u16 VAR_2)
{
 struct net_device *VAR_3 = VAR_1->netdev;
 struct ethsw_core *VAR_4 = VAR_1->ethsw_data;
 struct dpsw_vlan_if_cfg VAR_5;
 int VAR_6;




 VAR_5.num_ifs = 1;
 VAR_5.if_id[0] = VAR_1->idx;

 VAR_6 = FUNC_1(VAR_4->mc_io, 0, VAR_4->dpsw_handle,
        VAR_0, &VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_3, "dpsw_vlan_remove_if_untagged err %d\n",
      VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_1, 0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_4->mc_io, 0, VAR_4->dpsw_handle,
      VAR_0, &VAR_5);
 if (VAR_6)
  FUNC_3(VAR_3, "dpsw_vlan_remove_if err %d\n", VAR_6);

 return VAR_6;
}
