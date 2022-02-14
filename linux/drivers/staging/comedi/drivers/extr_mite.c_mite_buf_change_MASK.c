
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mite_ring {unsigned int n_links; struct mite_dma_desc* descs; int dma_addr; int hw_dev; } ;
struct mite_dma_desc {int dummy; } ;
struct comedi_subdevice {TYPE_1__* device; struct comedi_async* async; } ;
struct comedi_async {unsigned int prealloc_bufsz; } ;
struct TYPE_2__ {int class_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct mite_dma_desc* FUNC_1 (int ,unsigned int,int *,int ) ;
 int FUNC_2 (struct mite_ring*) ;
 int FUNC_3 (struct mite_ring*,struct comedi_subdevice*,unsigned int) ;

int FUNC_4(struct mite_ring *VAR_3, struct comedi_subdevice *VAR_4)
{
 struct comedi_async *VAR_5 = VAR_4->async;
 struct mite_dma_desc *VAR_6;
 unsigned int VAR_7;

 FUNC_2(VAR_3);

 if (VAR_5->prealloc_bufsz == 0)
  return 0;

 VAR_7 = VAR_5->prealloc_bufsz >> VAR_2;

 VAR_6 = FUNC_1(VAR_3->hw_dev,
       VAR_7 * sizeof(*VAR_6),
       &VAR_3->dma_addr, VAR_1);
 if (!VAR_6) {
  FUNC_0(VAR_4->device->class_dev,
   "mite: ring buffer allocation failed\n");
  return -VAR_0;
 }
 VAR_3->descs = VAR_6;
 VAR_3->n_links = VAR_7;

 return FUNC_3(VAR_3, VAR_4, VAR_7 << VAR_2);
}
