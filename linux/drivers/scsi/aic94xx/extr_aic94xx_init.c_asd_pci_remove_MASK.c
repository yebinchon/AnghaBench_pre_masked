
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; } ;
struct asd_ha_struct {int pcidev; } ;


 int FUNC_0 (struct asd_ha_struct*) ;
 int FUNC_1 (struct asd_ha_struct*) ;
 int FUNC_2 (struct asd_ha_struct*) ;
 int FUNC_3 (struct asd_ha_struct*) ;
 int FUNC_4 (struct asd_ha_struct*) ;
 int FUNC_5 (struct asd_ha_struct*) ;
 int FUNC_6 (struct asd_ha_struct*) ;
 int FUNC_7 (struct asd_ha_struct*) ;
 int FUNC_8 (int ,struct asd_ha_struct*) ;
 int FUNC_9 (struct asd_ha_struct*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (int ) ;
 struct asd_ha_struct* FUNC_12 (struct pci_dev*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_13(struct pci_dev *VAR_1)
{
 struct asd_ha_struct *VAR_2 = FUNC_12(VAR_1);

 if (!VAR_2)
  return;

 FUNC_7(VAR_2);

 FUNC_2(VAR_2);

 FUNC_4(VAR_2);



 FUNC_8(VAR_1->irq, VAR_2);
 if (VAR_0)
  FUNC_11(VAR_2->pcidev);
 FUNC_5(VAR_2);
 FUNC_0(VAR_2);
 FUNC_3(VAR_2);
 FUNC_1(VAR_2);
 FUNC_6(VAR_2);
 FUNC_9(VAR_2);
 FUNC_10(VAR_1);
 return;
}
