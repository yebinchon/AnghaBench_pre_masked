
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci230_private {unsigned char ier; int intr_running; int isr_spinlock; int intr_cpuid; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* read_subdev; struct comedi_subdevice* write_subdev; struct pci230_private* private; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned char FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned char,scalar_t__) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_9, void *VAR_10)
{
 unsigned char VAR_11, VAR_12, VAR_13;
 struct comedi_device *VAR_14 = VAR_10;
 struct pci230_private *VAR_15 = VAR_14->private;
 struct comedi_subdevice *VAR_16 = VAR_14->write_subdev;
 struct comedi_subdevice *VAR_17 = VAR_14->read_subdev;
 unsigned long VAR_18;


 VAR_11 = FUNC_1(VAR_14->iobase + VAR_6);

 if (VAR_11 == VAR_4)
  return VAR_1;

 FUNC_6(&VAR_15->isr_spinlock, VAR_18);
 VAR_12 = VAR_15->ier & VAR_11;





 VAR_13 = VAR_15->ier & ~VAR_11;
 FUNC_2(VAR_13, VAR_14->iobase + VAR_5);
 VAR_15->intr_running = 1;
 VAR_15->intr_cpuid = VAR_8;
 FUNC_7(&VAR_15->isr_spinlock, VAR_18);
 if (VAR_12 & VAR_7)
  FUNC_5(VAR_14, VAR_16);

 if (VAR_12 & VAR_2)
  FUNC_4(VAR_14, VAR_16);

 if (VAR_12 & VAR_3)
  FUNC_3(VAR_14, VAR_17);


 FUNC_6(&VAR_15->isr_spinlock, VAR_18);
 if (VAR_15->ier != VAR_13)
  FUNC_2(VAR_15->ier, VAR_14->iobase + VAR_5);
 VAR_15->intr_running = 0;
 FUNC_7(&VAR_15->isr_spinlock, VAR_18);

 if (VAR_16)
  FUNC_0(VAR_14, VAR_16);
 FUNC_0(VAR_14, VAR_17);

 return VAR_0;
}
