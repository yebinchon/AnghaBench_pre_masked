
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci230_private {int ai_cmd_started; scalar_t__ intr_cpuid; int adccon; scalar_t__ daqio; int isr_spinlock; int ier; scalar_t__ intr_running; int ai_stop_spinlock; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; struct pci230_private* private; } ;
struct comedi_cmd {scalar_t__ convert_src; scalar_t__ scan_begin_src; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_11,
      struct comedi_subdevice *VAR_12)
{
 struct pci230_private *VAR_13 = VAR_11->private;
 unsigned long VAR_14;
 struct comedi_cmd *VAR_15;
 bool VAR_16;

 FUNC_4(&VAR_13->ai_stop_spinlock, VAR_14);
 VAR_16 = VAR_13->ai_cmd_started;
 VAR_13->ai_cmd_started = 0;
 FUNC_5(&VAR_13->ai_stop_spinlock, VAR_14);
 if (!VAR_16)
  return;
 VAR_15 = &VAR_12->async->cmd;
 if (VAR_15->convert_src == VAR_10) {

  FUNC_2(VAR_11, 2);
 }
 if (VAR_15->scan_begin_src != VAR_9) {

  FUNC_2(VAR_11, 0);
 }
 FUNC_4(&VAR_13->isr_spinlock, VAR_14);




 VAR_13->ier &= ~VAR_6;
 while (VAR_13->intr_running && VAR_13->intr_cpuid != VAR_8) {
  FUNC_5(&VAR_13->isr_spinlock, VAR_14);
  FUNC_4(&VAR_13->isr_spinlock, VAR_14);
 }
 FUNC_0(VAR_13->ier, VAR_11->iobase + VAR_7);
 FUNC_5(&VAR_13->isr_spinlock, VAR_14);




 VAR_13->adccon =
     (VAR_13->adccon & (VAR_4 | VAR_3)) |
     VAR_5;
 FUNC_1(VAR_13->adccon | VAR_2,
      VAR_13->daqio + VAR_1);

 FUNC_3(VAR_11, VAR_0);
}
