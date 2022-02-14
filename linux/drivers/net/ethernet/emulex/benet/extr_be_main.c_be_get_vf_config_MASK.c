
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifla_vf_info {int vf; int vlan; int qos; int spoofchk; int linkstate; int mac; scalar_t__ min_tx_rate; int max_tx_rate; } ;
struct be_vf_cfg {int vlan_tag; int spoofchk; int plink_tracking; int mac_addr; int tx_rate; } ;
struct be_adapter {int num_vfs; struct be_vf_cfg* vf_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;
 struct be_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5, int VAR_6,
       struct ifla_vf_info *VAR_7)
{
 struct be_adapter *VAR_8 = FUNC_1(VAR_5);
 struct be_vf_cfg *VAR_9 = &VAR_8->vf_cfg[VAR_6];

 if (!FUNC_2(VAR_8))
  return -VAR_1;

 if (VAR_6 >= VAR_8->num_vfs)
  return -VAR_0;

 VAR_7->vf = VAR_6;
 VAR_7->max_tx_rate = VAR_9->tx_rate;
 VAR_7->min_tx_rate = 0;
 VAR_7->vlan = VAR_9->vlan_tag & VAR_4;
 VAR_7->qos = VAR_9->vlan_tag >> VAR_3;
 FUNC_0(&VAR_7->mac, VAR_9->mac_addr, VAR_2);
 VAR_7->linkstate = VAR_8->vf_cfg[VAR_6].plink_tracking;
 VAR_7->spoofchk = VAR_8->vf_cfg[VAR_6].spoofchk;

 return 0;
}
