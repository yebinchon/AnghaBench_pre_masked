
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_dmabuf {int nr_pages; int direction; scalar_t__ bus_addr; int * vaddr; int * vaddr_pages; int * dma_addr; int dev; int * pages; int sglen; int magic; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,void*,int ) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct videobuf_dmabuf *VAR_3)
{
 int VAR_4;
 FUNC_1(VAR_3->magic, VAR_1);
 FUNC_0(VAR_3->sglen);

 if (VAR_3->pages) {
  for (VAR_4 = 0; VAR_4 < VAR_3->nr_pages; VAR_4++)
   FUNC_5(VAR_3->pages[VAR_4]);
  FUNC_3(VAR_3->pages);
  VAR_3->pages = ((void*)0);
 }

 if (VAR_3->dma_addr) {
  for (VAR_4 = 0; VAR_4 < VAR_3->nr_pages; VAR_4++) {
   void *VAR_5;

   VAR_5 = FUNC_4(VAR_3->vaddr_pages[VAR_4]);
   FUNC_2(VAR_3->dev, VAR_2, VAR_5,
       VAR_3->dma_addr[VAR_4]);
  }
  FUNC_3(VAR_3->dma_addr);
  VAR_3->dma_addr = ((void*)0);
  FUNC_3(VAR_3->vaddr_pages);
  VAR_3->vaddr_pages = ((void*)0);
  FUNC_6(VAR_3->vaddr);
  VAR_3->vaddr = ((void*)0);
 }

 if (VAR_3->bus_addr)
  VAR_3->bus_addr = 0;
 VAR_3->direction = VAR_0;

 return 0;
}
