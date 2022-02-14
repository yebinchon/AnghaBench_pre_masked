
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scif_window {int nr_pages; int* num_pages; void** dma_addr; int nr_contig_chunks; TYPE_1__* pinned_pages; } ;
struct scif_dev {int dummy; } ;
typedef TYPE_1__* scif_pinned_pages_t ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_2__ {int * pages; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct scif_dev*,struct scif_window*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (void**,int ,struct scif_dev*,int) ;
 int FUNC_6 (struct scif_dev*) ;

int
FUNC_7(struct scif_dev *VAR_3, struct scif_window *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8 = 0, VAR_9;
 scif_pinned_pages_t VAR_10;
 phys_addr_t VAR_11, VAR_12;

 FUNC_0();

 VAR_10 = VAR_4->pinned_pages;

 if (VAR_2 && !FUNC_6(VAR_3))
  return FUNC_3(VAR_3, VAR_4);

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_4->nr_pages; VAR_5 += VAR_9, VAR_6++) {
  VAR_11 = FUNC_1(VAR_10->pages[VAR_5]);
  VAR_9 = 1;


  for (VAR_7 = VAR_5 + 1; VAR_7 < VAR_4->nr_pages; VAR_7++) {
   VAR_12 = FUNC_1(VAR_10->pages[VAR_7]);
   if (VAR_12 != (VAR_11 + VAR_1))
    break;
   VAR_11 = VAR_12;
   VAR_9++;
  }
  VAR_4->num_pages[VAR_6] = VAR_9;
  VAR_4->nr_contig_chunks++;
  if (FUNC_4()) {




   VAR_8 = FUNC_5(&VAR_4->dma_addr[VAR_6],
           FUNC_2(FUNC_1(
          VAR_10->pages[VAR_5])),
           VAR_3,
           VAR_9 << VAR_0);
   if (VAR_8)
    return VAR_8;
  } else {
   VAR_4->dma_addr[VAR_6] = FUNC_1(VAR_10->pages[VAR_5]);
  }
 }
 return VAR_8;
}
