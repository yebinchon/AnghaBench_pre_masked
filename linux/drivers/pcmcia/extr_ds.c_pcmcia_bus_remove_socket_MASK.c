
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int skt_mutex; } ;
struct device {int kobj; } ;
struct class_interface {int dummy; } ;


 struct pcmcia_socket* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct pcmcia_socket*,int *) ;
 int FUNC_4 (struct pcmcia_socket*,int *) ;
 int FUNC_5 (struct pcmcia_socket*) ;
 int FUNC_6 (struct pcmcia_socket*) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_1,
         struct class_interface *VAR_2)
{
 struct pcmcia_socket *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3)
  return;

 FUNC_3(VAR_3, ((void*)0));


 FUNC_1(&VAR_3->skt_mutex);
 FUNC_4(VAR_3, ((void*)0));
 FUNC_6(VAR_3);
 FUNC_2(&VAR_3->skt_mutex);

 FUNC_7(&VAR_1->kobj, &VAR_0);

 FUNC_5(VAR_3);

 return;
}
