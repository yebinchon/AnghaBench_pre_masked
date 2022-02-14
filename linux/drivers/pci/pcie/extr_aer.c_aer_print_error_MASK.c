
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int devfn; int dev; int device; int vendor; TYPE_1__* bus; } ;
struct aer_err_info {int status; size_t severity; int mask; int id; int error_dev_num; int tlp; scalar_t__ tlp_header_valid; } ;
struct TYPE_2__ {int number; } ;


 int FUNC_0 (size_t,int) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (struct pci_dev*,struct aer_err_info*) ;
 int FUNC_3 (struct pci_dev*,int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pci_dev*,char*,...) ;
 int FUNC_6 (int ,int,size_t,scalar_t__,int *) ;

void FUNC_7(struct pci_dev *VAR_3, struct aer_err_info *VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7 = ((VAR_3->bus->number << 8) | VAR_3->devfn);

 if (!VAR_4->status) {
  FUNC_5(VAR_3, "PCIe Bus Error: severity=%s, type=Inaccessible, (Unregistered Agent ID)\n",
   VAR_2[VAR_4->severity]);
  goto out;
 }

 VAR_5 = FUNC_1(VAR_4->severity, VAR_4->status);
 VAR_6 = FUNC_0(VAR_4->severity, VAR_4->status);

 FUNC_5(VAR_3, "PCIe Bus Error: severity=%s, type=%s, (%s)\n",
  VAR_2[VAR_4->severity],
  VAR_1[VAR_5], VAR_0[VAR_6]);

 FUNC_5(VAR_3, "  device [%04x:%04x] error status/mask=%08x/%08x\n",
  VAR_3->vendor, VAR_3->device,
  VAR_4->status, VAR_4->mask);

 FUNC_2(VAR_3, VAR_4);

 if (VAR_4->tlp_header_valid)
  FUNC_3(VAR_3, &VAR_4->tlp);

out:
 if (VAR_4->id && VAR_4->error_dev_num > 1 && VAR_4->id == VAR_7)
  FUNC_5(VAR_3, "  Error of this Agent is reported first\n");

 FUNC_6(FUNC_4(&VAR_3->dev), (VAR_4->status & ~VAR_4->mask),
   VAR_4->severity, VAR_4->tlp_header_valid, &VAR_4->tlp);
}
