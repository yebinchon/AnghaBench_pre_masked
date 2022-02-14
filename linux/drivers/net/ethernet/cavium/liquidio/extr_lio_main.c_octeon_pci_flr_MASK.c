
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct octeon_device {TYPE_1__* pci_dev; int pf_num; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct octeon_device *VAR_2)
{
 int VAR_3;

 FUNC_5(VAR_2->pci_dev);

 FUNC_2(VAR_2->pci_dev);


 FUNC_6(VAR_2->pci_dev, VAR_0,
         VAR_1);

 VAR_3 = FUNC_0(VAR_2->pci_dev);

 if (VAR_3 != 0)
  FUNC_1(&VAR_2->pci_dev->dev, "Error %d resetting PCI function %d\n",
   VAR_3, VAR_2->pf_num);

 FUNC_3(VAR_2->pci_dev);

 FUNC_4(VAR_2->pci_dev);
}
