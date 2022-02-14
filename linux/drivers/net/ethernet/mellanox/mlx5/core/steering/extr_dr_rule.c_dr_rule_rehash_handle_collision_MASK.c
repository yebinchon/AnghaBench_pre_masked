
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx5dr_ste {TYPE_1__* htbl; } ;
struct mlx5dr_matcher_rx_tx {int dummy; } ;
struct mlx5dr_matcher {TYPE_2__* tbl; } ;
struct list_head {int dummy; } ;
struct TYPE_4__ {int dmn; } ;
struct TYPE_3__ {int miss_list; } ;


 int FUNC_0 (struct mlx5dr_ste*,int ,struct list_head*) ;
 struct mlx5dr_ste* FUNC_1 (struct mlx5dr_matcher*,struct mlx5dr_matcher_rx_tx*,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mlx5dr_ste*,struct mlx5dr_matcher*,struct mlx5dr_matcher_rx_tx*) ;
 int FUNC_4 (struct mlx5dr_ste*) ;

__attribute__((used)) static struct mlx5dr_ste *
FUNC_5(struct mlx5dr_matcher *VAR_0,
    struct mlx5dr_matcher_rx_tx *VAR_1,
    struct list_head *VAR_2,
    struct mlx5dr_ste *VAR_3,
    u8 *VAR_4)
{
 struct mlx5dr_ste *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_4);
 if (!VAR_5)
  return ((void*)0);


 VAR_5->htbl->miss_list = FUNC_4(VAR_3);


 VAR_6 = FUNC_0(VAR_5,
       FUNC_4(VAR_3),
       VAR_2);
 if (VAR_6) {
  FUNC_2(VAR_0->tbl->dmn, "Failed update dup entry\n");
  goto err_exit;
 }

 return VAR_5;

err_exit:
 FUNC_3(VAR_5, VAR_0, VAR_1);
 return ((void*)0);
}
