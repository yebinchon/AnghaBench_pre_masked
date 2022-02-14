
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct apci2032_int_private* private; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct apci2032_int_private {int active; scalar_t__ enabled_isns; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_1,
         struct comedi_subdevice *VAR_2)
{
 struct apci2032_int_private *VAR_3 = VAR_2->private;

 VAR_3->active = 0;
 VAR_3->enabled_isns = 0;
 FUNC_0(0x0, VAR_1->iobase + VAR_0);
}
