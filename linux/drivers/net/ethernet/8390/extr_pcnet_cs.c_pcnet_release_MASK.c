
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcnet_dev {int flags; int base; } ;
struct pcmcia_device {int dev; int priv; } ;


 struct pcnet_dev* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_4(struct pcmcia_device *VAR_1)
{
 struct pcnet_dev *VAR_2 = FUNC_0(VAR_1->priv);

 FUNC_1(&VAR_1->dev, "pcnet_release\n");

 if (VAR_2->flags & VAR_0)
  FUNC_2(VAR_2->base);

 FUNC_3(VAR_1);
}
