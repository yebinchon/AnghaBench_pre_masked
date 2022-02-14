
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int dummy; } ;
struct pcmcia_device {scalar_t__ suspended; struct pcmcia_socket* socket; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 struct pcmcia_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct pcmcia_socket *VAR_2 = VAR_1;
 struct pcmcia_device *VAR_3 = FUNC_1(VAR_0);

 if (VAR_3->socket != VAR_2 || VAR_3->suspended)
  return 0;

 return FUNC_0(VAR_0);
}
