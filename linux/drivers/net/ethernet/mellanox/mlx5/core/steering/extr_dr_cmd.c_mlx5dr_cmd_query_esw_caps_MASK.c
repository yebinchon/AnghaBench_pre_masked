
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_esw_caps {int sw_owner; void* uplink_icm_address_tx; void* uplink_icm_address_rx; void* drop_icm_address_tx; void* drop_icm_address_rx; } ;
struct mlx5_core_dev {int dummy; } ;


 void* FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_2(struct mlx5_core_dev *VAR_5,
         struct mlx5dr_esw_caps *VAR_6)
{
 VAR_6->drop_icm_address_rx =
  FUNC_0(VAR_5,
      VAR_1);
 VAR_6->drop_icm_address_tx =
  FUNC_0(VAR_5,
      VAR_2);
 VAR_6->uplink_icm_address_rx =
  FUNC_0(VAR_5,
      VAR_3);
 VAR_6->uplink_icm_address_tx =
  FUNC_0(VAR_5,
      VAR_4);
 VAR_6->sw_owner =
  FUNC_1(VAR_5,
        VAR_0);

 return 0;
}
