
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx5dr_ste {TYPE_1__* htbl; int ste_chain_location; } ;
struct mlx5dr_matcher_rx_tx {int dummy; } ;
struct mlx5dr_matcher {TYPE_2__* tbl; } ;
struct TYPE_4__ {int dmn; } ;
struct TYPE_3__ {int miss_list; } ;


 int VAR_0 ;
 struct mlx5dr_ste* FUNC_0 (struct mlx5dr_matcher*,struct mlx5dr_matcher_rx_tx*,int *) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct mlx5dr_matcher*,struct mlx5dr_matcher_rx_tx*,struct mlx5dr_ste*,int *,int ) ;
 int FUNC_3 (struct mlx5dr_ste*,struct mlx5dr_matcher*,struct mlx5dr_matcher_rx_tx*) ;
 int FUNC_4 (struct mlx5dr_ste*) ;

__attribute__((used)) static struct mlx5dr_ste *
FUNC_5(struct mlx5dr_matcher *VAR_1,
          struct mlx5dr_matcher_rx_tx *VAR_2,
          u8 *VAR_3,
          struct mlx5dr_ste *VAR_4)
{
 struct mlx5dr_ste *VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (!VAR_5) {
  FUNC_1(VAR_1->tbl->dmn, "Failed creating collision entry\n");
  return ((void*)0);
 }

 VAR_5->ste_chain_location = VAR_4->ste_chain_location;


 VAR_5->htbl->miss_list = FUNC_4(VAR_4);


 if (FUNC_2(VAR_1, VAR_2, VAR_5, VAR_3,
     VAR_0)) {
  FUNC_1(VAR_1->tbl->dmn, "Failed allocating table\n");
  goto free_tbl;
 }

 return VAR_5;

free_tbl:
 FUNC_3(VAR_5, VAR_1, VAR_2);
 return ((void*)0);
}
