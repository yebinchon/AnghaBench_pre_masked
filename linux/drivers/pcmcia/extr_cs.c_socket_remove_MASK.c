
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int sock; int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct pcmcia_socket*) ;

__attribute__((used)) static void FUNC_2(struct pcmcia_socket *VAR_0)
{
 FUNC_0(&VAR_0->dev, "pccard: card ejected from slot %d\n", VAR_0->sock);
 FUNC_1(VAR_0);
}
