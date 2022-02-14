
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl812_private {int ai_poll_ptr; struct comedi_isadma* dma; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_isadma_desc {int virt_addr; int size; } ;
struct comedi_isadma {size_t cur_dma; struct comedi_isadma_desc* desc; } ;
struct comedi_device {struct pcl812_private* private; } ;


 unsigned int FUNC_0 (struct comedi_subdevice*,int ) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,int ,int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1)
{
 struct pcl812_private *VAR_2 = VAR_0->private;
 struct comedi_isadma *VAR_3 = VAR_2->dma;
 struct comedi_isadma_desc *VAR_4 = &VAR_3->desc[VAR_3->cur_dma];
 unsigned int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_4->size) -
     VAR_2->ai_poll_ptr;
 VAR_6 = VAR_2->ai_poll_ptr;
 VAR_2->ai_poll_ptr = 0;


 VAR_3->cur_dma = 1 - VAR_3->cur_dma;
 FUNC_1(VAR_0, VAR_1, VAR_5);

 FUNC_2(VAR_0, VAR_1, VAR_4->virt_addr, VAR_6, VAR_5);
}
