
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device_node* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (char*) ;

int FUNC_6(struct pci_dev *VAR_2)
{
 struct device_node *VAR_3;
 int VAR_4 = 0;

 if (!(VAR_3 = FUNC_4(VAR_2))) {
  FUNC_5("cxl: np = NULL\n");
  return -VAR_1;
 }
 FUNC_1(VAR_3);
 while (VAR_3) {
  VAR_3 = FUNC_0(VAR_3);
  if (!FUNC_2(VAR_3, "pciex"))
   break;
  VAR_4++;
 }
 FUNC_3(VAR_3);
 return (VAR_4 > VAR_0);
}
