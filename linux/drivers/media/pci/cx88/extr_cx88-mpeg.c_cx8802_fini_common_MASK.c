
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx8802_dev {TYPE_1__* pci; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (struct cx8802_dev*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,struct cx8802_dev*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct cx8802_dev *VAR_0)
{
 FUNC_1(2, "\n");
 FUNC_0(VAR_0);
 FUNC_3(VAR_0->pci);


 FUNC_2(VAR_0->pci->irq, VAR_0);
}
