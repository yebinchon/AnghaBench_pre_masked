
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci224_private {unsigned char intsce; int intr_running; int ao_spinlock; scalar_t__ iobase1; int intr_cpuid; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct comedi_subdevice* write_subdev; struct pci224_private* private; } ;
struct comedi_cmd {scalar_t__ start_src; scalar_t__ stop_src; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int FUNC_0 (int) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned char,scalar_t__) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_5, void *VAR_6)
{
 struct comedi_device *VAR_7 = VAR_6;
 struct pci224_private *VAR_8 = VAR_7->private;
 struct comedi_subdevice *VAR_9 = VAR_7->write_subdev;
 struct comedi_cmd *VAR_10;
 unsigned char VAR_11, VAR_12;
 unsigned char VAR_13;
 int VAR_14 = 0;
 unsigned long VAR_15;

 VAR_11 = FUNC_1(VAR_8->iobase1 + VAR_2) & 0x3F;
 if (VAR_11) {
  VAR_14 = 1;
  FUNC_6(&VAR_8->ao_spinlock, VAR_15);
  VAR_12 = VAR_8->intsce & VAR_11;

  VAR_13 = VAR_8->intsce & ~VAR_11;
  FUNC_2(VAR_13, VAR_8->iobase1 + VAR_2);
  VAR_8->intr_running = 1;
  VAR_8->intr_cpuid = VAR_3;
  FUNC_7(&VAR_8->ao_spinlock, VAR_15);
  if (VAR_12) {
   VAR_10 = &VAR_9->async->cmd;
   if (VAR_12 & VAR_1) {
    VAR_8->intsce &= ~VAR_1;
    if (VAR_10->start_src == VAR_4)
     FUNC_4(VAR_7, VAR_9);
    else if (VAR_10->stop_src == VAR_4)
     FUNC_5(VAR_7, VAR_9);
   }
   if (VAR_12 & VAR_0)
    FUNC_3(VAR_7, VAR_9);
  }

  FUNC_6(&VAR_8->ao_spinlock, VAR_15);
  if (VAR_13 != VAR_8->intsce) {
   FUNC_2(VAR_8->intsce,
        VAR_8->iobase1 + VAR_2);
  }
  VAR_8->intr_running = 0;
  FUNC_7(&VAR_8->ao_spinlock, VAR_15);
 }
 return FUNC_0(VAR_14);
}
