
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_6__ {int capi_ctrl; } ;
typedef TYPE_1__ avmctrl_info ;
struct TYPE_7__ {unsigned int port; int irq; TYPE_1__* ctrlinfo; } ;
typedef TYPE_2__ avmcard ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 avmcard *VAR_2 = FUNC_4(VAR_1);
 avmctrl_info *VAR_3 = VAR_2->ctrlinfo;
 unsigned int VAR_4 = VAR_2->port;

 FUNC_1(VAR_4);
 FUNC_1(VAR_4);

 FUNC_2(&VAR_3->capi_ctrl);
 FUNC_3(VAR_2->irq, VAR_2);
 FUNC_5(VAR_2->port, VAR_0);
 FUNC_0(VAR_2);
}
