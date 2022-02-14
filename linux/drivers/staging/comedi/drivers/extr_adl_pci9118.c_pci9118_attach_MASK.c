
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct comedi_device {int dummy; } ;
struct comedi_devconfig {int* options; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int *) ;
 int FUNC_1 (struct comedi_device*,int,int) ;
 struct pci_dev* FUNC_2 (struct comedi_device*,struct comedi_devconfig*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
     struct comedi_devconfig *VAR_2)
{
 struct pci_dev *VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = VAR_2->options[2];
 VAR_5 = VAR_2->options[4];

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_3)
  return -VAR_0;
 FUNC_0(VAR_1, &VAR_3->dev);

 return FUNC_1(VAR_1, VAR_4, VAR_5);
}
