
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci230_private {int hwver; int ao_stop_spinlock; scalar_t__ daqio; int ao_cmd_started; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct pci230_private* private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_2,
     struct comedi_subdevice *VAR_3,
     unsigned int VAR_4)
{
 struct pci230_private *VAR_5 = VAR_2->private;
 unsigned long VAR_6;

 if (VAR_4)
  return -VAR_0;

 FUNC_3(&VAR_5->ao_stop_spinlock, VAR_6);
 if (!VAR_5->ao_cmd_started) {
  FUNC_4(&VAR_5->ao_stop_spinlock, VAR_6);
  return 1;
 }

 if (VAR_5->hwver < 2) {

  FUNC_4(&VAR_5->ao_stop_spinlock, VAR_6);
  FUNC_2(VAR_2, VAR_3);
  FUNC_0(VAR_2, VAR_3);
 } else {


  FUNC_1(VAR_5->daqio + VAR_1);
  FUNC_4(&VAR_5->ao_stop_spinlock, VAR_6);
 }


 FUNC_5(8);
 return 1;
}
