
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ open; struct com20020_dev* priv; } ;
struct net_device {int dummy; } ;
struct com20020_dev {struct net_device* dev; } ;


 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_0)
{
 struct com20020_dev *VAR_1 = VAR_0->priv;
 struct net_device *VAR_2 = VAR_1->dev;

 if (VAR_0->open)
  FUNC_0(VAR_2);

 return 0;
}
