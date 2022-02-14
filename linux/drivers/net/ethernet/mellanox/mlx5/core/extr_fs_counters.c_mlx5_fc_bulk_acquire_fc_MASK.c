
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fc_bulk {int bulk_len; struct mlx5_fc* fcs; int bitmask; } ;
struct mlx5_fc {int dummy; } ;


 int VAR_0 ;
 struct mlx5_fc* FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static struct mlx5_fc *FUNC_3(struct mlx5_fc_bulk *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1->bitmask, VAR_1->bulk_len);

 if (VAR_2 >= VAR_1->bulk_len)
  return FUNC_0(-VAR_0);

 FUNC_1(VAR_2, VAR_1->bitmask);
 return &VAR_1->fcs[VAR_2];
}
