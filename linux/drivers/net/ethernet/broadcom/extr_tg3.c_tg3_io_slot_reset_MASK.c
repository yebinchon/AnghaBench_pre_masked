
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int dummy; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ pci_ers_result_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,char*) ;
 struct tg3* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct tg3*) ;
 int FUNC_12 (struct tg3*) ;

__attribute__((used)) static pci_ers_result_t FUNC_13(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_5(VAR_2);
 struct tg3 *VAR_4 = FUNC_2(VAR_3);
 pci_ers_result_t VAR_5 = VAR_0;
 int VAR_6;

 FUNC_9();

 if (FUNC_4(VAR_2)) {
  FUNC_1(&VAR_2->dev,
   "Cannot re-enable PCI device after reset.\n");
  goto done;
 }

 FUNC_8(VAR_2);
 FUNC_6(VAR_2);
 FUNC_7(VAR_2);

 if (!VAR_3 || !FUNC_3(VAR_3)) {
  VAR_5 = VAR_1;
  goto done;
 }

 VAR_6 = FUNC_12(VAR_4);
 if (VAR_6)
  goto done;

 VAR_5 = VAR_1;

done:
 if (VAR_5 != VAR_1 && VAR_3 && FUNC_3(VAR_3)) {
  FUNC_11(VAR_4);
  FUNC_0(VAR_3);
 }
 FUNC_10();

 return VAR_5;
}
