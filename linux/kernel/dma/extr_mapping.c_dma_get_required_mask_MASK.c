
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dma_map_ops {int (* get_required_mask ) (struct device*) ;} ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct dma_map_ops const*) ;
 struct dma_map_ops* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;

u64 FUNC_5(struct device *VAR_0)
{
 const struct dma_map_ops *VAR_1 = FUNC_3(VAR_0);

 if (FUNC_2(VAR_1))
  return FUNC_1(VAR_0);
 if (VAR_1->get_required_mask)
  return VAR_1->get_required_mask(VAR_0);
 return FUNC_0(32);
}
