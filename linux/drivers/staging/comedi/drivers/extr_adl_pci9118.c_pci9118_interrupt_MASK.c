
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci9118_private {int ai12_startstop; unsigned int ai_ctrl; scalar_t__ usedma; scalar_t__ ai_neverending; int ai_do; scalar_t__ iobase_a; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; int class_dev; int attached; struct pci9118_private* private; struct comedi_subdevice* read_subdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int events; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 scalar_t__ VAR_13 ;
 unsigned int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (struct comedi_device*,int) ;
 int FUNC_7 (struct comedi_device*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_19, void *VAR_20)
{
 struct comedi_device *VAR_21 = VAR_20;
 struct comedi_subdevice *VAR_22 = VAR_21->read_subdev;
 struct pci9118_private *VAR_23 = VAR_21->private;
 unsigned int VAR_24;
 unsigned int VAR_25;
 unsigned int VAR_26;

 if (!VAR_21->attached)
  return VAR_5;

 VAR_24 = FUNC_2(VAR_21->iobase + VAR_15) & 0xf;
 VAR_25 = FUNC_2(VAR_23->iobase_a + VAR_0);

 if (!VAR_24 && !(VAR_25 & VAR_1))
  return VAR_5;

 FUNC_3(VAR_25 | 0x00ff0000, VAR_23->iobase_a + VAR_0);

 if (VAR_25 & VAR_6) {
  FUNC_1(VAR_21->class_dev, "AMCC IRQ - MASTER DMA ABORT!\n");
  VAR_22->async->events |= VAR_2;
  goto interrupt_exit;
 }

 if (VAR_25 & VAR_18) {
  FUNC_1(VAR_21->class_dev, "AMCC IRQ - TARGET DMA ABORT!\n");
  VAR_22->async->events |= VAR_2;
  goto interrupt_exit;
 }

 VAR_26 = FUNC_2(VAR_21->iobase + VAR_13);
 if ((VAR_26 & VAR_12) == 0) {
  FUNC_1(VAR_21->class_dev,
   "A/D FIFO Full status (Fatal Error!)\n");
  VAR_22->async->events |= VAR_2 | VAR_3;
  goto interrupt_exit;
 }
 if (VAR_26 & VAR_10) {
  FUNC_1(VAR_21->class_dev,
   "A/D Burst Mode Overrun Status (Fatal Error!)\n");
  VAR_22->async->events |= VAR_2 | VAR_3;
  goto interrupt_exit;
 }
 if (VAR_26 & VAR_9) {
  FUNC_1(VAR_21->class_dev, "A/D Over Speed Status (Warning!)\n");
  VAR_22->async->events |= VAR_2;
  goto interrupt_exit;
 }
 if (VAR_26 & VAR_8) {
  FUNC_1(VAR_21->class_dev, "A/D Overrun Status (Fatal Error!)\n");
  VAR_22->async->events |= VAR_2 | VAR_3;
  goto interrupt_exit;
 }

 if (!VAR_23->ai_do)
  return VAR_4;

 if (VAR_23->ai12_startstop) {
  if ((VAR_26 & VAR_11) &&
      (VAR_24 & VAR_14)) {

   if (VAR_23->ai12_startstop & VAR_16) {

    VAR_23->ai12_startstop &= ~VAR_16;
    if (!(VAR_23->ai12_startstop & VAR_17))
     FUNC_6(VAR_21, 0);


    FUNC_7(VAR_21, VAR_23->ai_do);
    FUNC_3(VAR_23->ai_ctrl,
         VAR_21->iobase + VAR_7);
   } else if (VAR_23->ai12_startstop & VAR_17) {

    VAR_23->ai12_startstop &= ~VAR_17;
    FUNC_6(VAR_21, 0);


    VAR_23->ai_neverending = 0;
   }
  }
 }

 if (VAR_23->usedma)
  FUNC_4(VAR_21, VAR_22);
 else
  FUNC_5(VAR_21, VAR_22);

interrupt_exit:
 FUNC_0(VAR_21, VAR_22);
 return VAR_4;
}
