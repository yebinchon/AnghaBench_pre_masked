
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int,int ,scalar_t__) ;
 unsigned int FUNC_1 (unsigned int,int,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct mlx5_core_dev *VAR_7, unsigned int VAR_8,
        u32 VAR_9)
{
 int VAR_10;

 if (FUNC_0(VAR_8, VAR_6,
    VAR_3 + VAR_5))
  return -VAR_0;


 VAR_8 = FUNC_1(VAR_8, 1, VAR_4, 1);
 VAR_10 = FUNC_3(VAR_7, VAR_2, VAR_9);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_3(VAR_7, VAR_1, VAR_8);
 if (VAR_10)
  goto out;


 VAR_10 = FUNC_2(VAR_7, 0);

out:
 return VAR_10;
}
