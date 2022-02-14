
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
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;

void FUNC_9(struct device *VAR_2, size_t VAR_3,
    void *VAR_4, dma_addr_t VAR_5)
{
 struct dma_debug_entry VAR_6 = {
  .type = VAR_1,
  .dev = VAR_2,
  .offset = FUNC_3(VAR_4),
  .dev_addr = VAR_5,
  .size = VAR_3,
  .direction = VAR_0,
 };


 if (!FUNC_2(VAR_4) && !FUNC_6(VAR_4))
  return;

 if (FUNC_2(VAR_4))
  VAR_6.pfn = FUNC_8(VAR_4);
 else
  VAR_6.pfn = FUNC_4(FUNC_7(VAR_4));

 if (FUNC_5(FUNC_1()))
  return;

 FUNC_0(&VAR_6);
}
