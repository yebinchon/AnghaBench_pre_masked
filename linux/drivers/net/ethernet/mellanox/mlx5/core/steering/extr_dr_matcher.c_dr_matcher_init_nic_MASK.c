
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5dr_matcher_rx_tx {void* e_anchor; void* s_htbl; TYPE_2__* ste_builder; TYPE_2__* ste_builder6; TYPE_2__* ste_builder4; } ;
struct mlx5dr_matcher {TYPE_1__* tbl; } ;
struct mlx5dr_domain {int ste_icm_pool; } ;
struct TYPE_4__ {int byte_mask; int lu_type; } ;
struct TYPE_3__ {struct mlx5dr_domain* dmn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx5dr_matcher*,struct mlx5dr_matcher_rx_tx*,int) ;
 int FUNC_1 (struct mlx5dr_domain*,char*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct mlx5dr_matcher *VAR_4,
          struct mlx5dr_matcher_rx_tx *VAR_5)
{
 struct mlx5dr_domain *VAR_6 = VAR_4->tbl->dmn;
 int VAR_7, VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_4, VAR_5, 0);
 VAR_9 = FUNC_0(VAR_4, VAR_5, 1);

 if (VAR_8 && VAR_9) {
  FUNC_1(VAR_6, "Cannot generate IPv4 or IPv6 rules with given mask\n");
  return -VAR_1;
 }

 if (!VAR_8)
  VAR_5->ste_builder = VAR_5->ste_builder4;
 else
  VAR_5->ste_builder = VAR_5->ste_builder6;

 VAR_5->e_anchor = FUNC_3(VAR_6->ste_icm_pool,
            VAR_0,
            VAR_3,
            0);
 if (!VAR_5->e_anchor)
  return -VAR_2;

 VAR_5->s_htbl = FUNC_3(VAR_6->ste_icm_pool,
          VAR_0,
          VAR_5->ste_builder[0].lu_type,
          VAR_5->ste_builder[0].byte_mask);
 if (!VAR_5->s_htbl) {
  VAR_7 = -VAR_2;
  goto free_e_htbl;
 }


 FUNC_2(VAR_5->s_htbl);
 FUNC_2(VAR_5->e_anchor);

 return 0;

free_e_htbl:
 FUNC_4(VAR_5->e_anchor);
 return VAR_7;
}
