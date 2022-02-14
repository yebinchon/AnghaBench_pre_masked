
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int (* cancel ) (struct comedi_device*,struct comedi_subdevice*) ;} ;
struct comedi_device {int mutex; } ;


 scalar_t__ FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_0, struct comedi_subdevice *VAR_1)
{
 int VAR_2 = 0;

 FUNC_2(&VAR_0->mutex);
 if (FUNC_0(VAR_1) && VAR_1->cancel)
  VAR_2 = VAR_1->cancel(VAR_0, VAR_1);

 FUNC_1(VAR_0, VAR_1);

 return VAR_2;
}
