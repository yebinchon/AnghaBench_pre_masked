
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct net_device {int dummy; } ;
struct ethsw_port_priv {int* vlans; int idx; struct net_device* netdev; struct ethsw_core* ethsw_data; } ;
struct TYPE_3__ {int num_ifs; } ;
struct ethsw_core {int * vlans; TYPE_2__** ports; TYPE_1__ sw_attr; int dpsw_handle; int mc_io; } ;
struct dpsw_vlan_if_cfg {int num_ifs; int * if_id; } ;
struct TYPE_4__ {int* vlans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,size_t,struct dpsw_vlan_if_cfg*) ;
 int FUNC_1 (int ,int ,int ,size_t,struct dpsw_vlan_if_cfg*) ;
 int FUNC_2 (struct ethsw_core*,size_t) ;
 int FUNC_3 (struct ethsw_port_priv*,int ) ;
 int FUNC_4 (struct net_device*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct ethsw_port_priv *VAR_5, u16 VAR_6)
{
 struct ethsw_core *VAR_7 = VAR_5->ethsw_data;
 struct net_device *VAR_8 = VAR_5->netdev;
 struct dpsw_vlan_if_cfg VAR_9;
 int VAR_10, VAR_11;

 if (!VAR_5->vlans[VAR_6])
  return -VAR_0;

 if (VAR_5->vlans[VAR_6] & VAR_3) {
  VAR_11 = FUNC_3(VAR_5, 0);
  if (VAR_11)
   return VAR_11;
 }

 VAR_9.num_ifs = 1;
 VAR_9.if_id[0] = VAR_5->idx;
 if (VAR_5->vlans[VAR_6] & VAR_4) {
  VAR_11 = FUNC_1(VAR_7->mc_io, 0,
         VAR_7->dpsw_handle,
         VAR_6, &VAR_9);
  if (VAR_11) {
   FUNC_4(VAR_8,
       "dpsw_vlan_remove_if_untagged err %d\n",
       VAR_11);
  }
  VAR_5->vlans[VAR_6] &= ~VAR_4;
 }

 if (VAR_5->vlans[VAR_6] & VAR_2) {
  VAR_11 = FUNC_0(VAR_7->mc_io, 0, VAR_7->dpsw_handle,
       VAR_6, &VAR_9);
  if (VAR_11) {
   FUNC_4(VAR_8,
       "dpsw_vlan_remove_if err %d\n", VAR_11);
   return VAR_11;
  }
  VAR_5->vlans[VAR_6] &= ~VAR_2;




  for (VAR_10 = 0; VAR_10 < VAR_7->sw_attr.num_ifs; VAR_10++)
   if (VAR_7->ports[VAR_10]->vlans[VAR_6] & VAR_2)
    return 0;

  VAR_7->vlans[VAR_6] &= ~VAR_1;

  VAR_11 = FUNC_2(VAR_7, VAR_6);
  if (VAR_11)
   return VAR_11;
 }

 return 0;
}
