
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_table_rx_tx {int s_anchor; int default_icm_addr; struct mlx5dr_domain_rx_tx* nic_dmn; } ;
struct mlx5dr_htbl_connect_info {int miss_icm_addr; int type; } ;
struct mlx5dr_domain_rx_tx {int default_icm_addr; } ;
struct mlx5dr_domain {int ste_icm_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5dr_domain*,struct mlx5dr_domain_rx_tx*,int ,struct mlx5dr_htbl_connect_info*,int) ;

__attribute__((used)) static int FUNC_4(struct mlx5dr_domain *VAR_4,
        struct mlx5dr_table_rx_tx *VAR_5)
{
 struct mlx5dr_domain_rx_tx *VAR_6 = VAR_5->nic_dmn;
 struct mlx5dr_htbl_connect_info VAR_7;
 int VAR_8;

 VAR_5->default_icm_addr = VAR_6->default_icm_addr;

 VAR_5->s_anchor = FUNC_1(VAR_4->ste_icm_pool,
        VAR_1,
        VAR_3,
        0);
 if (!VAR_5->s_anchor)
  return -VAR_2;

 VAR_7.type = VAR_0;
 VAR_7.miss_icm_addr = VAR_6->default_icm_addr;
 VAR_8 = FUNC_3(VAR_4, VAR_6,
      VAR_5->s_anchor,
      &VAR_7, 1);
 if (VAR_8)
  goto free_s_anchor;

 FUNC_0(VAR_5->s_anchor);

 return 0;

free_s_anchor:
 FUNC_2(VAR_5->s_anchor);
 return VAR_8;
}
