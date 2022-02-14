
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct atl1c_hw {int msi_lnkpatch; scalar_t__ device_id; scalar_t__ revision_id; scalar_t__ subsystem_vendor_id; scalar_t__ subsystem_id; TYPE_1__* adapter; } ;
struct TYPE_4__ {scalar_t__ pci_did; scalar_t__ pci_revid; scalar_t__ subsystem_vid; scalar_t__ subsystem_did; int patch_flag; } ;
struct TYPE_3__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static void FUNC_2(struct atl1c_hw *VAR_7)
{
 struct pci_dev *VAR_8 = VAR_7->adapter->pdev;
 u32 VAR_9;
 int VAR_10 = 0;

 VAR_7->msi_lnkpatch = 0;

 while (VAR_6[VAR_10].pci_did != 0) {
  if (VAR_6[VAR_10].pci_did == VAR_7->device_id &&
      VAR_6[VAR_10].pci_revid == VAR_7->revision_id &&
      VAR_6[VAR_10].subsystem_vid == VAR_7->subsystem_vendor_id &&
      VAR_6[VAR_10].subsystem_did == VAR_7->subsystem_id) {
   if (VAR_6[VAR_10].patch_flag & VAR_0)
    VAR_7->msi_lnkpatch = 1;
  }
  VAR_10++;
 }

 if (VAR_7->device_id == VAR_2 &&
     VAR_7->revision_id == VAR_1) {

  FUNC_1(VAR_8, VAR_4,
           VAR_3);
  FUNC_0(VAR_8, VAR_5, &VAR_9);
  VAR_9 &= ~0x100;
  FUNC_1(VAR_8, VAR_4,
           VAR_3);
  FUNC_1(VAR_8, VAR_5, VAR_9);
 }
}
