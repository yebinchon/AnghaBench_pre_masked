
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx5_fc_bulk {int bulk_len; struct mlx5_fc_bulk* bitmask; int * fcs; scalar_t__ base_id; } ;
struct mlx5_fc {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;
typedef enum mlx5_fc_bulk_alloc_bitmask { ____Placeholder_mlx5_fc_bulk_alloc_bitmask } mlx5_fc_bulk_alloc_bitmask ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct mlx5_fc_bulk* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 struct mlx5_fc_bulk* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct mlx5_fc_bulk*) ;
 struct mlx5_fc_bulk* FUNC_6 (int,int ) ;
 int FUNC_7 (struct mlx5_core_dev*,int,scalar_t__*) ;
 int FUNC_8 (int *,struct mlx5_fc_bulk*,scalar_t__) ;
 int FUNC_9 (int,struct mlx5_fc_bulk*) ;

__attribute__((used)) static struct mlx5_fc_bulk *FUNC_10(struct mlx5_core_dev *VAR_3)
{
 enum mlx5_fc_bulk_alloc_bitmask VAR_4;
 struct mlx5_fc_bulk *VAR_5;
 int VAR_6 = -VAR_0;
 int VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_4 = FUNC_2(VAR_3, VAR_2);
 VAR_7 = VAR_4 > 0 ? FUNC_3(VAR_4) : 1;

 VAR_5 = FUNC_6(sizeof(*VAR_5) + VAR_7 * sizeof(struct mlx5_fc),
         VAR_1);
 if (!VAR_5)
  goto err_alloc_bulk;

 VAR_5->bitmask = FUNC_4(FUNC_0(VAR_7), sizeof(unsigned long),
    VAR_1);
 if (!VAR_5->bitmask)
  goto err_alloc_bitmask;

 VAR_6 = FUNC_7(VAR_3, VAR_4, &VAR_8);
 if (VAR_6)
  goto err_mlx5_cmd_bulk_alloc;

 VAR_5->base_id = VAR_8;
 VAR_5->bulk_len = VAR_7;
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  FUNC_8(&VAR_5->fcs[VAR_9], VAR_5, VAR_8 + VAR_9);
  FUNC_9(VAR_9, VAR_5->bitmask);
 }

 return VAR_5;

err_mlx5_cmd_bulk_alloc:
 FUNC_5(VAR_5->bitmask);
err_alloc_bitmask:
 FUNC_5(VAR_5);
err_alloc_bulk:
 return FUNC_1(VAR_6);
}
