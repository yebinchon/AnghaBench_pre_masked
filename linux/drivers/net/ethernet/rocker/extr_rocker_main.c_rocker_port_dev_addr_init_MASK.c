
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rocker_port {TYPE_1__* dev; struct rocker* rocker; } ;
struct rocker {struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct rocker_port*,int ) ;

__attribute__((used)) static void FUNC_3(struct rocker_port *VAR_0)
{
 const struct rocker *VAR_1 = VAR_0->rocker;
 const struct pci_dev *VAR_2 = VAR_1->pdev;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0,
         VAR_0->dev->dev_addr);
 if (VAR_3) {
  FUNC_0(&VAR_2->dev, "failed to get mac address, using random\n");
  FUNC_1(VAR_0->dev);
 }
}
