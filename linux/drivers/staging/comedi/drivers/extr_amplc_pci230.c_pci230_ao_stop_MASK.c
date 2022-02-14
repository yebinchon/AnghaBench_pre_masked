
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci230_private {int ao_cmd_started; int hwver; unsigned char ier; scalar_t__ intr_cpuid; int daccon; scalar_t__ daqio; int isr_spinlock; scalar_t__ intr_running; int ao_stop_spinlock; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; struct pci230_private* private; } ;
struct comedi_cmd {scalar_t__ scan_begin_src; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned char VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (unsigned char,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_10,
      struct comedi_subdevice *VAR_11)
{
 struct pci230_private *VAR_12 = VAR_10->private;
 unsigned long VAR_13;
 unsigned char VAR_14;
 bool VAR_15;
 struct comedi_cmd *VAR_16;

 FUNC_4(&VAR_12->ao_stop_spinlock, VAR_13);
 VAR_15 = VAR_12->ao_cmd_started;
 VAR_12->ao_cmd_started = 0;
 FUNC_5(&VAR_12->ao_stop_spinlock, VAR_13);
 if (!VAR_15)
  return;
 VAR_16 = &VAR_11->async->cmd;
 if (VAR_16->scan_begin_src == VAR_9) {

  FUNC_2(VAR_10, 1);
 }

 if (VAR_12->hwver < 2) {

  VAR_14 = VAR_7;
 } else {

  VAR_14 = VAR_3;
 }




 FUNC_4(&VAR_12->isr_spinlock, VAR_13);
 VAR_12->ier &= ~VAR_14;
 while (VAR_12->intr_running && VAR_12->intr_cpuid != VAR_8) {
  FUNC_5(&VAR_12->isr_spinlock, VAR_13);
  FUNC_4(&VAR_12->isr_spinlock, VAR_13);
 }
 FUNC_0(VAR_12->ier, VAR_10->iobase + VAR_6);
 FUNC_5(&VAR_12->isr_spinlock, VAR_13);
 if (VAR_12->hwver >= 2) {




  VAR_12->daccon &= VAR_5;
  FUNC_1(VAR_12->daccon | VAR_1 |
       VAR_2,
       VAR_12->daqio + VAR_4);
 }

 FUNC_3(VAR_10, VAR_0);
}
