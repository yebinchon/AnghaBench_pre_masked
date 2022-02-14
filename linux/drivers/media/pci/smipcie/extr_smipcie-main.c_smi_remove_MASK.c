
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smi_dev {int lmmio; int * ts_port; TYPE_1__* info; TYPE_2__* pci_dev; } ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {scalar_t__ ts_0; scalar_t__ ts_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct smi_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct smi_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (TYPE_2__*) ;
 struct smi_dev* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int *) ;
 int FUNC_7 (struct smi_dev*) ;
 int FUNC_8 (struct smi_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_2)
{
 struct smi_dev *VAR_3 = FUNC_5(VAR_2);

 FUNC_10(VAR_1, VAR_0);
 FUNC_0(VAR_3->pci_dev->irq, VAR_3);



 if (VAR_3->info->ts_1)
  FUNC_9(&VAR_3->ts_port[1]);
 if (VAR_3->info->ts_0)
  FUNC_9(&VAR_3->ts_port[0]);

 FUNC_8(VAR_3);
 FUNC_7(VAR_3);
 FUNC_1(VAR_3->lmmio);
 FUNC_6(VAR_2, ((void*)0));
 FUNC_3(VAR_2);
 FUNC_2(VAR_3);
}
