
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {struct pci_bus* bus; int dev; } ;
struct pci_bus {int dummy; } ;
struct owl_ctx {int eeprom_load; } ;
struct firmware {int size; scalar_t__ data; } ;


 scalar_t__ FUNC_0 (struct pci_dev*,int const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct pci_bus*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct firmware const*) ;

__attribute__((used)) static void FUNC_9(const struct firmware *VAR_0, void *VAR_1)
{
 struct pci_dev *VAR_2 = (struct pci_dev *)VAR_1;
 struct owl_ctx *VAR_3 = (struct owl_ctx *)FUNC_3(VAR_2);
 struct pci_bus *VAR_4;

 FUNC_1(&VAR_3->eeprom_load);

 if (!VAR_0) {
  FUNC_2(&VAR_2->dev, "no eeprom data received.\n");
  goto release;
 }


 if (VAR_0->size > 4096 || VAR_0->size < 0x200 || (VAR_0->size & 1) == 1) {
  FUNC_2(&VAR_2->dev, "eeprom file has an invalid size.\n");
  goto release;
 }

 if (FUNC_0(VAR_2, (const u16 *)VAR_0->data, VAR_0->size))
  goto release;

 FUNC_4();
 VAR_4 = VAR_2->bus;
 FUNC_6(VAR_2);



 FUNC_5(VAR_4);
 FUNC_7();

release:
 FUNC_8(VAR_0);
}
