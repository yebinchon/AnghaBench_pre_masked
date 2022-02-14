
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct enic {int vdev; int pp; int priv_flags; int change_mtu_work; int reset; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct enic*) ;
 int FUNC_2 (struct enic*) ;
 scalar_t__ FUNC_3 (struct enic*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 struct enic* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 struct net_device* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_9(VAR_1);

 if (VAR_2) {
  struct enic *VAR_3 = FUNC_6(VAR_2);

  FUNC_0(&VAR_3->reset);
  FUNC_0(&VAR_3->change_mtu_work);
  FUNC_11(VAR_2);
  FUNC_1(VAR_3);
  FUNC_12(VAR_3->vdev);






  FUNC_5(VAR_3->pp);
  FUNC_13(VAR_3->vdev);
  FUNC_2(VAR_3);
  FUNC_10(VAR_1);
  FUNC_7(VAR_1);
  FUNC_4(VAR_2);
 }
}
