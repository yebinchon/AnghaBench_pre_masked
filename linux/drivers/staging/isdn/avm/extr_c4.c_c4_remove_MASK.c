
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u_int ;
struct pci_dev {int dummy; } ;
struct TYPE_7__ {int capi_ctrl; } ;
typedef TYPE_1__ avmctrl_info ;
struct TYPE_8__ {size_t nr_controllers; int dma; int port; int mbase; int irq; TYPE_1__* ctrlinfo; } ;
typedef TYPE_2__ avmcard ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int *) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_1)
{
 avmcard *VAR_2 = FUNC_6(VAR_1);
 avmctrl_info *VAR_3;
 u_int VAR_4;

 if (!VAR_2)
  return;

 FUNC_2(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_2->nr_controllers; VAR_4++) {
  VAR_3 = &VAR_2->ctrlinfo[VAR_4];
  FUNC_3(&VAR_3->capi_ctrl);
 }

 FUNC_4(VAR_2->irq, VAR_2);
 FUNC_5(VAR_2->mbase);
 FUNC_8(VAR_2->port, VAR_0);
 FUNC_0(VAR_2->dma);
 FUNC_7(VAR_1, ((void*)0));
 FUNC_1(VAR_2);
}
