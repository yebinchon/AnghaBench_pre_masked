
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci230_private {int ai_cmd_started; unsigned char ier; unsigned short adccon; scalar_t__ daqio; int isr_spinlock; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ iobase; struct pci230_private* private; } ;
struct comedi_cmd {int convert_src; int convert_arg; int scan_begin_src; } ;
struct comedi_async {int inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned char VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;

 int VAR_16 ;


 int FUNC_0 (unsigned char,scalar_t__) ;
 int FUNC_1 (unsigned short,scalar_t__) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned char FUNC_3 (int,int ) ;
 int FUNC_4 (struct comedi_device*,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_19,
       struct comedi_subdevice *VAR_20)
{
 struct pci230_private *VAR_21 = VAR_19->private;
 unsigned long VAR_22;
 unsigned short VAR_23;
 struct comedi_async *VAR_24 = VAR_20->async;
 struct comedi_cmd *VAR_25 = &VAR_24->cmd;

 VAR_21->ai_cmd_started = 1;


 FUNC_5(&VAR_21->isr_spinlock, VAR_22);
 VAR_21->ier |= VAR_12;
 FUNC_0(VAR_21->ier, VAR_19->iobase + VAR_13);
 FUNC_6(&VAR_21->isr_spinlock, VAR_22);





 switch (VAR_25->convert_src) {
 default:
  VAR_23 = VAR_10;
  break;
 case 128:

  VAR_23 = VAR_11;
  break;
 case 130:
  if (VAR_25->convert_arg & VAR_0) {
   if ((VAR_25->convert_arg & VAR_1) == 0) {

    VAR_23 = VAR_8;
   } else {

    VAR_23 = VAR_7;
   }
  } else {

   if (VAR_25->convert_arg) {

    VAR_23 = VAR_8;
   } else {

    VAR_23 = VAR_7;
   }
  }
  break;
 case 129:




  VAR_23 = VAR_11;
  break;
 }
 VAR_21->adccon = (VAR_21->adccon & ~VAR_9) | VAR_23;
 FUNC_1(VAR_21->adccon, VAR_21->daqio + VAR_6);
 if (VAR_25->convert_src == 129)
  VAR_24->inttrig = VAR_17;





 FUNC_2(VAR_19, VAR_20);
 if (VAR_25->convert_src == 128) {

  unsigned char VAR_26;

  if (VAR_25->scan_begin_src != VAR_16) {




   VAR_26 = FUNC_3(2, VAR_3);
  } else {




   VAR_26 = FUNC_3(2, VAR_4);
  }
  FUNC_0(VAR_26, VAR_19->iobase + VAR_14);
  if (VAR_25->scan_begin_src != VAR_16) {

   switch (VAR_25->scan_begin_src) {
   default:
    VAR_26 = FUNC_3(0, VAR_4);
    break;
   case 130:
    VAR_26 = FUNC_3(0, VAR_2);
    break;
   case 128:




    VAR_26 = FUNC_3(0, VAR_3);
    break;
   case 129:




    VAR_26 = FUNC_3(0, VAR_4);
    break;
   }
   FUNC_0(VAR_26, VAR_19->iobase + VAR_14);
   switch (VAR_25->scan_begin_src) {
   case 128:




    VAR_26 = FUNC_3(1, VAR_4);
    FUNC_0(VAR_26, VAR_19->iobase + VAR_14);
    break;
   case 129:
    VAR_24->inttrig = VAR_18;
    break;
   }
  }
 } else if (VAR_25->convert_src != 129) {

  FUNC_4(VAR_19, VAR_15, VAR_5);
 }
}
