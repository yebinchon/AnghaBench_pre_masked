
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_debug_entry {size_t size; int direction; int map_err_type; int dev_addr; int offset; int pfn; struct device* dev; int type; } ;
struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dma_debug_entry*) ;
 int FUNC_2 () ;
 int VAR_1 ;
 struct dma_debug_entry* FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(struct device *VAR_2, phys_addr_t VAR_3, size_t VAR_4,
       int VAR_5, dma_addr_t VAR_6)
{
 struct dma_debug_entry *VAR_7;

 if (FUNC_5(FUNC_2()))
  return;

 VAR_7 = FUNC_3();
 if (!VAR_7)
  return;

 VAR_7->type = VAR_1;
 VAR_7->dev = VAR_2;
 VAR_7->pfn = FUNC_0(VAR_3);
 VAR_7->offset = FUNC_4(VAR_3);
 VAR_7->size = VAR_4;
 VAR_7->dev_addr = VAR_6;
 VAR_7->direction = VAR_5;
 VAR_7->map_err_type = VAR_0;

 FUNC_1(VAR_7);
}
