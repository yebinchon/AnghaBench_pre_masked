
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct net_device {int dummy; } ;
struct ethsw_port_priv {size_t pvid; int idx; int * vlans; struct net_device* netdev; struct ethsw_core* ethsw_data; } ;
struct ethsw_core {int dpsw_handle; int mc_io; } ;
struct dpsw_tci_cfg {size_t vlan_id; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,struct dpsw_tci_cfg*) ;
 int FUNC_3 (int ,int ,int ,int ,struct dpsw_tci_cfg*) ;
 int FUNC_4 (struct net_device*,char*,int) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct ethsw_port_priv *VAR_1, u16 VAR_2)
{
 struct ethsw_core *VAR_3 = VAR_1->ethsw_data;
 struct net_device *VAR_4 = VAR_1->netdev;
 struct dpsw_tci_cfg VAR_5 = { 0 };
 bool VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_3->mc_io, 0, VAR_3->dpsw_handle,
         VAR_1->idx, &VAR_5);
 if (VAR_7) {
  FUNC_4(VAR_4, "dpsw_if_get_tci err %d\n", VAR_7);
  return VAR_7;
 }

 VAR_5.vlan_id = VAR_2;


 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6) {
  VAR_7 = FUNC_0(VAR_3->mc_io, 0,
          VAR_3->dpsw_handle,
          VAR_1->idx);
  if (VAR_7) {
   FUNC_4(VAR_4, "dpsw_if_disable err %d\n", VAR_7);
   return VAR_7;
  }
 }

 VAR_7 = FUNC_3(VAR_3->mc_io, 0, VAR_3->dpsw_handle,
         VAR_1->idx, &VAR_5);
 if (VAR_7) {
  FUNC_4(VAR_4, "dpsw_if_set_tci err %d\n", VAR_7);
  goto set_tci_error;
 }


 VAR_1->vlans[VAR_1->pvid] &= ~VAR_0;
 VAR_1->vlans[VAR_2] |= VAR_0;
 VAR_1->pvid = VAR_2;

set_tci_error:
 if (VAR_6) {
  VAR_8 = FUNC_1(VAR_3->mc_io, 0,
         VAR_3->dpsw_handle,
         VAR_1->idx);
  if (VAR_8) {
   FUNC_4(VAR_4, "dpsw_if_enable err %d\n", VAR_8);
   return VAR_8;
  }
 }

 return VAR_7;
}
