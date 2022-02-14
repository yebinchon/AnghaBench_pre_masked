
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct nvme_ctrl {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,int,char*,char*) ;
 TYPE_1__* FUNC_2 (struct nvme_ctrl*) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nvme_ctrl *VAR_0, char *VAR_1, int VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_3(FUNC_2(VAR_0)->dev);

 return FUNC_1(VAR_1, VAR_2, "%s", FUNC_0(&VAR_3->dev));
}
