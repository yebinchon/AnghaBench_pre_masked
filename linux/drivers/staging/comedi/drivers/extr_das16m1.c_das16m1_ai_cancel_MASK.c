
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das16m1_private {int intr_ctrl; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct das16m1_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_3,
        struct comedi_subdevice *VAR_4)
{
 struct das16m1_private *VAR_5 = VAR_3->private;


 VAR_5->intr_ctrl &= ~(VAR_0 |
    VAR_1);
 FUNC_0(VAR_5->intr_ctrl, VAR_3->iobase + VAR_2);

 return 0;
}
