
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcnet_dev {int flags; } ;
struct pcmcia_device {int manf_id; int card_id; int config_index; int config_base; int dev; TYPE_1__** resource; scalar_t__ irq; int config_flags; struct net_device* priv; } ;
struct net_device {int if_port; int base_addr; scalar_t__ irq; } ;
struct hw_info {int dummy; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pcnet_dev* FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 struct hw_info* FUNC_4 (struct pcmcia_device*) ;
 struct hw_info* FUNC_5 (struct pcmcia_device*) ;
 struct hw_info* FUNC_6 (struct pcmcia_device*) ;
 struct hw_info* FUNC_7 (struct pcmcia_device*) ;
 struct hw_info* FUNC_8 (struct pcmcia_device*) ;
 int VAR_4 ;
 int FUNC_9 (struct pcmcia_device*) ;
 int FUNC_10 (struct pcmcia_device*,int ,int*) ;
 int VAR_5 ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static struct hw_info *FUNC_12(struct pcmcia_device *VAR_6,
     int *VAR_7, int VAR_8)
{
 struct net_device *VAR_9 = VAR_6->priv;
 struct hw_info *VAR_10;
 struct pcnet_dev *VAR_11 = FUNC_0(VAR_9);
 int VAR_12 = VAR_8;
 int VAR_13;

 VAR_13 = FUNC_10(VAR_6, VAR_5, &VAR_12);
 if (VAR_13) {
  FUNC_3(&VAR_6->dev, "no useable port range found\n");
  return ((void*)0);
 }
 *VAR_7 = (VAR_12 & 0x10);

 if (!VAR_6->irq)
  return ((void*)0);

 if (FUNC_11(VAR_6->resource[1]) == 8)
  VAR_6->config_flags |= VAR_0;

 if ((VAR_6->manf_id == VAR_2) &&
     (VAR_6->card_id == VAR_3))
  VAR_6->config_index |= 0x10;

 VAR_13 = FUNC_9(VAR_6);
 if (VAR_13)
  return ((void*)0);

 VAR_9->irq = VAR_6->irq;
 VAR_9->base_addr = VAR_6->resource[0]->start;

 if (VAR_11->flags & VAR_1) {
  if ((VAR_4 == 1) || (VAR_4 == 2))
   VAR_9->if_port = VAR_4;
  else
   FUNC_2(&VAR_6->dev, "invalid if_port requested\n");
 } else
  VAR_9->if_port = 0;

 if ((VAR_6->config_base == 0x03c0) &&
     (VAR_6->manf_id == 0x149) && (VAR_6->card_id == 0xc1ab)) {
  FUNC_1(&VAR_6->dev,
   "this is an AX88190 card - use axnet_cs instead.\n");
  return ((void*)0);
 }

 VAR_10 = FUNC_6(VAR_6);
 if (!VAR_10)
  VAR_10 = FUNC_8(VAR_6);
 if (!VAR_10)
  VAR_10 = FUNC_5(VAR_6);
 if (!VAR_10)
  VAR_10 = FUNC_4(VAR_6);
 if (!VAR_10)
  VAR_10 = FUNC_7(VAR_6);

 return VAR_10;
}
