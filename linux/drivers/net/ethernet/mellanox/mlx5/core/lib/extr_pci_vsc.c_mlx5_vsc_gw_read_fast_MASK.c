
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mlx5_core_dev*,unsigned int,int *) ;
 int FUNC_2 (struct mlx5_core_dev*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct mlx5_core_dev *VAR_4,
     unsigned int VAR_5,
     unsigned int *VAR_6,
     u32 *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_7);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_2(VAR_4, VAR_3, VAR_6);
 if (VAR_8)
  goto out;

 *VAR_6 = FUNC_0(*VAR_6, VAR_2,
           VAR_1);

 if (*VAR_6 <= VAR_5)
  VAR_8 = -VAR_0;
out:
 return VAR_8;
}
