
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct bnx2 {int flags; } ;
typedef scalar_t__ pci_ers_result_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bnx2*,int) ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,char*) ;
 struct bnx2* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct pci_dev*) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

__attribute__((used)) static pci_ers_result_t FUNC_13(struct pci_dev *VAR_3)
{
 struct net_device *VAR_4 = FUNC_7(VAR_3);
 struct bnx2 *VAR_5 = FUNC_4(VAR_4);
 pci_ers_result_t VAR_6 = VAR_1;
 int VAR_7 = 0;

 FUNC_11();
 if (FUNC_6(VAR_3)) {
  FUNC_3(&VAR_3->dev,
   "Cannot re-enable PCI device after reset\n");
 } else {
  FUNC_10(VAR_3);
  FUNC_8(VAR_3);
  FUNC_9(VAR_3);

  if (FUNC_5(VAR_4))
   VAR_7 = FUNC_0(VAR_5, 1);

  if (!VAR_7)
   VAR_6 = VAR_2;
 }

 if (VAR_6 != VAR_2 && FUNC_5(VAR_4)) {
  FUNC_1(VAR_5);
  FUNC_2(VAR_4);
 }
 FUNC_12();

 if (!(VAR_5->flags & VAR_0))
  return VAR_6;

 return VAR_6;
}
