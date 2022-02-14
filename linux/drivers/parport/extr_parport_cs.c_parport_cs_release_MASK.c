
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int dev; TYPE_1__* priv; } ;
struct parport {int dummy; } ;
struct TYPE_2__ {scalar_t__ ndev; struct parport* port; } ;
typedef TYPE_1__ parport_info_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct parport*) ;
 int FUNC_2 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
 parport_info_t *VAR_1 = VAR_0->priv;

 FUNC_0(&VAR_0->dev, "parport_release\n");

 if (VAR_1->ndev) {
  struct parport *VAR_2 = VAR_1->port;
  FUNC_1(VAR_2);
 }
 VAR_1->ndev = 0;

 FUNC_2(VAR_0);
}
