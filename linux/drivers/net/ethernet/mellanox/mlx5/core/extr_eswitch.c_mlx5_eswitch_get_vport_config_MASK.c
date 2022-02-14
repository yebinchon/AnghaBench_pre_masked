
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int max_rate; int min_rate; int trusted; int spoofchk; int qos; int vlan; int link_state; int mac; } ;
struct mlx5_vport {TYPE_1__ info; } ;
struct mlx5_eswitch {int state_lock; } ;
struct ifla_vf_info {int max_tx_rate; int min_tx_rate; int trusted; int spoofchk; int qos; int vlan; int linkstate; int mac; scalar_t__ vf; } ;


 scalar_t__ FUNC_0 (struct mlx5_vport*) ;
 int FUNC_1 (struct mlx5_vport*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ifla_vf_info*,int ,int) ;
 struct mlx5_vport* FUNC_4 (struct mlx5_eswitch*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct mlx5_eswitch *VAR_0,
      u16 VAR_1, struct ifla_vf_info *VAR_2)
{
 struct mlx5_vport *VAR_3 = FUNC_4(VAR_0, VAR_1);

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->vf = VAR_1 - 1;

 FUNC_5(&VAR_0->state_lock);
 FUNC_2(VAR_2->mac, VAR_3->info.mac);
 VAR_2->linkstate = VAR_3->info.link_state;
 VAR_2->vlan = VAR_3->info.vlan;
 VAR_2->qos = VAR_3->info.qos;
 VAR_2->spoofchk = VAR_3->info.spoofchk;
 VAR_2->trusted = VAR_3->info.trusted;
 VAR_2->min_tx_rate = VAR_3->info.min_rate;
 VAR_2->max_tx_rate = VAR_3->info.max_rate;
 FUNC_6(&VAR_0->state_lock);

 return 0;
}
