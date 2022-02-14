
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifla_vf_info {int vf; scalar_t__ qos; int vlan; int mac; scalar_t__ min_tx_rate; int max_tx_rate; } ;
struct fm10k_vf_info {int pf_vid; int mac; int rate; } ;
struct fm10k_iov_data {int num_vfs; struct fm10k_vf_info* vf_info; } ;
struct fm10k_intfc {struct fm10k_iov_data* iov_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct fm10k_intfc* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_1,
       int VAR_2, struct ifla_vf_info *VAR_3)
{
 struct fm10k_intfc *VAR_4 = FUNC_1(VAR_1);
 struct fm10k_iov_data *VAR_5 = VAR_4->iov_data;
 struct fm10k_vf_info *VAR_6;


 if (!VAR_5 || VAR_2 >= VAR_5->num_vfs)
  return -VAR_0;

 VAR_6 = &VAR_5->vf_info[VAR_2];

 VAR_3->vf = VAR_2;
 VAR_3->max_tx_rate = VAR_6->rate;
 VAR_3->min_tx_rate = 0;
 FUNC_0(VAR_3->mac, VAR_6->mac);
 VAR_3->vlan = VAR_6->pf_vid;
 VAR_3->qos = 0;

 return 0;
}
