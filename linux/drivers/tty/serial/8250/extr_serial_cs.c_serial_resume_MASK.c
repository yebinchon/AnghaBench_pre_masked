
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial_info {int ndev; TYPE_1__* quirk; int * line; } ;
struct pcmcia_device {struct serial_info* priv; } ;
struct TYPE_2__ {int (* wakeup ) (struct pcmcia_device*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_0)
{
 struct serial_info *VAR_1 = VAR_0->priv;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->ndev; VAR_2++)
  FUNC_0(VAR_1->line[VAR_2]);

 if (VAR_1->quirk && VAR_1->quirk->wakeup)
  VAR_1->quirk->wakeup(VAR_0);

 return 0;
}
