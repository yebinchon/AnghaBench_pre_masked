
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_window {int nr_pages; scalar_t__ magic; struct scif_window* num_pages; struct scif_window* dma_addr; } ;


 int FUNC_0 (struct scif_window*,int) ;

void
FUNC_1(struct scif_window *VAR_0)
{
 FUNC_0(VAR_0->dma_addr, VAR_0->nr_pages *
    sizeof(*VAR_0->dma_addr));
 FUNC_0(VAR_0->num_pages, VAR_0->nr_pages *
    sizeof(*VAR_0->num_pages));
 VAR_0->magic = 0;
 FUNC_0(VAR_0, sizeof(*VAR_0));
}
