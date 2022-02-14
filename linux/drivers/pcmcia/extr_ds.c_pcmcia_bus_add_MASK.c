
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int ops_mutex; scalar_t__ pcmcia_pfc; int present; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct pcmcia_socket*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_socket *VAR_0)
{
 FUNC_0(&VAR_0->present, 1);

 FUNC_2(&VAR_0->ops_mutex);
 VAR_0->pcmcia_pfc = 0;
 FUNC_1(VAR_0);
 FUNC_3(&VAR_0->ops_mutex);

 FUNC_4(VAR_0);

 return 0;
}
