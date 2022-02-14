
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_map_ops {int (* free ) (struct device*,size_t,void*,int ,unsigned long) ;} ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,size_t,void*,int ) ;
 int FUNC_2 (struct device*,size_t,void*,int ,unsigned long) ;
 scalar_t__ FUNC_3 (struct dma_map_ops const*) ;
 scalar_t__ FUNC_4 (struct device*,int ,void*) ;
 struct dma_map_ops* FUNC_5 (struct device*) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 () ;
 int FUNC_8 (struct device*,size_t,void*,int ,unsigned long) ;

void FUNC_9(struct device *VAR_0, size_t VAR_1, void *VAR_2,
  dma_addr_t VAR_3, unsigned long VAR_4)
{
 const struct dma_map_ops *VAR_5 = FUNC_5(VAR_0);

 if (FUNC_4(VAR_0, FUNC_6(VAR_1), VAR_2))
  return;







 FUNC_0(FUNC_7());

 if (!VAR_2)
  return;

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if (FUNC_3(VAR_5))
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else if (VAR_5->free)
  VAR_5->free(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
