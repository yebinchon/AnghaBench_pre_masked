
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_irq {int nh; int name; } ;
struct mlx5_core_dev {int pdev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct mlx5_core_dev*,char*) ;
 struct mlx5_irq* FUNC_4 (struct mlx5_core_dev*,int) ;
 int VAR_1 ;
 int FUNC_5 (int ,int) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int,int ,int ,int ,int *) ;
 int FUNC_8 (int ,int,char*,char*,char*) ;

__attribute__((used)) static int FUNC_9(struct mlx5_core_dev *VAR_2, int VAR_3)
{
 char VAR_4[VAR_0];
 int VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  struct mlx5_irq *VAR_7 = FUNC_4(VAR_2, VAR_6);
  int VAR_8 = FUNC_5(VAR_2->pdev, VAR_6);

  FUNC_2(VAR_4, VAR_6);
  FUNC_0(&VAR_7->nh);
  FUNC_8(VAR_7->name, VAR_0,
    "%s@pci:%s", VAR_4, FUNC_6(VAR_2->pdev));
  VAR_5 = FUNC_7(VAR_8, VAR_1, 0, VAR_7->name,
      &VAR_7->nh);
  if (VAR_5) {
   FUNC_3(VAR_2, "Failed to request irq\n");
   goto err_request_irq;
  }
 }
 return 0;

err_request_irq:
 for (; VAR_6 >= 0; VAR_6--) {
  struct mlx5_irq *VAR_9 = FUNC_4(VAR_2, VAR_6);
  int VAR_10 = FUNC_5(VAR_2->pdev, VAR_6);

  FUNC_1(VAR_10, &VAR_9->nh);
 }
 return VAR_5;
}
