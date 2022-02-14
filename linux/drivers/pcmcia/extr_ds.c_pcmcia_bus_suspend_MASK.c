
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int sock; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,struct pcmcia_socket*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct pcmcia_socket*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct pcmcia_socket *VAR_3)
{
 FUNC_1(&VAR_3->dev, "suspending socket %d\n", VAR_3->sock);
 if (FUNC_0(&VAR_2, ((void*)0), VAR_3,
        VAR_1)) {
  FUNC_2(VAR_3);
  return -VAR_0;
 }
 return 0;
}
