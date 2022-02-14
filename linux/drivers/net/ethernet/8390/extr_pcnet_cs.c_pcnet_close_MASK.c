
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcnet_dev {int watchdog; struct pcmcia_device* p_dev; } ;
struct pcmcia_device {int open; int dev; } ;
struct net_device {int irq; int name; } ;


 struct pcnet_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{
    struct pcnet_dev *VAR_1 = FUNC_0(VAR_0);
    struct pcmcia_device *VAR_2 = VAR_1->p_dev;

    FUNC_2(&VAR_2->dev, "pcnet_close('%s')\n", VAR_0->name);

    FUNC_3(VAR_0);
    FUNC_4(VAR_0->irq, VAR_0);

    VAR_2->open--;
    FUNC_5(VAR_0);
    FUNC_1(&VAR_1->watchdog);

    return 0;
}
