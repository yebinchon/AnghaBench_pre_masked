
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scif_window {scalar_t__ type; int nr_contig_chunks; int * dma_addr; scalar_t__* num_pages; } ;
struct scif_hw_dev {TYPE_1__* aper; int card_rel_da; } ;
struct scif_dev {struct scif_hw_dev* sdev; } ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_2__ {scalar_t__ pa; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct scif_dev*) ;

__attribute__((used)) static void
FUNC_1(struct scif_dev *VAR_1, struct scif_window *VAR_2)
{
 int VAR_3;
 struct scif_hw_dev *VAR_4 = VAR_1->sdev;
 phys_addr_t VAR_5 = 0;





 if (!FUNC_0(VAR_1) && VAR_2->type == VAR_0 &&
     VAR_4->aper && !VAR_4->card_rel_da)
  VAR_5 = VAR_4->aper->pa;
 else
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_contig_chunks; VAR_3++) {
  if (VAR_2->num_pages[VAR_3])
   VAR_2->dma_addr[VAR_3] += VAR_5;
  else
   break;
 }
}
