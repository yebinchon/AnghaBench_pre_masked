
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int index; int minor; int spin_lock; int async_dma_dir; struct comedi_device* device; } ;
struct comedi_device {int n_subdevices; struct comedi_subdevice* subdevices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct comedi_subdevice* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct comedi_device *VAR_4, int VAR_5)
{
 struct comedi_subdevice *VAR_6;
 int VAR_7;

 if (VAR_5 < 1)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_5, sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;
 VAR_4->subdevices = VAR_6;
 VAR_4->n_subdevices = VAR_5;

 for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {
  VAR_6 = &VAR_4->subdevices[VAR_7];
  VAR_6->device = VAR_4;
  VAR_6->index = VAR_7;
  VAR_6->async_dma_dir = VAR_0;
  FUNC_1(&VAR_6->spin_lock);
  VAR_6->minor = -1;
 }
 return 0;
}
