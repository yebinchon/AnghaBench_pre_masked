
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_irq {int mask; } ;
struct TYPE_2__ {int numa_node; } ;
struct mlx5_core_dev {TYPE_1__ priv; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,char*,...) ;
 struct mlx5_irq* FUNC_5 (struct mlx5_core_dev*,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct mlx5_core_dev *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_3 + VAR_5;
 struct mlx5_irq *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_4, VAR_6);
 VAR_8 = FUNC_6(VAR_4->pdev, VAR_6);
 if (!FUNC_7(&VAR_7->mask, VAR_2)) {
  FUNC_4(VAR_4, "zalloc_cpumask_var failed");
  return -VAR_1;
 }

 FUNC_2(FUNC_1(VAR_5, VAR_4->priv.numa_node),
   VAR_7->mask);
 if (FUNC_0(VAR_0) &&
     FUNC_3(VAR_8, VAR_7->mask))
  FUNC_4(VAR_4, "irq_set_affinity_hint failed, irq 0x%.4x",
          VAR_8);

 return 0;
}
