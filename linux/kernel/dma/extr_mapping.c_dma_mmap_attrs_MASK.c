
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct dma_map_ops {int (* mmap ) (struct device*,struct vm_area_struct*,void*,int ,size_t,unsigned long) ;} ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct vm_area_struct*,void*,int ,size_t,unsigned long) ;
 scalar_t__ FUNC_1 (struct dma_map_ops const*) ;
 struct dma_map_ops* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,struct vm_area_struct*,void*,int ,size_t,unsigned long) ;

int FUNC_4(struct device *VAR_1, struct vm_area_struct *VAR_2,
  void *VAR_3, dma_addr_t VAR_4, size_t VAR_5,
  unsigned long VAR_6)
{
 const struct dma_map_ops *VAR_7 = FUNC_2(VAR_1);

 if (FUNC_1(VAR_7))
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
    VAR_6);
 if (!VAR_7->mmap)
  return -VAR_0;
 return VAR_7->mmap(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
