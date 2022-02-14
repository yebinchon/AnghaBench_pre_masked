
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {size_t chip_index; size_t counter_index; } ;
struct ni_660x_private {struct mite_ring*** ring; } ;
struct mite_ring {int dummy; } ;
struct comedi_subdevice {struct ni_gpct* private; } ;
struct comedi_device {struct ni_660x_private* private; } ;


 int FUNC_0 (struct mite_ring*,struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1)
{
 struct ni_660x_private *VAR_2 = VAR_0->private;
 struct ni_gpct *VAR_3 = VAR_1->private;
 struct mite_ring *VAR_4;
 int VAR_5;

 VAR_4 = VAR_2->ring[VAR_3->chip_index][VAR_3->counter_index];
 VAR_5 = FUNC_0(VAR_4, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}
