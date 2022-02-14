
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5dr_table_rx_tx {int default_icm_addr; struct mlx5dr_ste_htbl* s_anchor; struct mlx5dr_domain_rx_tx* nic_dmn; } ;
struct mlx5dr_ste_htbl {TYPE_2__* ste_arr; } ;
struct mlx5dr_matcher_rx_tx {TYPE_1__* s_htbl; struct mlx5dr_ste_htbl* e_anchor; } ;
struct mlx5dr_htbl_connect_info {int miss_icm_addr; int type; TYPE_1__* hit_next_htbl; } ;
struct mlx5dr_domain_rx_tx {int dummy; } ;
struct mlx5dr_domain {int dummy; } ;
struct TYPE_4__ {TYPE_1__* next_htbl; } ;
struct TYPE_3__ {TYPE_2__* pointing_ste; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5dr_domain*,struct mlx5dr_domain_rx_tx*,struct mlx5dr_ste_htbl*,struct mlx5dr_htbl_connect_info*,int) ;

__attribute__((used)) static int FUNC_1(struct mlx5dr_domain *VAR_2,
     struct mlx5dr_table_rx_tx *VAR_3,
     struct mlx5dr_matcher_rx_tx *VAR_4,
     struct mlx5dr_matcher_rx_tx *VAR_5)
{
 struct mlx5dr_domain_rx_tx *VAR_6 = VAR_3->nic_dmn;
 struct mlx5dr_htbl_connect_info VAR_7;
 struct mlx5dr_ste_htbl *VAR_8;

 if (VAR_5)
  VAR_8 = VAR_5->e_anchor;
 else
  VAR_8 = VAR_3->s_anchor;


 if (VAR_4) {
  VAR_7.type = VAR_0;
  VAR_7.hit_next_htbl = VAR_4->s_htbl;
  VAR_4->s_htbl->pointing_ste = VAR_8->ste_arr;
  VAR_8->ste_arr[0].next_htbl = VAR_4->s_htbl;
 } else {
  VAR_7.type = VAR_1;
  VAR_7.miss_icm_addr = VAR_3->default_icm_addr;
  VAR_8->ste_arr[0].next_htbl = ((void*)0);
 }

 return FUNC_0(VAR_2, VAR_6, VAR_8,
       &VAR_7, 1);
}
