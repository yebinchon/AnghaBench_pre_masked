
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int drop_icm_address_tx; int drop_icm_address_rx; int sw_owner; } ;
struct TYPE_4__ {int * vports_caps; scalar_t__ num_esw_ports; scalar_t__ num_vports; TYPE_3__ esw_caps; int esw_tx_drop_address; int esw_rx_drop_address; int fdb_sw_owner; int eswitch_manager; } ;
struct TYPE_5__ {TYPE_1__ caps; } ;
struct mlx5dr_domain {TYPE_2__ info; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5dr_domain*) ;
 int * FUNC_1 (scalar_t__,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5_core_dev*,TYPE_3__*) ;
 int FUNC_4 (struct mlx5dr_domain*,char*) ;

__attribute__((used)) static int FUNC_5(struct mlx5_core_dev *VAR_3,
        struct mlx5dr_domain *VAR_4)
{
 int VAR_5;

 if (!VAR_4->info.caps.eswitch_manager)
  return -VAR_1;

 VAR_5 = FUNC_3(VAR_3, &VAR_4->info.caps.esw_caps);
 if (VAR_5)
  return VAR_5;

 VAR_4->info.caps.fdb_sw_owner = VAR_4->info.caps.esw_caps.sw_owner;
 VAR_4->info.caps.esw_rx_drop_address = VAR_4->info.caps.esw_caps.drop_icm_address_rx;
 VAR_4->info.caps.esw_tx_drop_address = VAR_4->info.caps.esw_caps.drop_icm_address_tx;

 VAR_4->info.caps.vports_caps = FUNC_1(VAR_4->info.caps.num_esw_ports,
          sizeof(VAR_4->info.caps.vports_caps[0]),
          VAR_2);
 if (!VAR_4->info.caps.vports_caps)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5) {
  FUNC_4(VAR_4, "Failed to query vports caps\n");
  goto free_vports_caps;
 }

 VAR_4->info.caps.num_vports = VAR_4->info.caps.num_esw_ports - 1;

 return 0;

free_vports_caps:
 FUNC_2(VAR_4->info.caps.vports_caps);
 VAR_4->info.caps.vports_caps = ((void*)0);
 return VAR_5;
}
