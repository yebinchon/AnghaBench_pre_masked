
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxfast_private {int mut; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct usbduxfast_private* private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct comedi_device*,int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0,
    struct comedi_subdevice *VAR_1)
{
 struct usbduxfast_private *VAR_2 = VAR_0->private;
 int VAR_3;

 FUNC_0(&VAR_2->mut);
 VAR_3 = FUNC_2(VAR_0, 1);
 FUNC_1(&VAR_2->mut);

 return VAR_3;
}
