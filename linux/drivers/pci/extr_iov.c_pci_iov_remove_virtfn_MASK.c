
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sd; } ;
struct TYPE_3__ {TYPE_2__ kobj; } ;
struct pci_dev {int bus; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int ) ;
 struct pci_dev* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (int ,int ) ;

void FUNC_9(struct pci_dev *VAR_1, int VAR_2)
{
 char VAR_3[VAR_0];
 struct pci_dev *VAR_4;

 VAR_4 = FUNC_2(FUNC_1(VAR_1->bus),
          FUNC_3(VAR_1, VAR_2),
          FUNC_4(VAR_1, VAR_2));
 if (!VAR_4)
  return;

 FUNC_6(VAR_3, "virtfn%u", VAR_2);
 FUNC_7(&VAR_1->dev.kobj, VAR_3);





 if (VAR_4->dev.kobj.sd)
  FUNC_7(&VAR_4->dev.kobj, "physfn");

 FUNC_5(VAR_4);
 FUNC_8(VAR_1->bus, VAR_4->bus);


 FUNC_0(VAR_4);
 FUNC_0(VAR_1);
}
