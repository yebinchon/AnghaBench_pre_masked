
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci230_private {int ai_stop_spinlock; scalar_t__ ai_cmd_started; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct pci230_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned char,scalar_t__) ;
 unsigned char FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4,
     struct comedi_subdevice *VAR_5,
     unsigned int VAR_6)
{
 struct pci230_private *VAR_7 = VAR_4->private;
 unsigned long VAR_8;
 unsigned char VAR_9;

 if (VAR_6)
  return -VAR_0;

 FUNC_2(&VAR_7->ai_stop_spinlock, VAR_8);
 if (VAR_7->ai_cmd_started) {

  VAR_9 = FUNC_1(0, VAR_1);
  FUNC_0(VAR_9, VAR_4->iobase + VAR_3);
  VAR_9 = FUNC_1(0, VAR_2);
  FUNC_0(VAR_9, VAR_4->iobase + VAR_3);
 }
 FUNC_3(&VAR_7->ai_stop_spinlock, VAR_8);

 return 1;
}
