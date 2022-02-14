
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_priv {int alloc_mutex; } ;
struct mlx5_core_dev {struct device* device; struct mlx5_priv priv; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 void* FUNC_1 (struct device*,size_t,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,int) ;

__attribute__((used)) static void *FUNC_5(struct mlx5_core_dev *VAR_1,
        size_t VAR_2, dma_addr_t *VAR_3,
        int VAR_4)
{
 struct mlx5_priv *VAR_5 = &VAR_1->priv;
 struct device *VAR_6 = VAR_1->device;
 int VAR_7;
 void *VAR_8;

 FUNC_2(&VAR_5->alloc_mutex);
 VAR_7 = FUNC_0(VAR_6);
 FUNC_4(VAR_6, VAR_4);
 VAR_8 = FUNC_1(VAR_6, VAR_2, VAR_3,
     VAR_0);
 FUNC_4(VAR_6, VAR_7);
 FUNC_3(&VAR_5->alloc_mutex);
 return VAR_8;
}
