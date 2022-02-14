
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jr3_pci_subdev_private {int serial_no; } ;
struct comedi_subdevice {int index; struct jr3_pci_subdev_private* private; } ;
struct comedi_device {int n_subdevices; int class_dev; struct comedi_subdevice* subdevices; } ;


 int FUNC_0 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0)
{
 struct jr3_pci_subdev_private *VAR_1;
 struct comedi_subdevice *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->n_subdevices; VAR_3++) {
  VAR_2 = &VAR_0->subdevices[VAR_3];
  VAR_1 = VAR_2->private;
  FUNC_0(VAR_0->class_dev, "serial[%d]: %d\n", VAR_2->index,
   VAR_1->serial_no);
 }
 return 0;
}
