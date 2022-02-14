
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_eq {int buf; int irqn; int eqn; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,int *) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,char*,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,struct mlx5_eq*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct mlx5_core_dev *VAR_0, struct mlx5_eq *VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_0, VAR_1);

 VAR_2 = FUNC_1(VAR_0, VAR_1->eqn);
 if (VAR_2)
  FUNC_2(VAR_0, "failed to destroy a previously created eq: eqn %d\n",
          VAR_1->eqn);
 FUNC_4(VAR_1->irqn);

 FUNC_0(VAR_0, &VAR_1->buf);

 return VAR_2;
}
