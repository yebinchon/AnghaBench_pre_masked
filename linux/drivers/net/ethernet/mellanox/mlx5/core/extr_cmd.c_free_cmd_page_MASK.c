
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {struct device* device; } ;
struct mlx5_cmd {int alloc_dma; int cmd_alloc_buf; int alloc_size; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mlx5_core_dev *VAR_0, struct mlx5_cmd *VAR_1)
{
 struct device *VAR_2 = VAR_0->device;

 FUNC_0(VAR_2, VAR_1->alloc_size, VAR_1->cmd_alloc_buf,
     VAR_1->alloc_dma);
}
