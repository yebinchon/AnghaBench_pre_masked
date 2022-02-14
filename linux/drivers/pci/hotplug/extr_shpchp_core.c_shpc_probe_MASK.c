
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int shpc_managed; } ;
struct controller {TYPE_1__* hpc_ops; int slot_list; } ;
struct TYPE_2__ {int (* release_ctlr ) (struct controller*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct controller*) ;
 int FUNC_3 (struct controller*,char*) ;
 int FUNC_4 (struct controller*,char*) ;
 int FUNC_5 (struct controller*) ;
 int FUNC_6 (struct controller*) ;
 struct controller* FUNC_7 (int,int ) ;
 int FUNC_8 (struct pci_dev*,struct controller*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct controller*,struct pci_dev*) ;
 int FUNC_11 (struct controller*) ;
 int FUNC_12 (struct controller*) ;

__attribute__((used)) static int FUNC_13(struct pci_dev *VAR_2, const struct pci_device_id *VAR_3)
{
 int VAR_4;
 struct controller *VAR_5;

 if (!FUNC_9(VAR_2))
  return -VAR_0;

 if (FUNC_1(VAR_2))
  return -VAR_0;

 VAR_5 = FUNC_7(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  goto err_out_none;

 FUNC_0(&VAR_5->slot_list);

 VAR_4 = FUNC_10(VAR_5, VAR_2);
 if (VAR_4) {
  FUNC_3(VAR_5, "Controller initialization failed\n");
  goto err_out_free_ctrl;
 }

 FUNC_8(VAR_2, VAR_5);


 VAR_4 = FUNC_5(VAR_5);
 if (VAR_4) {
  FUNC_4(VAR_5, "Slot initialization failed\n");
  goto err_out_release_ctlr;
 }

 VAR_4 = FUNC_11(VAR_5);
 if (VAR_4)
  goto err_cleanup_slots;

 VAR_2->shpc_managed = 1;
 return 0;

err_cleanup_slots:
 FUNC_2(VAR_5);
err_out_release_ctlr:
 VAR_5->hpc_ops->release_ctlr(VAR_5);
err_out_free_ctrl:
 FUNC_6(VAR_5);
err_out_none:
 return -VAR_0;
}
