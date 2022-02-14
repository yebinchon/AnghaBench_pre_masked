
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5dr_table_rx_tx {struct mlx5dr_ste_htbl* s_anchor; int default_icm_addr; struct mlx5dr_domain_rx_tx* nic_dmn; } ;
struct mlx5dr_ste_htbl {TYPE_2__* ste_arr; TYPE_2__* pointing_ste; TYPE_1__* chunk; } ;
struct mlx5dr_matcher_rx_tx {struct mlx5dr_ste_htbl* s_htbl; struct mlx5dr_ste_htbl* e_anchor; struct mlx5dr_table_rx_tx* nic_tbl; } ;
struct mlx5dr_htbl_connect_info {scalar_t__ type; struct mlx5dr_ste_htbl* hit_next_htbl; int miss_icm_addr; } ;
struct mlx5dr_domain_rx_tx {int dummy; } ;
struct mlx5dr_domain {int dummy; } ;
struct TYPE_4__ {struct mlx5dr_ste_htbl* next_htbl; } ;
struct TYPE_3__ {int icm_addr; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct mlx5dr_domain*,struct mlx5dr_domain_rx_tx*,struct mlx5dr_ste_htbl*,struct mlx5dr_htbl_connect_info*,int) ;

__attribute__((used)) static int FUNC_1(struct mlx5dr_domain *VAR_2,
         struct mlx5dr_matcher_rx_tx *VAR_3,
         struct mlx5dr_matcher_rx_tx *VAR_4,
         struct mlx5dr_matcher_rx_tx *VAR_5)
{
 struct mlx5dr_table_rx_tx *VAR_6 = VAR_3->nic_tbl;
 struct mlx5dr_domain_rx_tx *VAR_7 = VAR_6->nic_dmn;
 struct mlx5dr_htbl_connect_info VAR_8;
 struct mlx5dr_ste_htbl *VAR_9;
 int VAR_10;


 if (VAR_4) {
  VAR_8.type = VAR_0;
  VAR_8.hit_next_htbl = VAR_4->s_htbl;
 } else {
  VAR_8.type = VAR_1;
  VAR_8.miss_icm_addr = VAR_6->default_icm_addr;
 }
 VAR_10 = FUNC_0(VAR_2, VAR_7,
      VAR_3->e_anchor,
      &VAR_8, VAR_8.type == VAR_0);
 if (VAR_10)
  return VAR_10;


 VAR_8.type = VAR_1;
 VAR_8.miss_icm_addr = VAR_3->e_anchor->chunk->icm_addr;
 VAR_10 = FUNC_0(VAR_2, VAR_7,
      VAR_3->s_htbl,
      &VAR_8, 0);
 if (VAR_10)
  return VAR_10;


 if (VAR_5)
  VAR_9 = VAR_5->e_anchor;
 else
  VAR_9 = VAR_6->s_anchor;

 VAR_8.type = VAR_0;
 VAR_8.hit_next_htbl = VAR_3->s_htbl;
 VAR_10 = FUNC_0(VAR_2, VAR_7, VAR_9,
      &VAR_8, 1);
 if (VAR_10)
  return VAR_10;


 VAR_3->s_htbl->pointing_ste = VAR_9->ste_arr;
 VAR_9->ste_arr[0].next_htbl = VAR_3->s_htbl;

 if (VAR_4) {
  VAR_4->s_htbl->pointing_ste = VAR_3->e_anchor->ste_arr;
  VAR_3->e_anchor->ste_arr[0].next_htbl = VAR_4->s_htbl;
 }

 return 0;
}
