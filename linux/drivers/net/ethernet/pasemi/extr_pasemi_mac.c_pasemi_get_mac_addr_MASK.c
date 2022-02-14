
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct pci_dev {int dev; } ;
struct pasemi_mac {int mac_addr; struct pci_dev* pdev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int const*,int const*) ;
 int FUNC_3 (int ,int const*,int) ;
 int const* FUNC_4 (struct device_node*,char*,int*) ;
 struct device_node* FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_6(struct pasemi_mac *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;
 struct device_node *VAR_5 = FUNC_5(VAR_4);
 int VAR_6;
 const u8 *VAR_7;
 u8 VAR_8[VAR_2];

 if (!VAR_5) {
  FUNC_0(&VAR_4->dev,
     "No device node for mac, not configuring\n");
  return -VAR_1;
 }

 VAR_7 = FUNC_4(VAR_5, "local-mac-address", &VAR_6);

 if (VAR_7 && VAR_6 == VAR_2) {
  FUNC_3(VAR_3->mac_addr, VAR_7, VAR_2);
  return 0;
 }





 if (VAR_7 == ((void*)0))
  VAR_7 = FUNC_4(VAR_5, "mac-address", ((void*)0));

 if (VAR_7 == ((void*)0)) {
  FUNC_1(&VAR_4->dev,
    "no mac address in device tree, not configuring\n");
  return -VAR_1;
 }

 if (!FUNC_2(VAR_7, VAR_8)) {
  FUNC_1(&VAR_4->dev,
    "can't parse mac address, not configuring\n");
  return -VAR_0;
 }

 FUNC_3(VAR_3->mac_addr, VAR_8, VAR_2);

 return 0;
}
