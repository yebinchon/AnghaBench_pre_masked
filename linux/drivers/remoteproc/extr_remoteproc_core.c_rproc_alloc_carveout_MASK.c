
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct rproc_mem_entry {int len; void* va; scalar_t__ dma; int da; int node; int flags; } ;
struct device {struct device* parent; } ;
struct rproc {int mappings; scalar_t__ domain; struct device dev; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,void*,scalar_t__*,...) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,int,scalar_t__*,int ) ;
 int FUNC_4 (struct device*,int,void*,scalar_t__) ;
 int FUNC_5 (scalar_t__,int ,scalar_t__,int,int ) ;
 int FUNC_6 (struct rproc_mem_entry*) ;
 struct rproc_mem_entry* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(struct rproc *VAR_4,
    struct rproc_mem_entry *VAR_5)
{
 struct rproc_mem_entry *VAR_6 = ((void*)0);
 struct device *VAR_7 = &VAR_4->dev;
 dma_addr_t VAR_8;
 void *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_7->parent, VAR_5->len, &VAR_8, VAR_2);
 if (!VAR_9) {
  FUNC_1(VAR_7->parent,
   "failed to allocate dma memory: len 0x%x\n", VAR_5->len);
  return -VAR_0;
 }

 FUNC_0(VAR_7, "carveout va %pK, dma %pad, len 0x%x\n",
  VAR_9, &VAR_8, VAR_5->len);

 if (VAR_5->da != VAR_1 && !VAR_4->domain) {






  if (VAR_5->da != (u32)VAR_8)
   FUNC_2(VAR_7->parent,
     "Allocated carveout doesn't fit device address request\n");
 }
 if (VAR_5->da != VAR_1 && VAR_4->domain) {
  VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_2);
  if (!VAR_6) {
   VAR_10 = -VAR_0;
   goto dma_free;
  }

  VAR_10 = FUNC_5(VAR_4->domain, VAR_5->da, VAR_8, VAR_5->len,
    VAR_5->flags);
  if (VAR_10) {
   FUNC_1(VAR_7, "iommu_map failed: %d\n", VAR_10);
   goto free_mapping;
  }
  VAR_6->da = VAR_5->da;
  VAR_6->len = VAR_5->len;
  FUNC_8(&VAR_6->node, &VAR_4->mappings);

  FUNC_0(VAR_7, "carveout mapped 0x%x to %pad\n",
   VAR_5->da, &VAR_8);
 }

 if (VAR_5->da == VAR_1) {

  if ((u64)VAR_8 & VAR_3)
   FUNC_2(VAR_7, "DMA address cast in 32bit to fit resource table format\n");

  VAR_5->da = (u32)VAR_8;
 }

 VAR_5->dma = VAR_8;
 VAR_5->va = VAR_9;

 return 0;

free_mapping:
 FUNC_6(VAR_6);
dma_free:
 FUNC_4(VAR_7->parent, VAR_5->len, VAR_9, VAR_8);
 return VAR_10;
}
