
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ iobase; int class_dev; struct comedi_subdevice* read_subdev; struct apci3120_private* private; } ;
struct comedi_cmd {int chanlist_len; scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;
struct apci3120_private {int ctrl; int mode; scalar_t__ amcc; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (int ,char*) ;
 unsigned int FUNC_6 (scalar_t__) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_19, void *VAR_20)
{
 struct comedi_device *VAR_21 = VAR_20;
 struct apci3120_private *VAR_22 = VAR_21->private;
 struct comedi_subdevice *VAR_23 = VAR_21->read_subdev;
 struct comedi_async *VAR_24 = VAR_23->async;
 struct comedi_cmd *VAR_25 = &VAR_24->cmd;
 unsigned int VAR_26;
 unsigned int VAR_27;

 VAR_26 = FUNC_7(VAR_21->iobase + VAR_11);
 VAR_27 = FUNC_6(VAR_22->amcc + VAR_2);

 if (!(VAR_26 & VAR_10) &&
     !(VAR_27 & VAR_3)) {
  FUNC_5(VAR_21->class_dev, "IRQ from unknown source\n");
  return VAR_15;
 }

 FUNC_9(VAR_27 | VAR_0, VAR_22->amcc + VAR_2);

 if (VAR_22->ctrl & VAR_5)
  FUNC_1(VAR_21, 0);

 if (VAR_27 & VAR_16)
  FUNC_5(VAR_21->class_dev, "AMCC IRQ - MASTER DMA ABORT!\n");
 if (VAR_27 & VAR_17)
  FUNC_5(VAR_21->class_dev, "AMCC IRQ - TARGET DMA ABORT!\n");

 if ((VAR_26 & VAR_9) &&
     (VAR_22->mode & VAR_6)) {
  unsigned short VAR_28;
  int VAR_29;

  for (VAR_29 = 0; VAR_29 < VAR_25->chanlist_len; VAR_29++) {
   VAR_28 = FUNC_7(VAR_21->iobase + VAR_4);
   FUNC_3(VAR_23, &VAR_28, 1);
  }

  VAR_22->mode |= VAR_6;
  FUNC_8(VAR_22->mode, VAR_21->iobase + VAR_7);
 }

 if (VAR_26 & VAR_12) {




  FUNC_0(VAR_21);
 }

 if (VAR_26 & VAR_8) {

  FUNC_9(VAR_1, VAR_22->amcc + VAR_2);


  FUNC_2(VAR_21, VAR_23);
 }

 if (VAR_25->stop_src == VAR_18 && VAR_24->scans_done >= VAR_25->stop_arg)
  VAR_24->events |= VAR_13;

 FUNC_4(VAR_21, VAR_23);

 return VAR_14;
}
