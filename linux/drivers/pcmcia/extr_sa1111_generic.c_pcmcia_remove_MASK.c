
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sa1111_pcmcia_socket {int soc; struct sa1111_pcmcia_socket* next; } ;
struct TYPE_2__ {int start; } ;
struct sa1111_dev {TYPE_1__ res; int dev; } ;


 struct sa1111_pcmcia_socket* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct sa1111_pcmcia_socket*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct sa1111_dev*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct sa1111_dev *VAR_0)
{
 struct sa1111_pcmcia_socket *VAR_1, *VAR_2 = FUNC_0(&VAR_0->dev);

 FUNC_1(&VAR_0->dev, ((void*)0));

 for (; VAR_2; VAR_2 = VAR_1) {
  VAR_1 = VAR_2->next;
  FUNC_5(&VAR_2->soc);
  FUNC_2(VAR_2);
 }

 FUNC_3(VAR_0->res.start, 512);
 FUNC_4(VAR_0);
 return 0;
}
