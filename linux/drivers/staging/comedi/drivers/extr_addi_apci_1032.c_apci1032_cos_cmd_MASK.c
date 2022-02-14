
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; int class_dev; struct apci1032_private* private; } ;
struct apci1032_private {int ctrl; int mode2; int mode1; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
       struct comedi_subdevice *VAR_5)
{
 struct apci1032_private *VAR_6 = VAR_4->private;

 if (!VAR_6->ctrl) {
  FUNC_0(VAR_4->class_dev,
    "Interrupts disabled due to mode configuration!\n");
  return -VAR_3;
 }

 FUNC_1(VAR_6->mode1, VAR_4->iobase + VAR_1);
 FUNC_1(VAR_6->mode2, VAR_4->iobase + VAR_2);
 FUNC_1(VAR_6->ctrl, VAR_4->iobase + VAR_0);

 return 0;
}
