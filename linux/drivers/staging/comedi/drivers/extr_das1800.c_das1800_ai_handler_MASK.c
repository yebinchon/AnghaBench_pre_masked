
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das1800_private {int irq_dma_bits; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ iobase; int class_dev; struct comedi_subdevice* read_subdev; struct das1800_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (int ,char*) ;
 unsigned int FUNC_6 (scalar_t__) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct comedi_device *VAR_12)
{
 struct das1800_private *VAR_13 = VAR_12->private;
 struct comedi_subdevice *VAR_14 = VAR_12->read_subdev;
 struct comedi_async *VAR_15 = VAR_14->async;
 struct comedi_cmd *VAR_16 = &VAR_15->cmd;
 unsigned int VAR_17 = FUNC_6(VAR_12->iobase + VAR_6);


 FUNC_7(VAR_0, VAR_12->iobase + VAR_5);


 if (VAR_13->irq_dma_bits & VAR_7)
  FUNC_2(VAR_12, VAR_14, VAR_17);
 else if (VAR_17 & VAR_8)
  FUNC_3(VAR_12, VAR_14);
 else if (VAR_17 & VAR_9)
  FUNC_4(VAR_12, VAR_14);


 if (VAR_17 & VAR_10) {

  FUNC_7(VAR_1 & ~VAR_10, VAR_12->iobase + VAR_6);
  FUNC_5(VAR_12->class_dev, "FIFO overflow\n");
  VAR_15->events |= VAR_3;
  FUNC_0(VAR_12, VAR_14);
  return;
 }


 if (VAR_17 & VAR_4) {

  FUNC_7(VAR_1 & ~VAR_4, VAR_12->iobase + VAR_6);

  if (VAR_13->irq_dma_bits & VAR_7)
   FUNC_1(VAR_12, VAR_14);
  else
   FUNC_4(VAR_12, VAR_14);
  VAR_15->events |= VAR_2;
 } else if (VAR_16->stop_src == VAR_11 &&
     VAR_15->scans_done >= VAR_16->stop_arg) {
  VAR_15->events |= VAR_2;
 }

 FUNC_0(VAR_12, VAR_14);
}
