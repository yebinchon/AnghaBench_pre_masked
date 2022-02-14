
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int devt; } ;
struct switchtec_dev {TYPE_1__ dev; int cdev; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int *,int ) ;
 struct switchtec_dev* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct switchtec_dev*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_1)
{
 struct switchtec_dev *VAR_2 = FUNC_4(VAR_1);

 FUNC_5(VAR_1, ((void*)0));

 FUNC_1(&VAR_2->cdev, &VAR_2->dev);
 FUNC_3(&VAR_0, FUNC_0(VAR_2->dev.devt));
 FUNC_2(&VAR_2->dev, "unregistered.\n");
 FUNC_7(VAR_2);
 FUNC_6(&VAR_2->dev);
}
