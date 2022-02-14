
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int dev; } ;
struct device {int dummy; } ;


 struct pcmcia_socket* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (int *) ;

struct pcmcia_socket *FUNC_2(struct pcmcia_socket *VAR_0)
{
 struct device *VAR_1 = FUNC_1(&VAR_0->dev);
 if (!VAR_1)
  return ((void*)0);
 return FUNC_0(VAR_1);
}
