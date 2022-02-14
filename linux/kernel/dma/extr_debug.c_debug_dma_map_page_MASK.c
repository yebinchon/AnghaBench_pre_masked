
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dma_debug_entry {size_t offset; size_t size; int direction; int map_err_type; int dev_addr; int pfn; int type; struct device* dev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct dma_debug_entry*) ;
 int FUNC_2 (struct device*,void*,size_t) ;
 int FUNC_3 (struct device*,struct page*,size_t) ;
 int FUNC_4 () ;
 int VAR_1 ;
 struct dma_debug_entry* FUNC_5 () ;
 scalar_t__ FUNC_6 (struct device*,int ) ;
 void* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (int ) ;

void FUNC_10(struct device *VAR_2, struct page *VAR_3, size_t VAR_4,
   size_t VAR_5, int VAR_6, dma_addr_t VAR_7)
{
 struct dma_debug_entry *VAR_8;

 if (FUNC_9(FUNC_4()))
  return;

 if (FUNC_6(VAR_2, VAR_7))
  return;

 VAR_8 = FUNC_5();
 if (!VAR_8)
  return;

 VAR_8->dev = VAR_2;
 VAR_8->type = VAR_1;
 VAR_8->pfn = FUNC_8(VAR_3);
 VAR_8->offset = VAR_4,
 VAR_8->dev_addr = VAR_7;
 VAR_8->size = VAR_5;
 VAR_8->direction = VAR_6;
 VAR_8->map_err_type = VAR_0;

 FUNC_3(VAR_2, VAR_3, VAR_4);

 if (!FUNC_0(VAR_3)) {
  void *VAR_9 = FUNC_7(VAR_3) + VAR_4;

  FUNC_2(VAR_2, VAR_9, VAR_5);
 }

 FUNC_1(VAR_8);
}
