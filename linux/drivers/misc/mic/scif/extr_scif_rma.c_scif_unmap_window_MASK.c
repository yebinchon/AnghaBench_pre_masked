
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scif_window {int nr_contig_chunks; int* dma_addr; int* num_pages; TYPE_2__* st; } ;
struct scif_dev {TYPE_1__* sdev; } ;
struct TYPE_5__ {int nents; int sgl; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,struct scif_dev*,int) ;
 int FUNC_4 (struct scif_dev*) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6(struct scif_dev *VAR_2, struct scif_window *VAR_3)
{
 int VAR_4;

 if (FUNC_2() && !FUNC_4(VAR_2)) {
  if (VAR_3->st) {
   FUNC_0(&VAR_2->sdev->dev,
         VAR_3->st->sgl, VAR_3->st->nents,
         VAR_0);
   FUNC_5(VAR_3->st);
   FUNC_1(VAR_3->st);
   VAR_3->st = ((void*)0);
  }
 } else {
  for (VAR_4 = 0; VAR_4 < VAR_3->nr_contig_chunks; VAR_4++) {
   if (VAR_3->dma_addr[VAR_4]) {
    FUNC_3(VAR_3->dma_addr[VAR_4],
        VAR_2,
        VAR_3->num_pages[VAR_4] <<
        VAR_1);
    VAR_3->dma_addr[VAR_4] = 0x0;
   }
  }
 }
}
