
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_map_ops {size_t (* max_mapping_size ) (struct device*) ;} ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct dma_map_ops const*) ;
 struct dma_map_ops* FUNC_2 (struct device*) ;
 size_t FUNC_3 (struct device*) ;

size_t FUNC_4(struct device *VAR_1)
{
 const struct dma_map_ops *VAR_2 = FUNC_2(VAR_1);
 size_t VAR_3 = VAR_0;

 if (FUNC_1(VAR_2))
  VAR_3 = FUNC_0(VAR_1);
 else if (VAR_2 && VAR_2->max_mapping_size)
  VAR_3 = VAR_2->max_mapping_size(VAR_1);

 return VAR_3;
}
