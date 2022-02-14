
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct delta_dev {int dev; } ;
struct delta_ctx {int name; int sys_errors; struct delta_dev* dev; } ;
struct delta_buf {char const* name; unsigned long attrs; int paddr; void* vaddr; int size; } ;
typedef int dma_addr_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,void*,int *,char const*) ;
 int FUNC_1 (int ,char*,int ,char const*,int ) ;
 void* FUNC_2 (int ,int ,int *,int,unsigned long) ;

int FUNC_3(struct delta_ctx *VAR_4, u32 VAR_5, const char *VAR_6,
      struct delta_buf *VAR_7)
{
 struct delta_dev *VAR_8 = VAR_4->dev;
 dma_addr_t VAR_9;
 void *VAR_10;
 unsigned long VAR_11 = VAR_0;

 VAR_10 = FUNC_2(VAR_8->dev, VAR_5, &VAR_9,
          VAR_2 | VAR_3, VAR_11);
 if (!VAR_10) {
  FUNC_1(VAR_8->dev,
   "%s hw_alloc:dma_alloc_coherent failed for %s (size=%d)\n",
   VAR_4->name, VAR_6, VAR_5);
  VAR_4->sys_errors++;
  return -VAR_1;
 }

 VAR_7->size = VAR_5;
 VAR_7->paddr = VAR_9;
 VAR_7->vaddr = VAR_10;
 VAR_7->name = VAR_6;
 VAR_7->attrs = VAR_11;

 FUNC_0(VAR_8->dev,
  "%s allocate %d bytes of HW memory @(virt=0x%p, phy=0x%pad): %s\n",
  VAR_4->name, VAR_5, VAR_7->vaddr, &VAR_7->paddr, VAR_7->name);

 return 0;
}
