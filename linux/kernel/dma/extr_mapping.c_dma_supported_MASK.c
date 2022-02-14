
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dma_map_ops {int (* dma_supported ) (struct device*,int ) ;} ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int ) ;
 scalar_t__ FUNC_1 (struct dma_map_ops const*) ;
 struct dma_map_ops* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int ) ;

int FUNC_4(struct device *VAR_0, u64 VAR_1)
{
 const struct dma_map_ops *VAR_2 = FUNC_2(VAR_0);

 if (FUNC_1(VAR_2))
  return FUNC_0(VAR_0, VAR_1);
 if (!VAR_2->dma_supported)
  return 1;
 return VAR_2->dma_supported(VAR_0, VAR_1);
}
