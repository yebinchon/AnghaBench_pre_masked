
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_map_ops {unsigned long (* get_merge_boundary ) (struct device*) ;} ;
struct device {int dummy; } ;


 struct dma_map_ops* FUNC_0 (struct device*) ;
 unsigned long FUNC_1 (struct device*) ;

unsigned long FUNC_2(struct device *VAR_0)
{
 const struct dma_map_ops *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1 || !VAR_1->get_merge_boundary)
  return 0;

 return VAR_1->get_merge_boundary(VAR_0);
}
