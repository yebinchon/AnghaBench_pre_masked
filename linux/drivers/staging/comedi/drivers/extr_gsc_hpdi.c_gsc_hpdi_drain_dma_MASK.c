
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hpdi_private {unsigned int dma_desc_index; unsigned int block_size; unsigned int num_dma_descriptors; unsigned int dio_count; TYPE_2__* dma_desc; int * desc_dio_buffer; scalar_t__ plx9080_mmio; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; struct hpdi_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct TYPE_4__ {int pci_start_addr; } ;
struct TYPE_3__ {struct comedi_cmd cmd; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct comedi_subdevice*,int ,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_1, unsigned int VAR_2)
{
 struct hpdi_private *VAR_3 = VAR_1->private;
 struct comedi_subdevice *VAR_4 = VAR_1->read_subdev;
 struct comedi_cmd *VAR_5 = &VAR_4->async->cmd;
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;

 VAR_10 = FUNC_3(VAR_3->plx9080_mmio + FUNC_0(VAR_2));

 VAR_6 = VAR_3->dma_desc_index;
 VAR_7 = FUNC_2(VAR_3->dma_desc[VAR_6].pci_start_addr);

 for (VAR_8 = 0; (VAR_10 < VAR_7 || VAR_10 >= VAR_7 + VAR_3->block_size) &&
      VAR_8 < VAR_3->num_dma_descriptors; VAR_8++) {

  VAR_9 = VAR_3->block_size / sizeof(u32);
  if (VAR_5->stop_src == VAR_0) {
   if (VAR_9 > VAR_3->dio_count)
    VAR_9 = VAR_3->dio_count;
   VAR_3->dio_count -= VAR_9;
  }
  FUNC_1(VAR_4, VAR_3->desc_dio_buffer[VAR_6],
      VAR_9);
  VAR_6++;
  VAR_6 %= VAR_3->num_dma_descriptors;
  VAR_7 = FUNC_2(VAR_3->dma_desc[VAR_6].pci_start_addr);

  VAR_3->dma_desc_index = VAR_6;
 }

}
