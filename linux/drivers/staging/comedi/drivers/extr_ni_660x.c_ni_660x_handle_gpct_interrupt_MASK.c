
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int dummy; } ;
struct comedi_subdevice {struct ni_gpct* private; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (struct ni_gpct*,struct comedi_subdevice*) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0,
       struct comedi_subdevice *VAR_1)
{
 struct ni_gpct *VAR_2 = VAR_1->private;

 FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_0, VAR_1);
}
