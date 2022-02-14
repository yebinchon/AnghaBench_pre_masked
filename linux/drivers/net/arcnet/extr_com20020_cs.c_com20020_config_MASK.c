
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int io_lines; int dev; int irq; TYPE_1__** resource; struct com20020_dev* priv; } ;
struct net_device {int base_addr; int irq; } ;
struct com20020_dev {struct net_device* dev; } ;
struct arcnet_local {char* card_name; int card_flags; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int *) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct pcmcia_device*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct net_device*,char*,int,int ) ;
 struct arcnet_local* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct pcmcia_device*) ;
 int FUNC_9 (struct pcmcia_device*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct pcmcia_device *VAR_2)
{
 struct arcnet_local *VAR_3;
 struct com20020_dev *VAR_4;
 struct net_device *VAR_5;
 int VAR_6, VAR_7;
 int VAR_8;

 VAR_4 = VAR_2->priv;
 VAR_5 = VAR_4->dev;

 FUNC_4(&VAR_2->dev, "config...\n");

 FUNC_4(&VAR_2->dev, "com20020_config\n");

 FUNC_4(&VAR_2->dev, "baseport1 is %Xh\n",
  (unsigned int)VAR_2->resource[0]->start);

 VAR_6 = -VAR_1;
 VAR_2->io_lines = 16;

 if (!VAR_2->resource[0]->start) {
  for (VAR_8 = 0x100; VAR_8 < 0x400; VAR_8 += 0x10) {
   VAR_2->resource[0]->start = VAR_8;
   VAR_6 = FUNC_9(VAR_2);
   if (VAR_6 == 0)
    break;
  }
 } else {
  VAR_6 = FUNC_9(VAR_2);
 }

 if (VAR_6 != 0) {
  FUNC_4(&VAR_2->dev, "requestIO failed totally!\n");
  goto failed;
 }

 VAR_8 = VAR_5->base_addr = VAR_2->resource[0]->start;
 FUNC_4(&VAR_2->dev, "got ioaddr %Xh\n", VAR_8);

 FUNC_4(&VAR_2->dev, "request IRQ %d\n",
  VAR_2->irq);
 if (!VAR_2->irq) {
  FUNC_4(&VAR_2->dev, "requestIRQ failed totally!\n");
  goto failed;
 }

 VAR_5->irq = VAR_2->irq;

 VAR_7 = FUNC_8(VAR_2);
 if (VAR_7)
  goto failed;

 if (FUNC_1(VAR_5)) {
  FUNC_10(VAR_5);
  goto failed;
 }

 VAR_3 = FUNC_7(VAR_5);
 VAR_3->card_name = "PCMCIA COM20020";
 VAR_3->card_flags = VAR_0;

 FUNC_0(VAR_5, &VAR_2->dev);

 VAR_6 = FUNC_2(VAR_5, 0);

 if (VAR_6 != 0) {
  FUNC_5(&VAR_2->dev,
      "com20020_found() failed\n");
  goto failed;
 }

 FUNC_6(VAR_5, "port %#3lx, irq %d\n",
     VAR_5->base_addr, VAR_5->irq);
 return 0;

failed:
 FUNC_4(&VAR_2->dev, "com20020_config failed...\n");
 FUNC_3(VAR_2);
 return -VAR_1;
}
