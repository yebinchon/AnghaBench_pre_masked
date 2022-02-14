
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mite_ring {unsigned int n_links; int dma_addr; struct mite_dma_desc* descs; } ;
struct mite_dma_desc {void* next; void* addr; void* count; } ;
struct comedi_subdevice {TYPE_1__* device; struct comedi_async* async; } ;
struct comedi_async {TYPE_3__* buf_map; } ;
struct TYPE_6__ {TYPE_2__* page_list; } ;
struct TYPE_5__ {unsigned int dma_addr; } ;
struct TYPE_4__ {int class_dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;

int FUNC_4(struct mite_ring *VAR_3,
          struct comedi_subdevice *VAR_4,
          unsigned int VAR_5)
{
 struct comedi_async *VAR_6 = VAR_4->async;
 struct mite_dma_desc *VAR_7 = ((void*)0);
 unsigned int VAR_8 = VAR_5 >> VAR_1;
 unsigned int VAR_9 = VAR_5 % VAR_2;
 int VAR_10;

 FUNC_1(VAR_4->device->class_dev,
  "mite: init ring buffer to %u bytes\n", VAR_5);

 if ((VAR_8 + (VAR_9 > 0 ? 1 : 0)) > VAR_3->n_links) {
  FUNC_2(VAR_4->device->class_dev,
   "mite: ring buffer too small for requested init\n");
  return -VAR_0;
 }


 for (VAR_10 = 0; VAR_10 < VAR_8; ++VAR_10) {
  VAR_7 = &VAR_3->descs[VAR_10];
  VAR_7->count = FUNC_0(VAR_2);
  VAR_7->addr = FUNC_0(VAR_6->buf_map->page_list[VAR_10].dma_addr);
  VAR_7->next = FUNC_0(VAR_3->dma_addr +
      (VAR_10 + 1) * sizeof(*VAR_7));
 }


 if (VAR_9 > 0) {
  VAR_7 = &VAR_3->descs[VAR_10];

  VAR_7->count = FUNC_0(VAR_9);
  VAR_7->addr = FUNC_0(VAR_6->buf_map->page_list[VAR_10].dma_addr);
 }


 VAR_7->next = FUNC_0(VAR_3->dma_addr);





 FUNC_3();
 return 0;
}
