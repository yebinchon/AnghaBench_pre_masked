
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_socket {TYPE_1__* ops; } ;
struct pcmcia_socket {int dummy; } ;
struct TYPE_2__ {int (* socket_init ) (struct soc_pcmcia_socket*) ;} ;


 int FUNC_0 (struct soc_pcmcia_socket*,int,char*) ;
 int FUNC_1 (struct soc_pcmcia_socket*) ;
 int FUNC_2 (struct soc_pcmcia_socket*) ;
 struct soc_pcmcia_socket* FUNC_3 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_4(struct pcmcia_socket *VAR_0)
{
 struct soc_pcmcia_socket *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1, 2, "initializing socket\n");
 if (VAR_1->ops->socket_init)
  VAR_1->ops->socket_init(VAR_1);
 FUNC_1(VAR_1);
 return 0;
}
