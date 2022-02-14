
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ef4_nic {TYPE_1__* type; int pci_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* reset ) (struct ef4_nic*,int ) ;int (* init ) (struct ef4_nic*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct ef4_nic* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct ef4_nic*,int ) ;
 int FUNC_7 (struct ef4_nic*) ;
 struct pci_dev* FUNC_8 (struct device*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_8(VAR_2);
 struct ef4_nic *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_5(VAR_3, VAR_0);
 if (VAR_5)
  return VAR_5;
 FUNC_3(VAR_3);
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5)
  return VAR_5;
 FUNC_4(VAR_4->pci_dev);
 VAR_5 = VAR_4->type->reset(VAR_4, VAR_1);
 if (VAR_5)
  return VAR_5;
 VAR_5 = VAR_4->type->init(VAR_4);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_0(VAR_2);
 return VAR_5;
}
