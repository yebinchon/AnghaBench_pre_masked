
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__* socket; } ;
struct TYPE_2__ {int present; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct pcmcia_device* FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (struct pcmcia_device*) ;

struct pcmcia_device *FUNC_3(struct pcmcia_device *VAR_0)
{
 struct pcmcia_device *VAR_1;
 struct pcmcia_device *VAR_2 = ((void*)0);

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 if (FUNC_0(&VAR_1->socket->present) != 0)
  VAR_2 = VAR_1;

 FUNC_2(VAR_1);
 return VAR_2;
}
