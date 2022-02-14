
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fc_bulk {int base_id; int bitmask; } ;
struct mlx5_fc {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct mlx5_fc_bulk *VAR_1, struct mlx5_fc *VAR_2)
{
 int VAR_3 = VAR_2->id - VAR_1->base_id;

 if (FUNC_1(VAR_3, VAR_1->bitmask))
  return -VAR_0;

 FUNC_0(VAR_3, VAR_1->bitmask);
 return 0;
}
