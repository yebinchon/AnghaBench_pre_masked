
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_map_ops {int * mmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct dma_map_ops const*) ;
 struct dma_map_ops* FUNC_3 (struct device*) ;

bool FUNC_4(struct device *VAR_2)
{
 const struct dma_map_ops *VAR_3 = FUNC_3(VAR_2);

 if (FUNC_2(VAR_3)) {
  return FUNC_0(VAR_1) &&
         (FUNC_1(VAR_2) ||
   FUNC_0(VAR_0));
 }

 return VAR_3->mmap != ((void*)0);
}
