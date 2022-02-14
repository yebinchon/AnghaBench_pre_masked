
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt282x_private {int adcsr; int supcsr; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; struct dt282x_private* private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3,
       struct comedi_subdevice *VAR_4)
{
 struct dt282x_private *VAR_5 = VAR_3->private;

 FUNC_0(VAR_3);

 VAR_5->adcsr = 0;
 FUNC_1(VAR_5->adcsr, VAR_3->iobase + VAR_0);

 VAR_5->supcsr = 0;
 FUNC_1(VAR_5->supcsr | VAR_1,
      VAR_3->iobase + VAR_2);

 return 0;
}
