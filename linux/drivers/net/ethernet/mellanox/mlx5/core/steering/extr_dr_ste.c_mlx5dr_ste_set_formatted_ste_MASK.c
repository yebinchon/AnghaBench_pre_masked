
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlx5dr_ste_htbl {int lu_type; } ;
struct mlx5dr_ste {int * hw_ste; } ;
struct mlx5dr_htbl_connect_info {scalar_t__ type; int miss_icm_addr; int hit_next_htbl; } ;
struct mlx5dr_domain_rx_tx {int ste_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx5dr_ste*,int ) ;
 int FUNC_1 (struct mlx5dr_ste*,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;

void FUNC_3(u16 VAR_1,
      struct mlx5dr_domain_rx_tx *VAR_2,
      struct mlx5dr_ste_htbl *VAR_3,
      u8 *VAR_4,
      struct mlx5dr_htbl_connect_info *VAR_5)
{
 struct mlx5dr_ste VAR_6 = {};

 FUNC_2(VAR_4, VAR_3->lu_type, VAR_2->ste_type, VAR_1);
 VAR_6.hw_ste = VAR_4;

 if (VAR_5->type == VAR_0)
  FUNC_0(&VAR_6, VAR_5->hit_next_htbl);
 else
  FUNC_1(&VAR_6, VAR_5->miss_icm_addr);
}
