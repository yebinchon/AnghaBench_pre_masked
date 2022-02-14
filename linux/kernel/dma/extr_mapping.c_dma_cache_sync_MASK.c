
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_map_ops {int (* cache_sync ) (struct device*,void*,size_t,int) ;} ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,void*,size_t,int) ;
 scalar_t__ FUNC_2 (struct dma_map_ops const*) ;
 struct dma_map_ops* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,void*,size_t,int) ;
 int FUNC_5 (int) ;

void FUNC_6(struct device *VAR_0, void *VAR_1, size_t VAR_2,
  enum dma_data_direction VAR_3)
{
 const struct dma_map_ops *VAR_4 = FUNC_3(VAR_0);

 FUNC_0(!FUNC_5(VAR_3));

 if (FUNC_2(VAR_4))
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 else if (VAR_4->cache_sync)
  VAR_4->cache_sync(VAR_0, VAR_1, VAR_2, VAR_3);
}
