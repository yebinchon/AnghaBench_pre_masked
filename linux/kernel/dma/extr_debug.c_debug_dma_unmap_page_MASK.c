
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_debug_entry {size_t size; int direction; int dev_addr; struct device* dev; int type; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct dma_debug_entry*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct device *VAR_1, dma_addr_t VAR_2,
     size_t VAR_3, int VAR_4)
{
 struct dma_debug_entry VAR_5 = {
  .type = VAR_0,
  .dev = VAR_1,
  .dev_addr = VAR_2,
  .size = VAR_3,
  .direction = VAR_4,
 };

 if (FUNC_2(FUNC_1()))
  return;
 FUNC_0(&VAR_5);
}
