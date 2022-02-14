
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ef4_nic {scalar_t__ state; int net_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ef4_nic*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct ef4_nic*,int ,int ,char*) ;
 int FUNC_2 (struct ef4_nic*,int ,int ,char*,int) ;
 struct ef4_nic* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_4)
{
 struct ef4_nic *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;

 FUNC_4();

 if (VAR_5->state == VAR_1)
  goto out;

 VAR_6 = FUNC_0(VAR_5, VAR_0);
 if (VAR_6) {
  FUNC_2(VAR_5, VAR_3, VAR_5->net_dev,
     "ef4_reset failed after PCI error (%d)\n", VAR_6);
 } else {
  VAR_5->state = VAR_2;
  FUNC_1(VAR_5, VAR_3, VAR_5->net_dev,
     "Done resetting and resuming IO after PCI error.\n");
 }

out:
 FUNC_5();
}
