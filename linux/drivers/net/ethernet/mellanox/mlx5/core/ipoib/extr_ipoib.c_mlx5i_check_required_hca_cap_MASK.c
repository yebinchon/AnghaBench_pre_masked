
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5_core_dev*,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct mlx5_core_dev *VAR_4)
{
 if (FUNC_0(VAR_4, VAR_3) != VAR_1)
  return -VAR_0;

 if (!FUNC_0(VAR_4, VAR_2)) {
  FUNC_1(VAR_4, "IPoIB enhanced offloads are not supported\n");
  return -VAR_0;
 }

 return 0;
}
