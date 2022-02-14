
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_subdevice* readback; struct comedi_subdevice* async; struct comedi_subdevice* private; } ;
struct comedi_device {int n_subdevices; int ioenabled; int * close; int * open; int * write_subdev; int * read_subdev; scalar_t__ irq; scalar_t__ iolen; scalar_t__ iobase; int * mmio; int * board_ptr; int * board_name; int * driver; struct comedi_subdevice* pacer; struct comedi_subdevice* private; struct comedi_subdevice* subdevices; int mutex; int attach_lock; } ;


 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,int ) ;
 scalar_t__ FUNC_1 (struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_subdevice*) ;
 int FUNC_4 (struct comedi_subdevice*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_0)
{
 int VAR_1;
 struct comedi_subdevice *VAR_2;

 FUNC_5(&VAR_0->attach_lock);
 FUNC_5(&VAR_0->mutex);
 if (VAR_0->subdevices) {
  for (VAR_1 = 0; VAR_1 < VAR_0->n_subdevices; VAR_1++) {
   VAR_2 = &VAR_0->subdevices[VAR_1];
   if (FUNC_1(VAR_2))
    FUNC_4(VAR_2->private);
   FUNC_3(VAR_2);
   if (VAR_2->async) {
    FUNC_0(VAR_0, VAR_2, 0);
    FUNC_4(VAR_2->async);
   }
   FUNC_4(VAR_2->readback);
  }
  FUNC_4(VAR_0->subdevices);
  VAR_0->subdevices = ((void*)0);
  VAR_0->n_subdevices = 0;
 }
 FUNC_4(VAR_0->private);
 FUNC_4(VAR_0->pacer);
 VAR_0->private = ((void*)0);
 VAR_0->pacer = ((void*)0);
 VAR_0->driver = ((void*)0);
 VAR_0->board_name = ((void*)0);
 VAR_0->board_ptr = ((void*)0);
 VAR_0->mmio = ((void*)0);
 VAR_0->iobase = 0;
 VAR_0->iolen = 0;
 VAR_0->ioenabled = 0;
 VAR_0->irq = 0;
 VAR_0->read_subdev = ((void*)0);
 VAR_0->write_subdev = ((void*)0);
 VAR_0->open = ((void*)0);
 VAR_0->close = ((void*)0);
 FUNC_2(VAR_0);
}
