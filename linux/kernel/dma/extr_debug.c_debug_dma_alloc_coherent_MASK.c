
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_debug_entry {size_t size; int pfn; int direction; int dev_addr; int offset; struct device* dev; int type; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct dma_debug_entry*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 struct dma_debug_entry* FUNC_2 () ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;

void FUNC_10(struct device *VAR_2, size_t VAR_3,
         dma_addr_t VAR_4, void *VAR_5)
{
 struct dma_debug_entry *VAR_6;

 if (FUNC_6(FUNC_1()))
  return;

 if (FUNC_6(VAR_5 == ((void*)0)))
  return;


 if (!FUNC_3(VAR_5) && !FUNC_7(VAR_5))
  return;

 VAR_6 = FUNC_2();
 if (!VAR_6)
  return;

 VAR_6->type = VAR_1;
 VAR_6->dev = VAR_2;
 VAR_6->offset = FUNC_4(VAR_5);
 VAR_6->size = VAR_3;
 VAR_6->dev_addr = VAR_4;
 VAR_6->direction = VAR_0;

 if (FUNC_3(VAR_5))
  VAR_6->pfn = FUNC_9(VAR_5);
 else
  VAR_6->pfn = FUNC_5(FUNC_8(VAR_5));

 FUNC_0(VAR_6);
}
