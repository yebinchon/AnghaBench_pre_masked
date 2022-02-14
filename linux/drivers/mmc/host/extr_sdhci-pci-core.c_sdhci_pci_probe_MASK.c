
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_pci_slot {int dummy; } ;
struct sdhci_pci_fixes {int (* probe ) (struct sdhci_pci_chip*) ;scalar_t__ allow_runtime_pm; int quirks2; int quirks; } ;
struct sdhci_pci_chip {int num_slots; int pm_retune; int rpm_retune; scalar_t__ allow_runtime_pm; struct sdhci_pci_slot** slots; struct sdhci_pci_fixes const* fixes; int quirks2; int quirks; struct pci_dev* pdev; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; scalar_t__ revision; scalar_t__ device; scalar_t__ vendor; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct sdhci_pci_slot*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sdhci_pci_slot*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int,int,int) ;
 struct sdhci_pci_chip* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (struct pci_dev*,int ,int*) ;
 int FUNC_9 (struct pci_dev*,struct sdhci_pci_chip*) ;
 int FUNC_10 (struct pci_dev*) ;
 struct sdhci_pci_slot* FUNC_11 (struct pci_dev*,struct sdhci_pci_chip*,int,int) ;
 int FUNC_12 (struct sdhci_pci_slot*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct sdhci_pci_chip*) ;

__attribute__((used)) static int FUNC_15(struct pci_dev *VAR_6,
         const struct pci_device_id *VAR_7)
{
 struct sdhci_pci_chip *VAR_8;
 struct sdhci_pci_slot *VAR_9;

 u8 VAR_10, VAR_11;
 int VAR_12, VAR_13;

 FUNC_0(VAR_6 == ((void*)0));
 FUNC_0(VAR_7 == ((void*)0));

 FUNC_6(&VAR_6->dev, "SDHCI controller found [%04x:%04x] (rev %x)\n",
   (int)VAR_6->vendor, (int)VAR_6->device, (int)VAR_6->revision);

 VAR_12 = FUNC_8(VAR_6, VAR_4, &VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_10 = FUNC_2(VAR_10) + 1;
 FUNC_4(&VAR_6->dev, "found %d slot(s)\n", VAR_10);

 FUNC_0(VAR_10 > VAR_3);

 VAR_12 = FUNC_8(VAR_6, VAR_4, &VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_11 &= VAR_5;

 if (VAR_11 > 5) {
  FUNC_5(&VAR_6->dev, "Invalid first BAR. Aborting.\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_10(VAR_6);
 if (VAR_12)
  return VAR_12;

 VAR_8 = FUNC_7(&VAR_6->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->pdev = VAR_6;
 VAR_8->fixes = (const struct sdhci_pci_fixes *)VAR_7->driver_data;
 if (VAR_8->fixes) {
  VAR_8->quirks = VAR_8->fixes->quirks;
  VAR_8->quirks2 = VAR_8->fixes->quirks2;
  VAR_8->allow_runtime_pm = VAR_8->fixes->allow_runtime_pm;
 }
 VAR_8->num_slots = VAR_10;
 VAR_8->pm_retune = 1;
 VAR_8->rpm_retune = 1;

 FUNC_9(VAR_6, VAR_8);

 if (VAR_8->fixes && VAR_8->fixes->probe) {
  VAR_12 = VAR_8->fixes->probe(VAR_8);
  if (VAR_12)
   return VAR_12;
 }

 VAR_10 = VAR_8->num_slots;

 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
  VAR_9 = FUNC_11(VAR_6, VAR_8, VAR_11, VAR_13);
  if (FUNC_1(VAR_9)) {
   for (VAR_13--; VAR_13 >= 0; VAR_13--)
    FUNC_12(VAR_8->slots[VAR_13]);
   return FUNC_3(VAR_9);
  }

  VAR_8->slots[VAR_13] = VAR_9;
 }

 if (VAR_8->allow_runtime_pm)
  FUNC_13(&VAR_6->dev);

 return 0;
}
