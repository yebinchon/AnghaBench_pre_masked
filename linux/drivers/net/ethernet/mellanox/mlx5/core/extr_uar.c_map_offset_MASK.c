
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_3 ;

__attribute__((used)) static unsigned long FUNC_1(struct mlx5_core_dev *VAR_4, int VAR_5)
{



 return VAR_5 / VAR_1 * VAR_0 +
        (VAR_5 % VAR_1) *
        (1 << FUNC_0(VAR_4, VAR_3)) + VAR_2;
}
