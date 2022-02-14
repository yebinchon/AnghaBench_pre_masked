
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct net_device {int dummy; } ;
struct ethsw_port_priv {int* vlans; int idx; struct net_device* netdev; struct ethsw_core* ethsw_data; } ;
struct ethsw_core {int dpsw_handle; int mc_io; } ;
struct dpsw_vlan_if_cfg {int num_ifs; int * if_id; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,size_t,struct dpsw_vlan_if_cfg*) ;
 int FUNC_1 (int ,int ,int ,size_t,struct dpsw_vlan_if_cfg*) ;
 int FUNC_2 (struct ethsw_port_priv*,size_t) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 int FUNC_4 (struct net_device*,char*,size_t) ;

__attribute__((used)) static int FUNC_5(struct ethsw_port_priv *VAR_5,
          u16 VAR_6, u16 VAR_7)
{
 struct ethsw_core *VAR_8 = VAR_5->ethsw_data;
 struct net_device *VAR_9 = VAR_5->netdev;
 struct dpsw_vlan_if_cfg VAR_10;
 int VAR_11;

 if (VAR_5->vlans[VAR_6]) {
  FUNC_4(VAR_9, "VLAN %d already configured\n", VAR_6);
  return -VAR_2;
 }

 VAR_10.num_ifs = 1;
 VAR_10.if_id[0] = VAR_5->idx;
 VAR_11 = FUNC_0(VAR_8->mc_io, 0, VAR_8->dpsw_handle, VAR_6, &VAR_10);
 if (VAR_11) {
  FUNC_3(VAR_9, "dpsw_vlan_add_if err %d\n", VAR_11);
  return VAR_11;
 }

 VAR_5->vlans[VAR_6] = VAR_3;

 if (VAR_7 & VAR_1) {
  VAR_11 = FUNC_1(VAR_8->mc_io, 0,
      VAR_8->dpsw_handle,
      VAR_6, &VAR_10);
  if (VAR_11) {
   FUNC_3(VAR_9,
       "dpsw_vlan_add_if_untagged err %d\n", VAR_11);
   return VAR_11;
  }
  VAR_5->vlans[VAR_6] |= VAR_4;
 }

 if (VAR_7 & VAR_0) {
  VAR_11 = FUNC_2(VAR_5, VAR_6);
  if (VAR_11)
   return VAR_11;
 }

 return 0;
}
