
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct comedi_device {int ioenabled; int board_name; } ;


 int VAR_0 ;
 struct pci_dev* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ) ;

int FUNC_4(struct comedi_device *VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_2, VAR_1->board_name);
 if (VAR_3 < 0)
  FUNC_1(VAR_2);
 else
  VAR_1->ioenabled = 1;

 return VAR_3;
}
