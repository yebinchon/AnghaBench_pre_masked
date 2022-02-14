
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct i40e_pf {int flags; int state; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i40e_pf*,int ) ;
 int FUNC_3 (struct i40e_pf*) ;
 int FUNC_4 (struct pci_dev*,int) ;
 struct i40e_pf* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;

int FUNC_8(struct pci_dev *VAR_5, int VAR_6)
{
 struct i40e_pf *VAR_7 = FUNC_5(VAR_5);
 int VAR_8 = 0;

 if (FUNC_7(VAR_4, VAR_7->state)) {
  FUNC_1(&VAR_5->dev, "Unable to configure VFs, other operation is pending.\n");
  return -VAR_0;
 }

 if (VAR_6) {
  if (!(VAR_7->flags & VAR_2)) {
   VAR_7->flags |= VAR_2;
   FUNC_2(VAR_7, VAR_3);
  }
  VAR_8 = FUNC_4(VAR_5, VAR_6);
  goto sriov_configure_out;
 }

 if (!FUNC_6(VAR_7->pdev)) {
  FUNC_3(VAR_7);
  VAR_7->flags &= ~VAR_2;
  FUNC_2(VAR_7, VAR_3);
 } else {
  FUNC_1(&VAR_5->dev, "Unable to free VFs because some are assigned to VMs.\n");
  VAR_8 = -VAR_1;
  goto sriov_configure_out;
 }
sriov_configure_out:
 FUNC_0(VAR_4, VAR_7->state);
 return VAR_8;
}
