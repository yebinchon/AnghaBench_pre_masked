
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct mei_cfg {scalar_t__ (* quirk_probe ) (struct pci_dev*) ;} ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static bool FUNC_2(struct pci_dev *VAR_0,
    const struct mei_cfg *VAR_1)
{
 if (VAR_1->quirk_probe && VAR_1->quirk_probe(VAR_0)) {
  FUNC_0(&VAR_0->dev, "Device doesn't have valid ME Interface\n");
  return 0;
 }

 return 1;
}
