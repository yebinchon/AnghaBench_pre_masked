
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct bnxt_ring_mem_info {int nr_pages; size_t page_size; int flags; int ** vmem; scalar_t__ vmem_size; int * pg_tbl; int pg_tbl_map; int ** pg_arr; int * dma_arr; } ;
struct bnxt {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,size_t,int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_1, struct bnxt_ring_mem_info *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_1->pdev;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->nr_pages; VAR_4++) {
  if (!VAR_2->pg_arr[VAR_4])
   continue;

  FUNC_0(&VAR_3->dev, VAR_2->page_size,
      VAR_2->pg_arr[VAR_4], VAR_2->dma_arr[VAR_4]);

  VAR_2->pg_arr[VAR_4] = ((void*)0);
 }
 if (VAR_2->pg_tbl) {
  size_t VAR_5 = VAR_2->nr_pages * 8;

  if (VAR_2->flags & VAR_0)
   VAR_5 = VAR_2->page_size;
  FUNC_0(&VAR_3->dev, VAR_5,
      VAR_2->pg_tbl, VAR_2->pg_tbl_map);
  VAR_2->pg_tbl = ((void*)0);
 }
 if (VAR_2->vmem_size && *VAR_2->vmem) {
  FUNC_1(*VAR_2->vmem);
  *VAR_2->vmem = ((void*)0);
 }
}
