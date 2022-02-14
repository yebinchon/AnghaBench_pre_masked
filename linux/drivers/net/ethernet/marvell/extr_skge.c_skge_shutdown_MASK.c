
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {scalar_t__ wol; } ;
struct skge_hw {int ports; struct net_device** dev; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct skge_port* FUNC_1 (struct net_device*) ;
 struct skge_hw* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct skge_port*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 struct skge_hw *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 if (!VAR_2)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->ports; VAR_3++) {
  struct net_device *VAR_4 = VAR_2->dev[VAR_3];
  struct skge_port *VAR_5 = FUNC_1(VAR_4);

  if (VAR_5->wol)
   FUNC_5(VAR_5);
 }

 FUNC_4(VAR_1, FUNC_0(&VAR_1->dev));
 FUNC_3(VAR_1, VAR_0);
}
