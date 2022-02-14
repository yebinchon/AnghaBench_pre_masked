
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_9__ {struct TYPE_9__* next; int (* releasehardware ) (TYPE_1__*) ;int (* stopcard ) (TYPE_1__*) ;} ;
typedef TYPE_1__ hysdn_card ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct pci_dev*) ;
 TYPE_1__* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_2)
{
 hysdn_card *VAR_3 = FUNC_3(VAR_2);

 FUNC_4(VAR_2, ((void*)0));

 if (VAR_3->stopcard)
  VAR_3->stopcard(VAR_3);





 if (VAR_3->releasehardware)
  VAR_3->releasehardware(VAR_3);

 if (VAR_3 == VAR_1) {
  VAR_1 = VAR_1->next;
  if (!VAR_1)
   VAR_0 = ((void*)0);
 } else {
  hysdn_card *VAR_4 = VAR_1;
  while (VAR_4) {
   if (VAR_4->next == VAR_3)
    VAR_4->next = VAR_3->next;
   VAR_0 = VAR_4;
   VAR_4 = VAR_4->next;
  }
 }

 FUNC_1(VAR_3);
 FUNC_2(VAR_2);
}
