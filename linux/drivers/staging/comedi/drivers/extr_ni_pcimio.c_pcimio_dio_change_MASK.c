
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int cdo_mite_ring; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct ni_private* private; } ;


 int FUNC_0 (int ,struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0,
        struct comedi_subdevice *VAR_1)
{
 struct ni_private *VAR_2 = VAR_0->private;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->cdo_mite_ring, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
