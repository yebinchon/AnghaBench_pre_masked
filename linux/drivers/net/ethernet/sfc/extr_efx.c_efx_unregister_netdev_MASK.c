
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {int net_dev; TYPE_1__* pci_dev; int name; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct efx_nic*) ;
 struct efx_nic* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct efx_nic *VAR_2)
{
 if (!VAR_2->net_dev)
  return;

 FUNC_0(FUNC_3(VAR_2->net_dev) != VAR_2);

 if (FUNC_2(VAR_2)) {
  FUNC_5(VAR_2->name, FUNC_4(VAR_2->pci_dev), sizeof(VAR_2->name));



  FUNC_1(&VAR_2->pci_dev->dev, &VAR_1);
  FUNC_6(VAR_2->net_dev);
 }
}
