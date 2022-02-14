
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_ha_struct {struct sas_ha_struct* sas_port; struct sas_ha_struct* sas_phy; scalar_t__ lldd_ha; } ;
struct pci_dev {int dummy; } ;
struct mvs_prv_info {unsigned short n_host; struct mvs_info** mvi; int mv_tasklet; } ;
struct mvs_info {TYPE_1__* pdev; int shost; } ;
struct TYPE_4__ {int (* interrupt_disable ) (struct mvs_info*) ;} ;
struct TYPE_3__ {int irq; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,struct sas_ha_struct*) ;
 int FUNC_1 (struct sas_ha_struct*) ;
 int FUNC_2 (struct mvs_info*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct sas_ha_struct* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sas_ha_struct*) ;
 int FUNC_8 (struct mvs_info*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_1)
{
 unsigned short VAR_2, VAR_3 = 0;
 struct sas_ha_struct *VAR_4 = FUNC_4(VAR_1);
 struct mvs_info *VAR_5 = ((void*)0);

 VAR_2 = ((struct mvs_prv_info *)VAR_4->lldd_ha)->n_host;
 VAR_5 = ((struct mvs_prv_info *)VAR_4->lldd_ha)->mvi[0];





 FUNC_7(VAR_4);
 FUNC_6(VAR_5->shost);

 VAR_0->interrupt_disable(VAR_5);
 FUNC_0(VAR_5->pdev->irq, VAR_4);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_5 = ((struct mvs_prv_info *)VAR_4->lldd_ha)->mvi[VAR_3];
  FUNC_2(VAR_5);
 }
 FUNC_1(VAR_4->sas_phy);
 FUNC_1(VAR_4->sas_port);
 FUNC_1(VAR_4);
 FUNC_5(VAR_1);
 FUNC_3(VAR_1);
 return;
}
