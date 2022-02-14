
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct page {int dummy; } ;
struct genwqe_dev {struct pci_dev* pci_dev; } ;
struct dma_mapping {unsigned long size; int nr_pages; int * u_vaddr; int * dma_list; int * page_list; int write; } ;
typedef int dma_addr_t ;


 int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct genwqe_dev*,int *,int,int *) ;
 int FUNC_4 (unsigned long,int,int ,int *) ;
 int * FUNC_5 (int,int,int ) ;
 int FUNC_6 (int *) ;
 unsigned long FUNC_7 (unsigned long) ;

int FUNC_8(struct genwqe_dev *VAR_8, struct dma_mapping *VAR_9, void *VAR_10,
       unsigned long VAR_11)
{
 int VAR_12 = -VAR_1;
 unsigned long VAR_13, VAR_14;
 struct pci_dev *VAR_15 = VAR_8->pci_dev;

 if ((VAR_10 == ((void*)0)) || (VAR_11 == 0)) {
  VAR_9->size = 0;
  return -VAR_1;
 }
 VAR_9->u_vaddr = VAR_10;
 VAR_9->size = VAR_11;


 VAR_13 = (unsigned long)VAR_10;
 VAR_14 = FUNC_7(VAR_13);
 if (VAR_11 > VAR_7 - VAR_6 - VAR_14) {
  VAR_9->size = 0;
  return -VAR_1;
 }
 VAR_9->nr_pages = FUNC_0(VAR_14 + VAR_11, VAR_6);

 VAR_9->page_list = FUNC_5(VAR_9->nr_pages,
          sizeof(struct page *) + sizeof(dma_addr_t),
          VAR_4);
 if (!VAR_9->page_list) {
  FUNC_1(&VAR_15->dev, "err: alloc page_list failed\n");
  VAR_9->nr_pages = 0;
  VAR_9->u_vaddr = ((void*)0);
  VAR_9->size = 0;
  return -VAR_2;
 }
 VAR_9->dma_list = (dma_addr_t *)(VAR_9->page_list + VAR_9->nr_pages);


 VAR_12 = FUNC_4(VAR_13 & VAR_5,
     VAR_9->nr_pages,
     VAR_9->write ? VAR_3 : 0,
     VAR_9->page_list);
 if (VAR_12 < 0)
  goto fail_get_user_pages;


 if (VAR_12 < VAR_9->nr_pages) {
  FUNC_2(VAR_9->page_list, VAR_12, VAR_9->write);
  VAR_12 = -VAR_0;
  goto fail_get_user_pages;
 }

 VAR_12 = FUNC_3(VAR_8, VAR_9->page_list, VAR_9->nr_pages, VAR_9->dma_list);
 if (VAR_12 != 0)
  goto fail_free_user_pages;

 return 0;

 fail_free_user_pages:
 FUNC_2(VAR_9->page_list, VAR_9->nr_pages, VAR_9->write);

 fail_get_user_pages:
 FUNC_6(VAR_9->page_list);
 VAR_9->page_list = ((void*)0);
 VAR_9->dma_list = ((void*)0);
 VAR_9->nr_pages = 0;
 VAR_9->u_vaddr = ((void*)0);
 VAR_9->size = 0;
 return VAR_12;
}
