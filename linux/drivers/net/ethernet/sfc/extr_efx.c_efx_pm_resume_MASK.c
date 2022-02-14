
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct efx_nic {int filter_sem; TYPE_1__* type; int pci_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* reset ) (struct efx_nic*,int ) ;int (* init ) (struct efx_nic*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct efx_nic* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct efx_nic*,int ) ;
 int FUNC_8 (struct efx_nic*) ;
 struct pci_dev* FUNC_9 (struct device*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_9(VAR_2);
 struct efx_nic *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_6(VAR_3, VAR_0);
 if (VAR_5)
  return VAR_5;
 FUNC_4(VAR_3);
 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5)
  return VAR_5;
 FUNC_5(VAR_4->pci_dev);
 VAR_5 = VAR_4->type->reset(VAR_4, VAR_1);
 if (VAR_5)
  return VAR_5;
 FUNC_0(&VAR_4->filter_sem);
 VAR_5 = VAR_4->type->init(VAR_4);
 FUNC_10(&VAR_4->filter_sem);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_1(VAR_2);
 return VAR_5;
}
