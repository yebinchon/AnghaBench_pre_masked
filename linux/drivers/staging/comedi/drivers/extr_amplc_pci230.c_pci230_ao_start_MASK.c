
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci230_private {int ao_cmd_started; int hwver; unsigned short daccon; int isr_spinlock; int ier; scalar_t__ daqio; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ iobase; struct pci230_private* private; } ;
struct comedi_cmd {int scan_begin_src; int scan_begin_arg; } ;
struct comedi_async {int inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;



 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (unsigned short,scalar_t__) ;
 int VAR_13 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_14,
       struct comedi_subdevice *VAR_15)
{
 struct pci230_private *VAR_16 = VAR_14->private;
 struct comedi_async *VAR_17 = VAR_15->async;
 struct comedi_cmd *VAR_18 = &VAR_17->cmd;
 unsigned long VAR_19;

 VAR_16->ao_cmd_started = 1;

 if (VAR_16->hwver >= 2) {

  unsigned short VAR_20;
  bool VAR_21;


  VAR_21 = FUNC_4(VAR_14, VAR_15);
  FUNC_0(VAR_14, VAR_15);
  if (!VAR_21) {

   return;
  }

  switch (VAR_18->scan_begin_src) {
  case 128:
   VAR_20 = VAR_7;
   break;
  case 130:

   if ((VAR_18->scan_begin_arg & VAR_0) == 0) {

    VAR_20 = VAR_3;
   } else {

    VAR_20 = VAR_2;
   }
   break;
  case 129:
   VAR_20 = VAR_6;
   break;
  default:

   VAR_20 = VAR_5;
   break;
  }
  VAR_16->daccon =
      (VAR_16->daccon & ~VAR_4) | VAR_20;
  FUNC_2(VAR_16->daccon, VAR_16->daqio + VAR_9);
 }
 switch (VAR_18->scan_begin_src) {
 case 128:
  if (VAR_16->hwver < 2) {


   FUNC_5(&VAR_16->isr_spinlock, VAR_19);
   VAR_16->ier |= VAR_11;
   FUNC_1(VAR_16->ier, VAR_14->iobase + VAR_10);
   FUNC_6(&VAR_16->isr_spinlock,
            VAR_19);
  }

  FUNC_1(FUNC_3(1, VAR_1),
       VAR_14->iobase + VAR_12);
  break;
 case 129:
  VAR_17->inttrig = VAR_13;
  break;
 }
 if (VAR_16->hwver >= 2) {

  FUNC_5(&VAR_16->isr_spinlock, VAR_19);
  VAR_16->ier |= VAR_8;
  FUNC_1(VAR_16->ier, VAR_14->iobase + VAR_10);
  FUNC_6(&VAR_16->isr_spinlock, VAR_19);
 }
}
