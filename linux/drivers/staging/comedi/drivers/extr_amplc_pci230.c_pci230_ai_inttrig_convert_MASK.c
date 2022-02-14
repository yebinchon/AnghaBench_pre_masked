
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci230_private {int adccon; scalar_t__ hwver; int ai_stop_spinlock; int ai_cmd_started; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int pacer; struct pci230_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_5,
         struct comedi_subdevice *VAR_6,
         unsigned int VAR_7)
{
 struct pci230_private *VAR_8 = VAR_5->private;
 unsigned long VAR_9;
 unsigned int VAR_10;

 if (VAR_7)
  return -VAR_0;

 FUNC_1(&VAR_8->ai_stop_spinlock, VAR_9);
 if (!VAR_8->ai_cmd_started) {
  FUNC_2(&VAR_8->ai_stop_spinlock, VAR_9);
  return 1;
 }




 FUNC_0(VAR_5->pacer, 2, VAR_1);
 FUNC_0(VAR_5->pacer, 2, VAR_2);







 if ((VAR_8->adccon & VAR_4) == VAR_3 &&
     VAR_8->hwver == 0) {

  VAR_10 = 8;
 } else {

  VAR_10 = 4;
 }
 FUNC_2(&VAR_8->ai_stop_spinlock, VAR_9);
 FUNC_3(VAR_10);
 return 1;
}
