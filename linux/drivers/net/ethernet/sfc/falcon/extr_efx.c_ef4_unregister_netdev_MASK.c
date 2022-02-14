
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_nic {int net_dev; TYPE_1__* pci_dev; int name; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct ef4_nic*) ;
 struct ef4_nic* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ef4_nic *VAR_1)
{
 if (!VAR_1->net_dev)
  return;

 FUNC_0(FUNC_3(VAR_1->net_dev) != VAR_1);

 if (FUNC_2(VAR_1)) {
  FUNC_5(VAR_1->name, FUNC_4(VAR_1->pci_dev), sizeof(VAR_1->name));
  FUNC_1(&VAR_1->pci_dev->dev, &VAR_0);
  FUNC_6(VAR_1->net_dev);
 }
}
