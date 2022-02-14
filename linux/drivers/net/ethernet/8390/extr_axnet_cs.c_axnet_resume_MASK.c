
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ open; struct net_device* priv; } ;
struct net_device {int dummy; } ;
struct axnet_dev {int active_low; } ;


 int FUNC_0 (struct net_device*,int) ;
 int VAR_0 ;
 struct axnet_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcmcia_device*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->priv;
 struct axnet_dev *VAR_3 = FUNC_1(VAR_2);

 if (VAR_1->open) {
  if (VAR_3->active_low == 1)
   FUNC_4(VAR_1, VAR_0, 0x04);

  FUNC_2(VAR_2);
  FUNC_0(VAR_2, 1);
  FUNC_3(VAR_2);
 }

 return 0;
}
