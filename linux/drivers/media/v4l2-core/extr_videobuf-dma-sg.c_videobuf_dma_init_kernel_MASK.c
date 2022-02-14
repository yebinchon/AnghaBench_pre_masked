
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_dmabuf {int direction; int nr_pages; int * vaddr_pages; int * dma_addr; int dev; int * vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,int ,void*,int ) ;
 int FUNC_2 (int,char*,int,...) ;
 void* FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (void*) ;
 int * FUNC_8 (int *,int,int,int ) ;

__attribute__((used)) static int FUNC_9(struct videobuf_dmabuf *VAR_7, int VAR_8,
        int VAR_9)
{
 int VAR_10;

 FUNC_2(1, "init kernel [%d pages]\n", VAR_9);

 VAR_7->direction = VAR_8;
 VAR_7->vaddr_pages = FUNC_3(VAR_9, sizeof(*VAR_7->vaddr_pages),
       VAR_1);
 if (!VAR_7->vaddr_pages)
  return -VAR_0;

 VAR_7->dma_addr = FUNC_3(VAR_9, sizeof(*VAR_7->dma_addr), VAR_1);
 if (!VAR_7->dma_addr) {
  FUNC_4(VAR_7->vaddr_pages);
  return -VAR_0;
 }
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  void *VAR_11;

  VAR_11 = FUNC_0(VAR_7->dev, VAR_4,
       &(VAR_7->dma_addr[VAR_10]), VAR_1);
  if (VAR_11 == ((void*)0))
   goto out_free_pages;

  VAR_7->vaddr_pages[VAR_10] = FUNC_7(VAR_11);
 }
 VAR_7->vaddr = FUNC_8(VAR_7->vaddr_pages, VAR_9, VAR_6 | VAR_5,
     VAR_2);
 if (((void*)0) == VAR_7->vaddr) {
  FUNC_2(1, "vmalloc_32(%d pages) failed\n", VAR_9);
  goto out_free_pages;
 }

 FUNC_2(1, "vmalloc is at addr %p, size=%d\n",
  *VAR_7->vaddr, VAR_9 << VAR_3);

 FUNC_5(VAR_7->vaddr, 0, VAR_9 << VAR_3);
 VAR_7->nr_pages = VAR_9;

 return 0;
out_free_pages:
 while (VAR_10 > 0) {
  void *VAR_12;

  VAR_10--;
  VAR_12 = FUNC_6(VAR_7->vaddr_pages[VAR_10]);
  FUNC_1(VAR_7->dev, VAR_4, VAR_12, VAR_7->dma_addr[VAR_10]);
 }
 FUNC_4(VAR_7->dma_addr);
 VAR_7->dma_addr = ((void*)0);
 FUNC_4(VAR_7->vaddr_pages);
 VAR_7->vaddr_pages = ((void*)0);

 return -VAR_0;

}
