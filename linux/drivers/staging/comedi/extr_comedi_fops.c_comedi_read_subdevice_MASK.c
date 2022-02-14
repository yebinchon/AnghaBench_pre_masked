
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; int mutex; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct comedi_subdevice* FUNC_0 (struct comedi_device const*,unsigned int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct comedi_subdevice *
FUNC_2(const struct comedi_device *VAR_2, unsigned int VAR_3)
{
 struct comedi_subdevice *VAR_4;

 FUNC_1(&VAR_2->mutex);
 if (VAR_3 >= VAR_0) {
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  if (!VAR_4 || (VAR_4->subdev_flags & VAR_1))
   return VAR_4;
 }
 return VAR_2->read_subdev;
}
