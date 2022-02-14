
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct exar8250 {unsigned int nr; TYPE_1__* board; int * line; } ;
struct TYPE_2__ {int (* exit ) (struct pci_dev*) ;} ;


 struct exar8250* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct exar8250 *VAR_1 = FUNC_0(VAR_0);
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->nr; VAR_2++)
  FUNC_1(VAR_1->line[VAR_2]);

 if (VAR_1->board->exit)
  VAR_1->board->exit(VAR_0);
}
