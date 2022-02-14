
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int dev; struct net_device* priv; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct pcmcia_device *VAR_0)
{
    struct net_device *VAR_1 = VAR_0->priv;

    FUNC_0(&VAR_0->dev, "nmclan_detach\n");

    FUNC_3(VAR_1);

    FUNC_2(VAR_0);

    FUNC_1(VAR_1);
}
