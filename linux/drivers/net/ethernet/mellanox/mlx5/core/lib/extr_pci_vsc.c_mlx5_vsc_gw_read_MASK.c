
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mlx5_core_dev*,int) ;
 int FUNC_2 (struct mlx5_core_dev*,int ,int *) ;
 int FUNC_3 (struct mlx5_core_dev*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct mlx5_core_dev *VAR_6, unsigned int VAR_7,
       u32 *VAR_8)
{
 int VAR_9;

 if (FUNC_0(VAR_7, VAR_5,
    VAR_3 + VAR_4))
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_6, VAR_1, VAR_7);
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_1(VAR_6, 1);
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_2(VAR_6, VAR_2, VAR_8);
out:
 return VAR_9;
}
