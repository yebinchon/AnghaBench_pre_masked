
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_dev {int dev; } ;
struct bnxt_ring_mem_info {int flags; int nr_pages; scalar_t__ depth; size_t page_size; int pg_tbl_map; int* dma_arr; int * vmem; scalar_t__ vmem_size; int * pg_tbl; void** pg_arr; } ;
struct bnxt {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *,size_t,int*,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct bnxt *VAR_8, struct bnxt_ring_mem_info *VAR_9)
{
 struct pci_dev *VAR_10 = VAR_8->pdev;
 u64 VAR_11 = 0;
 int VAR_12;

 if (VAR_9->flags & (VAR_2 | VAR_0))
  VAR_11 = VAR_7;
 if ((VAR_9->nr_pages > 1 || VAR_9->depth > 0) && !VAR_9->pg_tbl) {
  size_t VAR_13 = VAR_9->nr_pages * 8;

  if (VAR_9->flags & VAR_1)
   VAR_13 = VAR_9->page_size;
  VAR_9->pg_tbl = FUNC_1(&VAR_10->dev, VAR_13,
        &VAR_9->pg_tbl_map,
        VAR_4);
  if (!VAR_9->pg_tbl)
   return -VAR_3;
 }

 for (VAR_12 = 0; VAR_12 < VAR_9->nr_pages; VAR_12++) {
  u64 VAR_14 = VAR_11;

  VAR_9->pg_arr[VAR_12] = FUNC_1(&VAR_10->dev,
           VAR_9->page_size,
           &VAR_9->dma_arr[VAR_12],
           VAR_4);
  if (!VAR_9->pg_arr[VAR_12])
   return -VAR_3;

  if (VAR_9->nr_pages > 1 || VAR_9->depth > 0) {
   if (VAR_12 == VAR_9->nr_pages - 2 &&
       (VAR_9->flags & VAR_0))
    VAR_14 |= VAR_6;
   else if (VAR_12 == VAR_9->nr_pages - 1 &&
     (VAR_9->flags & VAR_0))
    VAR_14 |= VAR_5;
   VAR_9->pg_tbl[VAR_12] =
    FUNC_0(VAR_9->dma_arr[VAR_12] | VAR_14);
  }
 }

 if (VAR_9->vmem_size) {
  *VAR_9->vmem = FUNC_2(VAR_9->vmem_size);
  if (!(*VAR_9->vmem))
   return -VAR_3;
 }
 return 0;
}
