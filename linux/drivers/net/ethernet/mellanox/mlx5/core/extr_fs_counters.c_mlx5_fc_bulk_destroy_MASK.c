
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fc_bulk {scalar_t__ bulk_len; struct mlx5_fc_bulk* bitmask; int base_id; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_fc_bulk*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,char*) ;
 scalar_t__ FUNC_3 (struct mlx5_fc_bulk*) ;

__attribute__((used)) static int
FUNC_4(struct mlx5_core_dev *VAR_1, struct mlx5_fc_bulk *VAR_2)
{
 if (FUNC_3(VAR_2) < VAR_2->bulk_len) {
  FUNC_2(VAR_1, "Freeing bulk before all counters were released\n");
  return -VAR_0;
 }

 FUNC_1(VAR_1, VAR_2->base_id);
 FUNC_0(VAR_2->bitmask);
 FUNC_0(VAR_2);

 return 0;
}
