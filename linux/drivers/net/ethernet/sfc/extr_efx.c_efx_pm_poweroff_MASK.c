
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct efx_nic {scalar_t__ reset_pending; TYPE_1__* type; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* fini ) (struct efx_nic*) ;} ;


 int VAR_0 ;
 struct efx_nic* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct efx_nic*) ;
 struct pci_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_4(VAR_1);
 struct efx_nic *VAR_3 = FUNC_0(VAR_2);

 VAR_3->type->fini(VAR_3);

 VAR_3->reset_pending = 0;

 FUNC_1(VAR_2);
 return FUNC_2(VAR_2, VAR_0);
}
