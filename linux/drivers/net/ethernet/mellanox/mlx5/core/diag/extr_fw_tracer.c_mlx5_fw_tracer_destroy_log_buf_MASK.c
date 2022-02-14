
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; scalar_t__ log_buf; int dma; } ;
struct mlx5_fw_tracer {TYPE_2__ buff; struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mlx5_fw_tracer *VAR_1)
{
 struct mlx5_core_dev *VAR_2 = VAR_1->dev;
 struct device *VAR_3 = &VAR_2->pdev->dev;

 if (!VAR_1->buff.log_buf)
  return;

 FUNC_0(VAR_3, VAR_1->buff.dma, VAR_1->buff.size, VAR_0);
 FUNC_1((unsigned long)VAR_1->buff.log_buf, FUNC_2(VAR_1->buff.size));
}
