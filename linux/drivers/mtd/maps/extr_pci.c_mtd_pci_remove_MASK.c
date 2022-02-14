
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mtd_info {struct map_pci_info* priv; } ;
struct map_pci_info {int (* exit ) (struct pci_dev*,struct map_pci_info*) ;} ;


 int FUNC_0 (struct map_pci_info*) ;
 int FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (struct mtd_info*) ;
 struct mtd_info* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,struct map_pci_info*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct mtd_info *VAR_1 = FUNC_3(VAR_0);
 struct map_pci_info *VAR_2 = VAR_1->priv;

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 VAR_2->exit(VAR_0, VAR_2);
 FUNC_0(VAR_2);

 FUNC_4(VAR_0);
}
