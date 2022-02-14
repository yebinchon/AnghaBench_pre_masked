
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl812_private {unsigned int ai_poll_ptr; int ai_dma; struct comedi_isadma* dma; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_isadma_desc {int virt_addr; } ;
struct comedi_isadma {size_t cur_dma; struct comedi_isadma_desc* desc; } ;
struct comedi_device {int spinlock; struct pcl812_private* private; } ;


 int FUNC_0 (struct comedi_subdevice*) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 unsigned int FUNC_2 (struct comedi_isadma*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_0, struct comedi_subdevice *VAR_1)
{
 struct pcl812_private *VAR_2 = VAR_0->private;
 struct comedi_isadma *VAR_3 = VAR_2->dma;
 struct comedi_isadma_desc *VAR_4;
 unsigned long VAR_5;
 unsigned int VAR_6;
 int VAR_7;


 if (!VAR_2->ai_dma)
  return 0;

 FUNC_3(&VAR_0->spinlock, VAR_5);

 VAR_6 = FUNC_2(VAR_3);
 VAR_6 = FUNC_1(VAR_1, VAR_6);
 if (VAR_6 > VAR_2->ai_poll_ptr) {
  VAR_4 = &VAR_3->desc[VAR_3->cur_dma];
  FUNC_5(VAR_0, VAR_1, VAR_4->virt_addr,
          VAR_2->ai_poll_ptr,
          VAR_6 - VAR_2->ai_poll_ptr);

  VAR_2->ai_poll_ptr = VAR_6;

  VAR_7 = FUNC_0(VAR_1);
 } else {

  VAR_7 = 0;
 }

 FUNC_4(&VAR_0->spinlock, VAR_5);

 return VAR_7;
}
