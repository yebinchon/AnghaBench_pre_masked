
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5dr_ste_htbl {struct mlx5dr_ste* ste_arr; } ;
struct mlx5dr_ste {int dummy; } ;
struct mlx5dr_matcher_rx_tx {TYPE_1__* e_anchor; } ;
struct mlx5dr_matcher {TYPE_2__* tbl; } ;
struct mlx5dr_domain {int ste_icm_pool; } ;
struct TYPE_6__ {int icm_addr; } ;
struct TYPE_5__ {struct mlx5dr_domain* dmn; } ;
struct TYPE_4__ {TYPE_3__* chunk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5dr_domain*,char*) ;
 int FUNC_1 (struct mlx5dr_ste_htbl*) ;
 struct mlx5dr_ste_htbl* FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static struct mlx5dr_ste *
FUNC_4(struct mlx5dr_matcher *VAR_2,
         struct mlx5dr_matcher_rx_tx *VAR_3,
         u8 *VAR_4)
{
 struct mlx5dr_domain *VAR_5 = VAR_2->tbl->dmn;
 struct mlx5dr_ste_htbl *VAR_6;
 struct mlx5dr_ste *VAR_7;


 VAR_6 = FUNC_2(VAR_5->ste_icm_pool,
      VAR_0,
      VAR_1,
      0);
 if (!VAR_6) {
  FUNC_0(VAR_5, "Failed allocating collision table\n");
  return ((void*)0);
 }


 VAR_7 = VAR_6->ste_arr;
 FUNC_3(VAR_4, VAR_3->e_anchor->chunk->icm_addr);
 FUNC_1(VAR_6);

 return VAR_7;
}
