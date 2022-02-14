
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl818_private {struct comedi_isadma* dma; } ;
struct comedi_subdevice {unsigned int maxdata; } ;
struct comedi_isadma_desc {unsigned short* virt_addr; int size; } ;
struct comedi_isadma {size_t cur_dma; struct comedi_isadma_desc* desc; } ;
struct comedi_device {struct pcl818_private* private; } ;


 unsigned int FUNC_0 (struct comedi_subdevice*,int ) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1)
{
 struct pcl818_private *VAR_2 = VAR_0->private;
 struct comedi_isadma *VAR_3 = VAR_2->dma;
 struct comedi_isadma_desc *VAR_4 = &VAR_3->desc[VAR_3->cur_dma];
 unsigned short *VAR_5 = VAR_4->virt_addr;
 unsigned int VAR_6 = FUNC_0(VAR_1, VAR_4->size);
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9;


 VAR_3->cur_dma = 1 - VAR_3->cur_dma;
 FUNC_1(VAR_0, VAR_1, VAR_6);

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8 = VAR_5[VAR_9];
  VAR_7 = VAR_8 & 0xf;
  VAR_8 = (VAR_8 >> 4) & VAR_1->maxdata;
  if (!FUNC_2(VAR_0, VAR_1, VAR_7, VAR_8))
   break;
 }
}
