
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_uars_page {unsigned int map; } ;
struct mlx5_sq_bfreg {unsigned int map; } ;
struct mlx5_core_dev {int dummy; } ;


 unsigned int VAR_0 ;
 uintptr_t VAR_1 ;
 unsigned int VAR_2 ;
 uintptr_t VAR_3 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_4 ;

__attribute__((used)) static unsigned int FUNC_1(struct mlx5_core_dev *VAR_5,
        struct mlx5_uars_page *VAR_6,
        struct mlx5_sq_bfreg *VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;

 VAR_10 = 1 << FUNC_0(VAR_5, VAR_4);

 VAR_8 = (VAR_7->map - VAR_6->map) >> VAR_0;
 VAR_9 = (((uintptr_t)VAR_7->map % VAR_1) - VAR_3) / VAR_10;

 return VAR_8 * VAR_2 + VAR_9;
}
