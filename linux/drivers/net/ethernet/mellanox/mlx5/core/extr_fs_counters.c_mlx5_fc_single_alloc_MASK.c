
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fc {int id; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 struct mlx5_fc* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5_fc*) ;
 struct mlx5_fc* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,int *) ;

__attribute__((used)) static struct mlx5_fc *FUNC_4(struct mlx5_core_dev *VAR_2)
{
 struct mlx5_fc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_3(VAR_2, &VAR_3->id);
 if (VAR_4) {
  FUNC_1(VAR_3);
  return FUNC_0(VAR_4);
 }

 return VAR_3;
}
