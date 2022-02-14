
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ open; struct com20020_dev* priv; } ;
struct net_device {int base_addr; } ;
struct com20020_dev {struct net_device* dev; } ;
struct arcnet_local {int config; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ) ;
 struct arcnet_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_1)
{
 struct com20020_dev *VAR_2 = VAR_1->priv;
 struct net_device *VAR_3 = VAR_2->dev;

 if (VAR_1->open) {
  int VAR_4 = VAR_3->base_addr;
  struct arcnet_local *VAR_5 = FUNC_1(VAR_3);

  FUNC_0(VAR_5->config | 0x80, VAR_4, VAR_0);
  FUNC_2(5);
  FUNC_0(VAR_5->config, VAR_4, VAR_0);
 }

 return 0;
}
