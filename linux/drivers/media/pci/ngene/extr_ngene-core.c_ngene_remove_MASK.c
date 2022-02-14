
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ en; } ;
struct ngene {TYPE_1__ ci; int * channel; int event_tasklet; } ;


 int VAR_0 ;
 int FUNC_0 (struct ngene*) ;
 int FUNC_1 (struct ngene*) ;
 int FUNC_2 (struct ngene*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct ngene* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct pci_dev *VAR_1)
{
 struct ngene *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 FUNC_6(&VAR_2->event_tasklet);
 for (VAR_3 = VAR_0 - 1; VAR_3 >= 0; VAR_3--)
  FUNC_5(&VAR_2->channel[VAR_3]);
 if (VAR_2->ci.en)
  FUNC_0(VAR_2);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
 FUNC_3(VAR_1);
}
