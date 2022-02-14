
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5dr_ste_htbl {int chunk_size; } ;
struct mlx5dr_rule_rx_tx {int dummy; } ;
struct mlx5dr_rule {TYPE_2__* matcher; } ;
struct TYPE_6__ {int max_log_sw_icm_sz; } ;
struct mlx5dr_domain {TYPE_3__ info; } ;
struct list_head {int dummy; } ;
typedef enum mlx5dr_icm_chunk_size { ____Placeholder_mlx5dr_icm_chunk_size } mlx5dr_icm_chunk_size ;
struct TYPE_5__ {TYPE_1__* tbl; } ;
struct TYPE_4__ {struct mlx5dr_domain* dmn; } ;


 struct mlx5dr_ste_htbl* FUNC_0 (struct mlx5dr_rule*,struct mlx5dr_rule_rx_tx*,struct mlx5dr_ste_htbl*,int ,struct list_head*,int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;

__attribute__((used)) static struct mlx5dr_ste_htbl *FUNC_3(struct mlx5dr_rule *VAR_1,
           struct mlx5dr_rule_rx_tx *VAR_2,
           struct mlx5dr_ste_htbl *VAR_3,
           u8 VAR_4,
           struct list_head *VAR_5)
{
 struct mlx5dr_domain *VAR_6 = VAR_1->matcher->tbl->dmn;
 enum mlx5dr_icm_chunk_size VAR_7;

 VAR_7 = FUNC_2(VAR_3->chunk_size);
 VAR_7 = FUNC_1(VAR_0, VAR_7, VAR_6->info.max_log_sw_icm_sz);

 if (VAR_7 == VAR_3->chunk_size)
  return ((void*)0);

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_7);
}
