
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__* function_config; struct pcmcia_device* devname; struct pcmcia_device** prod_id; int socket; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int ref; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 struct pcmcia_device* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1)
{
 struct pcmcia_device *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;
 FUNC_0(VAR_1, "releasing device\n");
 FUNC_3(VAR_2->socket);
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
  FUNC_1(VAR_2->prod_id[VAR_3]);
 FUNC_1(VAR_2->devname);
 FUNC_2(&VAR_2->function_config->ref, VAR_0);
 FUNC_1(VAR_2);
}
