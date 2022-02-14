
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_3__ {int line; } ;
struct lpss8250 {TYPE_2__* board; TYPE_1__ data; } ;
struct TYPE_4__ {int (* exit ) (struct lpss8250*) ;} ;


 struct lpss8250* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lpss8250*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct lpss8250 *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->data.line);

 if (VAR_1->board->exit)
  VAR_1->board->exit(VAR_1);
}
