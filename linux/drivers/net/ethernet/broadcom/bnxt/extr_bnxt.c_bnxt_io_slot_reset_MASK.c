
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct bnxt {int dev; } ;
typedef scalar_t__ pci_ers_result_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,char*) ;
 struct bnxt* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct pci_dev*) ;
 struct net_device* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

__attribute__((used)) static pci_ers_result_t FUNC_13(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_9(VAR_2);
 struct bnxt *VAR_4 = FUNC_6(VAR_3);
 int VAR_5 = 0;
 pci_ers_result_t VAR_6 = VAR_0;

 FUNC_5(VAR_4->dev, "PCI Slot Reset\n");

 FUNC_11();

 if (FUNC_8(VAR_2)) {
  FUNC_4(&VAR_2->dev,
   "Cannot re-enable PCI device after reset.\n");
 } else {
  FUNC_10(VAR_2);

  VAR_5 = FUNC_0(VAR_4);
  if (!VAR_5 && FUNC_7(VAR_3))
   VAR_5 = FUNC_1(VAR_3);

  if (!VAR_5) {
   VAR_6 = VAR_1;
   FUNC_2(VAR_4);
  }
 }

 if (VAR_6 != VAR_1 && FUNC_7(VAR_3))
  FUNC_3(VAR_3);

 FUNC_12();

 return VAR_1;
}
