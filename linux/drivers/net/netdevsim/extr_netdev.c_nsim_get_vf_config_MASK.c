
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nsim_bus_dev {int num_vfs; TYPE_1__* vfconfigs; } ;
struct netdevsim {struct nsim_bus_dev* nsim_bus_dev; } ;
struct net_device {int dummy; } ;
struct ifla_vf_info {int vf; int rss_query_en; int trusted; int spoofchk; int mac; int qos; int vlan_proto; int vlan; int max_tx_rate; int min_tx_rate; int linkstate; } ;
struct TYPE_2__ {int rss_query_enabled; int trusted; int spoofchk_enabled; int vf_mac; int qos; int vlan_proto; int vlan; int max_tx_rate; int min_tx_rate; int link_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 struct netdevsim* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_2, int VAR_3, struct ifla_vf_info *VAR_4)
{
 struct netdevsim *VAR_5 = FUNC_1(VAR_2);
 struct nsim_bus_dev *VAR_6 = VAR_5->nsim_bus_dev;

 if (VAR_3 >= VAR_6->num_vfs)
  return -VAR_0;

 VAR_4->vf = VAR_3;
 VAR_4->linkstate = VAR_6->vfconfigs[VAR_3].link_state;
 VAR_4->min_tx_rate = VAR_6->vfconfigs[VAR_3].min_tx_rate;
 VAR_4->max_tx_rate = VAR_6->vfconfigs[VAR_3].max_tx_rate;
 VAR_4->vlan = VAR_6->vfconfigs[VAR_3].vlan;
 VAR_4->vlan_proto = VAR_6->vfconfigs[VAR_3].vlan_proto;
 VAR_4->qos = VAR_6->vfconfigs[VAR_3].qos;
 FUNC_0(&VAR_4->mac, VAR_6->vfconfigs[VAR_3].vf_mac, VAR_1);
 VAR_4->spoofchk = VAR_6->vfconfigs[VAR_3].spoofchk_enabled;
 VAR_4->trusted = VAR_6->vfconfigs[VAR_3].trusted;
 VAR_4->rss_query_en = VAR_6->vfconfigs[VAR_3].rss_query_enabled;

 return 0;
}
