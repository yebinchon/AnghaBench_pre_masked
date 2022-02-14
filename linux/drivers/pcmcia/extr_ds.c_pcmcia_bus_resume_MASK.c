
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int sock; int dev; } ;


 int FUNC_0 (int *,int *,struct pcmcia_socket*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct pcmcia_socket *VAR_2)
{
 FUNC_1(&VAR_2->dev, "resuming socket %d\n", VAR_2->sock);
 FUNC_0(&VAR_1, ((void*)0), VAR_2, VAR_0);
 return 0;
}
