
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct mid8250 {TYPE_1__* board; int line; } ;
struct TYPE_2__ {int (* exit ) (struct mid8250*) ;} ;


 struct mid8250* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mid8250*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct mid8250 *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->line);

 if (VAR_1->board->exit)
  VAR_1->board->exit(VAR_1);
}
