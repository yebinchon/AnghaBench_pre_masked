
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_dev {TYPE_1__* persist; } ;
struct TYPE_2__ {int pdev; } ;


 int FUNC_0 (struct mlx4_dev*,char*) ;
 scalar_t__ FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_6(struct mlx4_dev *VAR_0)
{
 int VAR_1 = 0;

 if (FUNC_1(VAR_0))
  FUNC_2(VAR_0);

 if (!FUNC_4(VAR_0->persist->pdev)) {
  VAR_1 = FUNC_5(VAR_0);



  if (VAR_1)
   return 0;

  VAR_1 = FUNC_3(VAR_0);
  if (VAR_1)
   FUNC_0(VAR_0, "Fail to reset HCA\n");
 }

 return VAR_1;
}
