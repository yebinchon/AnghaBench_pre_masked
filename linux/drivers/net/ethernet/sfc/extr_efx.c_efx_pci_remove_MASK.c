
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct efx_nic {int net_dev; TYPE_1__* type; int state; } ;
struct TYPE_2__ {int (* sriov_fini ) (struct efx_nic*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (struct efx_nic*) ;
 int FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_10 (struct pci_dev*) ;
 struct efx_nic* FUNC_11 (struct pci_dev*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct efx_nic*) ;

__attribute__((used)) static void FUNC_15(struct pci_dev *VAR_2)
{
 struct efx_nic *VAR_3;

 VAR_3 = FUNC_11(VAR_2);
 if (!VAR_3)
  return;


 FUNC_12();
 FUNC_2(VAR_3);
 FUNC_0(VAR_3->net_dev);
 FUNC_1(VAR_3);
 VAR_3->state = VAR_0;
 FUNC_13();

 if (VAR_3->type->sriov_fini)
  VAR_3->type->sriov_fini(VAR_3);

 FUNC_7(VAR_3);

 FUNC_5(VAR_3);

 FUNC_6(VAR_3);

 FUNC_3(VAR_3);
 FUNC_9(VAR_3, VAR_1, VAR_3->net_dev, "shutdown successful\n");

 FUNC_4(VAR_3);
 FUNC_8(VAR_3->net_dev);

 FUNC_10(VAR_2);
}
