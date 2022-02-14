
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct hnae3_ae_dev {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* flr_prepare ) (struct hnae3_ae_dev*) ;} ;


 int FUNC_0 (int *,char*) ;
 struct hnae3_ae_dev* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct hnae3_ae_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct hnae3_ae_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_0->dev, "hns3 flr prepare\n");
 if (VAR_1 && VAR_1->ops && VAR_1->ops->flr_prepare)
  VAR_1->ops->flr_prepare(VAR_1);
}
