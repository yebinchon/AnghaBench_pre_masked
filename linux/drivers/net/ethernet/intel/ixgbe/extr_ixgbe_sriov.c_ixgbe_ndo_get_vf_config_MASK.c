
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ixgbe_adapter {int num_vfs; TYPE_1__* vfinfo; } ;
struct ifla_vf_info {int vf; int trusted; int rss_query_en; int spoofchk; int qos; int vlan; scalar_t__ min_tx_rate; int max_tx_rate; int mac; } ;
struct TYPE_2__ {int trusted; int rss_query_enabled; int spoofchk_enabled; int pf_qos; int pf_vlan; int tx_rate; int vf_mac_addresses; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_2,
       int VAR_3, struct ifla_vf_info *VAR_4)
{
 struct ixgbe_adapter *VAR_5 = FUNC_1(VAR_2);
 if (VAR_3 >= VAR_5->num_vfs)
  return -VAR_0;
 VAR_4->vf = VAR_3;
 FUNC_0(&VAR_4->mac, VAR_5->vfinfo[VAR_3].vf_mac_addresses, VAR_1);
 VAR_4->max_tx_rate = VAR_5->vfinfo[VAR_3].tx_rate;
 VAR_4->min_tx_rate = 0;
 VAR_4->vlan = VAR_5->vfinfo[VAR_3].pf_vlan;
 VAR_4->qos = VAR_5->vfinfo[VAR_3].pf_qos;
 VAR_4->spoofchk = VAR_5->vfinfo[VAR_3].spoofchk_enabled;
 VAR_4->rss_query_en = VAR_5->vfinfo[VAR_3].rss_query_enabled;
 VAR_4->trusted = VAR_5->vfinfo[VAR_3].trusted;
 return 0;
}
