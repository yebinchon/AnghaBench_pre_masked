
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5dr_mr {size_t size; void* addr; int dma_addr; int mkey; } ;
struct mlx5_core_dev {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,void*,size_t,int ) ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,int ,size_t,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,int ,int *) ;
 int FUNC_4 (struct mlx5dr_mr*) ;
 struct mlx5dr_mr* FUNC_5 (int,int ) ;
 int FUNC_6 (struct mlx5_core_dev*,char*) ;

__attribute__((used)) static struct mlx5dr_mr *FUNC_7(struct mlx5_core_dev *VAR_2,
       u32 VAR_3, void *VAR_4, size_t VAR_5)
{
 struct mlx5dr_mr *VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
 struct device *VAR_7;
 dma_addr_t VAR_8;
 int VAR_9;

 if (!VAR_6)
  return ((void*)0);

 VAR_7 = &VAR_2->pdev->dev;
 VAR_8 = FUNC_0(VAR_7, VAR_4, VAR_5,
      VAR_0);
 VAR_9 = FUNC_1(VAR_7, VAR_8);
 if (VAR_9) {
  FUNC_6(VAR_2, "Can't dma buf\n");
  FUNC_4(VAR_6);
  return ((void*)0);
 }

 VAR_9 = FUNC_3(VAR_2, VAR_3, &VAR_6->mkey);
 if (VAR_9) {
  FUNC_6(VAR_2, "Can't create mkey\n");
  FUNC_2(VAR_7, VAR_8, VAR_5,
     VAR_0);
  FUNC_4(VAR_6);
  return ((void*)0);
 }

 VAR_6->dma_addr = VAR_8;
 VAR_6->size = VAR_5;
 VAR_6->addr = VAR_4;

 return VAR_6;
}
