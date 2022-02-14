
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5dr_esw_caps {int uplink_icm_address_tx; int uplink_icm_address_rx; } ;
struct TYPE_3__ {int num_esw_ports; int gvmi; struct mlx5dr_cmd_vport_cap* vports_caps; struct mlx5dr_esw_caps esw_caps; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;
struct mlx5dr_domain {TYPE_2__ info; } ;
struct mlx5dr_cmd_vport_cap {int vhca_gvmi; scalar_t__ vport_gvmi; int icm_address_tx; int icm_address_rx; int num; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5dr_domain*,int,int) ;

__attribute__((used)) static int FUNC_1(struct mlx5dr_domain *VAR_1)
{
 struct mlx5dr_esw_caps *VAR_2 = &VAR_1->info.caps.esw_caps;
 struct mlx5dr_cmd_vport_cap *VAR_3;
 int VAR_4;
 int VAR_5;


 for (VAR_4 = 0; VAR_4 < VAR_1->info.caps.num_esw_ports - 1; VAR_4++) {
  VAR_5 = FUNC_0(VAR_1, !!VAR_4, VAR_4);
  if (VAR_5)
   return VAR_5;
 }


 VAR_3 = &VAR_1->info.caps.vports_caps[VAR_4];
 VAR_3->num = VAR_0;
 VAR_3->icm_address_rx = VAR_2->uplink_icm_address_rx;
 VAR_3->icm_address_tx = VAR_2->uplink_icm_address_tx;
 VAR_3->vport_gvmi = 0;
 VAR_3->vhca_gvmi = VAR_1->info.caps.gvmi;

 return 0;
}
