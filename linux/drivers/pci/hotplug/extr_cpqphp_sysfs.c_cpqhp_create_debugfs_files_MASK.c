
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct controller {TYPE_1__* pci_dev; int dentry; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct controller*,int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;

void FUNC_2(struct controller *VAR_3)
{
 VAR_3->dentry = FUNC_0(FUNC_1(&VAR_3->pci_dev->dev),
        VAR_0, VAR_2, VAR_3, &VAR_1);
}
