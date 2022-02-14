
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sym_device {int chip; struct pci_dev* pdev; } ;
struct sym_chip {int dummy; } ;
struct pci_dev {int dev; int revision; int device; } ;
struct TYPE_2__ {unsigned long* excludes; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,struct sym_chip*,int) ;
 unsigned long FUNC_2 (struct pci_dev*,int ) ;
 TYPE_1__ VAR_1 ;
 struct sym_chip* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sym_device *VAR_2)
{
 struct sym_chip *VAR_3;
 struct pci_dev *VAR_4 = VAR_2->pdev;
 unsigned long VAR_5 = FUNC_2(VAR_4, 0);
 int VAR_6;





 if (VAR_5) {
  for (VAR_6 = 0 ; VAR_6 < 8 ; VAR_6++) {
   if (VAR_1.excludes[VAR_6] == VAR_5)
    return -VAR_0;
  }
 }






 VAR_3 = FUNC_3(VAR_4->device, VAR_4->revision);
 if (!VAR_3) {
  FUNC_0(&VAR_4->dev, "device not supported\n");
  return -VAR_0;
 }
 FUNC_1(&VAR_2->chip, VAR_3, sizeof(VAR_2->chip));

 return 0;
}
