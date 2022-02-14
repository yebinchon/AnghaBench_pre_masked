
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct net_device* netdev; } ;
typedef TYPE_1__ MPT_ADAPTER ;


 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void
FUNC_3(struct pci_dev *VAR_0)
{
 MPT_ADAPTER *VAR_1 = FUNC_1(VAR_0);
 struct net_device *VAR_2 = VAR_1->netdev;

 if(VAR_2 != ((void*)0)) {
  FUNC_2(VAR_2);
  FUNC_0(VAR_2);
 }
}
