
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {struct device* device; } ;
struct mlx5_cmd {int alloc_size; int alloc_dma; int dma; void* cmd_alloc_buf; void* cmd_buf; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (void*,int) ;
 void* FUNC_2 (struct device*,int,int *,int ) ;
 int FUNC_3 (struct device*,int,void*,int ) ;

__attribute__((used)) static int FUNC_4(struct mlx5_core_dev *VAR_3, struct mlx5_cmd *VAR_4)
{
 struct device *VAR_5 = VAR_3->device;

 VAR_4->cmd_alloc_buf = FUNC_2(VAR_5, VAR_2,
      &VAR_4->alloc_dma, VAR_1);
 if (!VAR_4->cmd_alloc_buf)
  return -VAR_0;


 if (!((uintptr_t)VAR_4->cmd_alloc_buf & (VAR_2 - 1))) {
  VAR_4->cmd_buf = VAR_4->cmd_alloc_buf;
  VAR_4->dma = VAR_4->alloc_dma;
  VAR_4->alloc_size = VAR_2;
  return 0;
 }

 FUNC_3(VAR_5, VAR_2, VAR_4->cmd_alloc_buf,
     VAR_4->alloc_dma);
 VAR_4->cmd_alloc_buf = FUNC_2(VAR_5,
      2 * VAR_2 - 1,
      &VAR_4->alloc_dma, VAR_1);
 if (!VAR_4->cmd_alloc_buf)
  return -VAR_0;

 VAR_4->cmd_buf = FUNC_1(VAR_4->cmd_alloc_buf, VAR_2);
 VAR_4->dma = FUNC_0(VAR_4->alloc_dma, VAR_2);
 VAR_4->alloc_size = 2 * VAR_2 - 1;
 return 0;
}
