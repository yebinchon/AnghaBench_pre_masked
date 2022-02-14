
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_vport {int max_tx_bw; int min_tx_bw; int spoofchk; int qos; int mac; } ;
struct qlcnic_sriov {int num_vfs; TYPE_2__* vf_info; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct net_device {int dummy; } ;
struct ifla_vf_info {int max_tx_rate; int min_tx_rate; int vf; int spoofchk; int qos; int vlan; int mac; } ;
struct TYPE_4__ {struct qlcnic_vport* vp; } ;
struct TYPE_3__ {struct qlcnic_sriov* sriov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct qlcnic_adapter*,struct qlcnic_vport*,int) ;
 int FUNC_3 (struct qlcnic_adapter*) ;

int FUNC_4(struct net_device *VAR_5,
          int VAR_6, struct ifla_vf_info *VAR_7)
{
 struct qlcnic_adapter *VAR_8 = FUNC_1(VAR_5);
 struct qlcnic_sriov *VAR_9 = VAR_8->ahw->sriov;
 struct qlcnic_vport *VAR_10;

 if (!FUNC_3(VAR_8))
  return -VAR_1;

 if (VAR_6 >= VAR_9->num_vfs)
  return -VAR_0;

 VAR_10 = VAR_9->vf_info[VAR_6].vp;
 FUNC_0(&VAR_7->mac, VAR_10->mac, VAR_2);
 VAR_7->vlan = FUNC_2(VAR_8, VAR_10, VAR_6);
 VAR_7->qos = VAR_10->qos;
 VAR_7->spoofchk = VAR_10->spoofchk;
 if (VAR_10->max_tx_bw == VAR_3)
  VAR_7->max_tx_rate = 0;
 else
  VAR_7->max_tx_rate = VAR_10->max_tx_bw * 100;
 if (VAR_10->min_tx_bw == VAR_4)
  VAR_7->min_tx_rate = 0;
 else
  VAR_7->min_tx_rate = VAR_10->min_tx_bw * 100;

 VAR_7->vf = VAR_6;
 return 0;
}
