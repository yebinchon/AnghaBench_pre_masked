
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {int dev; struct net_device* priv; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int timer; } ;
typedef TYPE_1__ ray_dev_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct net_device*) ;
 TYPE_1__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcmcia_device*) ;
 int * VAR_0 ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct pcmcia_device *VAR_1)
{
 struct net_device *VAR_2;
 ray_dev_t *VAR_3;

 FUNC_1(&VAR_1->dev, "ray_detach\n");

 VAR_0 = ((void*)0);
 VAR_2 = VAR_1->priv;

 FUNC_4(VAR_1);

 VAR_3 = FUNC_3(VAR_2);
 FUNC_0(&VAR_3->timer);

 if (VAR_1->priv) {
  FUNC_5(VAR_2);
  FUNC_2(VAR_2);
 }
 FUNC_1(&VAR_1->dev, "ray_cs ray_detach ending\n");
}
