
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct resource {scalar_t__ start; scalar_t__ end; int flags; int name; int parent; } ;
struct pci_sriov {int vf_device; } ;
struct TYPE_2__ {int kobj; int parent; } ;
struct pci_dev {int is_virtfn; int bus; TYPE_1__ dev; struct resource* resource; scalar_t__ multifunction; int physfn; int device; int vendor; int devfn; struct pci_sriov* sriov; } ;
struct pci_bus {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 struct pci_dev* FUNC_2 (struct pci_bus*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,int) ;
 int FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (struct pci_dev*,int) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct resource*,struct resource*) ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (int *,int *,char*) ;
 int FUNC_17 (int *,char*) ;
 struct pci_bus* FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,struct pci_bus*) ;

int FUNC_20(struct pci_dev *VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8 = -VAR_0;
 u64 VAR_9;
 char VAR_10[VAR_4];
 struct pci_dev *VAR_11;
 struct resource *VAR_12;
 struct pci_sriov *VAR_13 = VAR_5->sriov;
 struct pci_bus *VAR_14;

 VAR_14 = FUNC_18(VAR_5->bus, FUNC_8(VAR_5, VAR_6));
 if (!VAR_14)
  goto failed;

 VAR_11 = FUNC_2(VAR_14);
 if (!VAR_11)
  goto failed0;

 VAR_11->devfn = FUNC_9(VAR_5, VAR_6);
 VAR_11->vendor = VAR_5->vendor;
 VAR_11->device = VAR_13->vf_device;
 VAR_11->is_virtfn = 1;
 VAR_11->physfn = FUNC_4(VAR_5);

 if (VAR_6 == 0)
  FUNC_11(VAR_11);

 VAR_8 = FUNC_12(VAR_11);
 if (VAR_8)
  goto failed1;

 VAR_11->dev.parent = VAR_5->dev.parent;
 VAR_11->multifunction = 0;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_12 = &VAR_5->resource[VAR_7 + VAR_2];
  if (!VAR_12->parent)
   continue;
  VAR_11->resource[VAR_7].name = FUNC_10(VAR_11);
  VAR_11->resource[VAR_7].flags = VAR_12->flags;
  VAR_9 = FUNC_7(VAR_5, VAR_7 + VAR_2);
  VAR_11->resource[VAR_7].start = VAR_12->start + VAR_9 * VAR_6;
  VAR_11->resource[VAR_7].end = VAR_11->resource[VAR_7].start + VAR_9 - 1;
  VAR_8 = FUNC_14(VAR_12, &VAR_11->resource[VAR_7]);
  FUNC_0(VAR_8);
 }

 FUNC_6(VAR_11, VAR_11->bus);

 FUNC_15(VAR_10, "virtfn%u", VAR_6);
 VAR_8 = FUNC_16(&VAR_5->dev.kobj, &VAR_11->dev.kobj, VAR_10);
 if (VAR_8)
  goto failed2;
 VAR_8 = FUNC_16(&VAR_11->dev.kobj, &VAR_5->dev.kobj, "physfn");
 if (VAR_8)
  goto failed3;

 FUNC_1(&VAR_11->dev.kobj, VAR_1);

 FUNC_3(VAR_11);

 return 0;

failed3:
 FUNC_17(&VAR_5->dev.kobj, VAR_10);
failed2:
 FUNC_13(VAR_11);
failed1:
 FUNC_5(VAR_5);
failed0:
 FUNC_19(VAR_5->bus, VAR_14);
failed:

 return VAR_8;
}
