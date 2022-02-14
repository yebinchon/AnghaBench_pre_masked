
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct mlx5dr_ste_build {int (* ste_build_tag_func ) (struct mlx5dr_match_param*,struct mlx5dr_ste_build*,int *) ;int byte_mask; int lu_type; int bit_mask; } ;
struct mlx5dr_matcher_rx_tx {int num_of_builders; struct mlx5dr_ste_build* ste_builder; TYPE_1__* nic_tbl; } ;
struct mlx5dr_matcher {int mask; int match_criteria; TYPE_2__* tbl; } ;
struct mlx5dr_match_param {int dummy; } ;
struct mlx5dr_domain_rx_tx {int ste_type; } ;
struct TYPE_7__ {int gvmi; } ;
struct TYPE_8__ {TYPE_3__ caps; } ;
struct mlx5dr_domain {TYPE_4__ info; } ;
struct TYPE_6__ {struct mlx5dr_domain* dmn; } ;
struct TYPE_5__ {struct mlx5dr_domain_rx_tx* nic_dmn; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5dr_domain*,int ,int *,struct mlx5dr_match_param*) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct mlx5dr_match_param*,struct mlx5dr_ste_build*,int *) ;

int FUNC_5(struct mlx5dr_matcher *VAR_4,
        struct mlx5dr_matcher_rx_tx *VAR_5,
        struct mlx5dr_match_param *VAR_6,
        u8 *VAR_7)
{
 struct mlx5dr_domain_rx_tx *VAR_8 = VAR_5->nic_tbl->nic_dmn;
 struct mlx5dr_domain *VAR_9 = VAR_4->tbl->dmn;
 struct mlx5dr_ste_build *VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_1(VAR_9, VAR_4->match_criteria,
      &VAR_4->mask, VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_10 = VAR_5->ste_builder;
 for (VAR_12 = 0; VAR_12 < VAR_5->num_of_builders; VAR_12++) {
  FUNC_2(VAR_7,
    VAR_10->lu_type,
    VAR_8->ste_type,
    VAR_9->info.caps.gvmi);

  FUNC_3(VAR_7, VAR_10->bit_mask);

  VAR_11 = VAR_10->ste_build_tag_func(VAR_6, VAR_10, VAR_7);
  if (VAR_11)
   return VAR_11;


  if (VAR_12 < (VAR_5->num_of_builders - 1)) {



   VAR_10++;
   FUNC_0(VAR_3, VAR_7, VAR_2, VAR_10->lu_type);
   FUNC_0(VAR_3, VAR_7, VAR_1, VAR_10->byte_mask);
  }
  VAR_7 += VAR_0;
 }
 return 0;
}
