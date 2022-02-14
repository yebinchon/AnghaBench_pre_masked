
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct jr3_pci_subdev_private {scalar_t__ state; TYPE_1__* sensor; } ;
struct comedi_subdevice {struct jr3_pci_subdev_private* private; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int errors; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_6,
    struct comedi_subdevice *VAR_7,
    struct comedi_insn *VAR_8,
    unsigned int *VAR_9)
{
 struct jr3_pci_subdev_private *VAR_10 = VAR_7->private;
 unsigned int VAR_11 = FUNC_0(VAR_8->chanspec);
 u16 VAR_12;
 int VAR_13;

 VAR_12 = FUNC_1(&VAR_10->sensor->errors);
 if (VAR_10->state != VAR_2 ||
     (VAR_12 & (VAR_4 | VAR_5 | VAR_1))) {

  if (VAR_10->state == VAR_2) {

   VAR_10->state = VAR_3;
  }
  return -VAR_0;
 }

 for (VAR_13 = 0; VAR_13 < VAR_8->n; VAR_13++)
  VAR_9[VAR_13] = FUNC_2(VAR_6, VAR_7, VAR_11);

 return VAR_8->n;
}
