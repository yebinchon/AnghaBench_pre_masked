
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_map_ops {void* (* alloc ) (struct device*,size_t,int *,int,unsigned long) ;} ;
struct device {int coherent_dma_mask; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,size_t,int ,void*) ;
 scalar_t__ FUNC_2 (struct device*,size_t,int *,void**) ;
 void* FUNC_3 (struct device*,size_t,int *,int,unsigned long) ;
 scalar_t__ FUNC_4 (struct dma_map_ops const*) ;
 struct dma_map_ops* FUNC_5 (struct device*) ;
 void* FUNC_6 (struct device*,size_t,int *,int,unsigned long) ;

void *FUNC_7(struct device *VAR_3, size_t VAR_4, dma_addr_t *VAR_5,
  gfp_t VAR_6, unsigned long VAR_7)
{
 const struct dma_map_ops *VAR_8 = FUNC_5(VAR_3);
 void *VAR_9;

 FUNC_0(!VAR_3->coherent_dma_mask);

 if (FUNC_2(VAR_3, VAR_4, VAR_5, &VAR_9))
  return VAR_9;


 VAR_6 &= ~(VAR_0 | VAR_1 | VAR_2);

 if (FUNC_4(VAR_8))
  VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 else if (VAR_8->alloc)
  VAR_9 = VAR_8->alloc(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 else
  return ((void*)0);

 FUNC_1(VAR_3, VAR_4, *VAR_5, VAR_9);
 return VAR_9;
}
