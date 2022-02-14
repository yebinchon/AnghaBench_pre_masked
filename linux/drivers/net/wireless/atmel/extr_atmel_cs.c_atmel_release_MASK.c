
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ priv; int dev; } ;
struct net_device {int dummy; } ;
struct local_info {struct net_device* eth_dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
 struct net_device *VAR_1 = ((struct local_info *)VAR_0->priv)->eth_dev;

 FUNC_0(&VAR_0->dev, "atmel_release\n");

 if (VAR_1)
  FUNC_2(VAR_1);
 ((struct local_info *)VAR_0->priv)->eth_dev = ((void*)0);

 FUNC_1(VAR_0);
}
