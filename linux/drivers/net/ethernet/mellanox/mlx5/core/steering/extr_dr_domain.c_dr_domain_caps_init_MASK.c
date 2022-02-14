
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int esw_tx_drop_address; int esw_rx_drop_address; int fdb_sw_owner; int eswitch_manager; int nic_tx_drop_address; int nic_tx_allow_address; int tx_sw_owner; int nic_rx_drop_address; int rx_sw_owner; int num_esw_ports; } ;
struct TYPE_7__ {int drop_icm_addr; int default_icm_addr; void* ste_type; } ;
struct TYPE_6__ {int drop_icm_addr; int default_icm_addr; void* ste_type; } ;
struct TYPE_8__ {int supp_sw_steering; TYPE_4__ caps; TYPE_2__ tx; TYPE_1__ rx; } ;
struct mlx5dr_domain {int type; TYPE_3__ info; } ;
struct mlx5dr_cmd_vport_cap {int icm_address_rx; int icm_address_tx; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5dr_domain*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*,TYPE_4__*) ;
 int FUNC_4 (struct mlx5dr_domain*,char*) ;
 struct mlx5dr_cmd_vport_cap* FUNC_5 (TYPE_4__*,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(struct mlx5_core_dev *VAR_8,
          struct mlx5dr_domain *VAR_9)
{
 struct mlx5dr_cmd_vport_cap *VAR_10;
 int VAR_11;

 if (FUNC_0(VAR_8, VAR_7) != VAR_6) {
  FUNC_4(VAR_9, "Failed to allocate domain, bad link type\n");
  return -VAR_3;
 }

 VAR_9->info.caps.num_esw_ports = FUNC_2(VAR_8);

 VAR_11 = FUNC_3(VAR_8, &VAR_9->info.caps);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_1(VAR_8, VAR_9);
 if (VAR_11)
  return VAR_11;

 switch (VAR_9->type) {
 case 129:
  if (!VAR_9->info.caps.rx_sw_owner)
   return -VAR_2;

  VAR_9->info.supp_sw_steering = 1;
  VAR_9->info.rx.ste_type = VAR_4;
  VAR_9->info.rx.default_icm_addr = VAR_9->info.caps.nic_rx_drop_address;
  VAR_9->info.rx.drop_icm_addr = VAR_9->info.caps.nic_rx_drop_address;
  break;
 case 128:
  if (!VAR_9->info.caps.tx_sw_owner)
   return -VAR_2;

  VAR_9->info.supp_sw_steering = 1;
  VAR_9->info.tx.ste_type = VAR_5;
  VAR_9->info.tx.default_icm_addr = VAR_9->info.caps.nic_tx_allow_address;
  VAR_9->info.tx.drop_icm_addr = VAR_9->info.caps.nic_tx_drop_address;
  break;
 case 130:
  if (!VAR_9->info.caps.eswitch_manager)
   return -VAR_2;

  if (!VAR_9->info.caps.fdb_sw_owner)
   return -VAR_2;

  VAR_9->info.rx.ste_type = VAR_4;
  VAR_9->info.tx.ste_type = VAR_5;
  VAR_10 = FUNC_5(&VAR_9->info.caps, 0);
  if (!VAR_10) {
   FUNC_4(VAR_9, "Failed to get esw manager vport\n");
   return -VAR_1;
  }

  VAR_9->info.supp_sw_steering = 1;
  VAR_9->info.tx.default_icm_addr = VAR_10->icm_address_tx;
  VAR_9->info.rx.default_icm_addr = VAR_10->icm_address_rx;
  VAR_9->info.rx.drop_icm_addr = VAR_9->info.caps.esw_rx_drop_address;
  VAR_9->info.tx.drop_icm_addr = VAR_9->info.caps.esw_tx_drop_address;
  break;
 default:
  FUNC_4(VAR_9, "Invalid domain\n");
  VAR_11 = -VAR_0;
  break;
 }

 return VAR_11;
}
