
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct comedi_device {int class_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned char,int) ;
 int FUNC_1 (struct pci_dev*,int ,unsigned char*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_1,
      struct pci_dev *VAR_2)
{
 unsigned char VAR_3;

 FUNC_1(VAR_2, VAR_0, &VAR_3);
 if (VAR_3 < 32) {
  FUNC_0(VAR_1->class_dev,
    "PCI latency changed from %d to %d\n",
    VAR_3, 32);
  FUNC_2(VAR_2, VAR_0, 32);
 }
}
