
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct jr3_pci_subdev_private {scalar_t__ state; TYPE_2__* sensor; } ;
struct comedi_subdevice {struct jr3_pci_subdev_private* private; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int serial_no; int model_no; TYPE_1__* filter; } ;
struct TYPE_3__ {int v2; int v1; int mz; int my; int mx; int fz; int fy; int fx; } ;


 unsigned int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned int FUNC_2(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2,
      unsigned int VAR_3)
{
 struct jr3_pci_subdev_private *VAR_4 = VAR_2->private;
 unsigned int VAR_5 = 0;

 if (VAR_4->state != VAR_0)
  return 0;

 if (VAR_3 < 56) {
  unsigned int VAR_6 = VAR_3 % 8;
  unsigned int VAR_7 = VAR_3 / 8;

  switch (VAR_6) {
  case 0:
   VAR_5 = FUNC_0(&VAR_4->sensor->filter[VAR_7].fx);
   break;
  case 1:
   VAR_5 = FUNC_0(&VAR_4->sensor->filter[VAR_7].fy);
   break;
  case 2:
   VAR_5 = FUNC_0(&VAR_4->sensor->filter[VAR_7].fz);
   break;
  case 3:
   VAR_5 = FUNC_0(&VAR_4->sensor->filter[VAR_7].mx);
   break;
  case 4:
   VAR_5 = FUNC_0(&VAR_4->sensor->filter[VAR_7].my);
   break;
  case 5:
   VAR_5 = FUNC_0(&VAR_4->sensor->filter[VAR_7].mz);
   break;
  case 6:
   VAR_5 = FUNC_0(&VAR_4->sensor->filter[VAR_7].v1);
   break;
  case 7:
   VAR_5 = FUNC_0(&VAR_4->sensor->filter[VAR_7].v2);
   break;
  }
  VAR_5 += 0x4000;
 } else if (VAR_3 == 56) {
  VAR_5 = FUNC_1(&VAR_4->sensor->model_no);
 } else if (VAR_3 == 57) {
  VAR_5 = FUNC_1(&VAR_4->sensor->serial_no);
 }

 return VAR_5;
}
