
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pcmcia_device {scalar_t__ manf_id; scalar_t__ card_id; int io_lines; int dev; TYPE_1__** resource; int irq; struct net_device* priv; } ;
struct net_device {unsigned int base_addr; int if_port; scalar_t__ dev_addr; int irq; } ;
typedef int __be16 ;
struct TYPE_2__ {int start; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct net_device*,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct net_device*,char*,...) ;
 int FUNC_10 (int,unsigned int) ;
 int FUNC_11 (struct pcmcia_device*) ;
 size_t FUNC_12 (struct pcmcia_device*,int,int **) ;
 int FUNC_13 (struct pcmcia_device*) ;
 int FUNC_14 (struct pcmcia_device*,int ) ;
 int FUNC_15 (unsigned int,int) ;
 scalar_t__ FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_18(struct pcmcia_device *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->priv;
 __be16 *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12 = 0, VAR_13;
 unsigned int VAR_14;
 static const char * const VAR_15[] = {"5:3", "3:1", "1:1", "3:5"};
 u8 *VAR_16;
 size_t VAR_17;

 FUNC_2(&VAR_6->dev, "3c589_config\n");

 VAR_8 = (__be16 *)VAR_7->dev_addr;

 if (VAR_6->manf_id != VAR_1)
  FUNC_4(&VAR_6->dev, "hmmm, is this really a 3Com card??\n");
 VAR_12 = (VAR_6->card_id == VAR_2);

 VAR_6->io_lines = 16;


 for (VAR_10 = VAR_11 = 0; VAR_11 < 0x400; VAR_11 += 0x10) {
  if (VAR_12 && (VAR_11 & 0x80))
   continue;
  VAR_6->resource[0]->start = VAR_11 ^ 0x300;
  VAR_10 = FUNC_13(VAR_6);
  if (VAR_10 == 0)
   break;
 }
 if (VAR_10 != 0)
  goto failed;

 VAR_9 = FUNC_14(VAR_6, VAR_3);
 if (VAR_9)
  goto failed;

 VAR_9 = FUNC_11(VAR_6);
 if (VAR_9)
  goto failed;

 VAR_7->irq = VAR_6->irq;
 VAR_7->base_addr = VAR_6->resource[0]->start;
 VAR_14 = VAR_7->base_addr;
 FUNC_0(0);




 VAR_17 = FUNC_12(VAR_6, 0x88, &VAR_16);
 if (VAR_16 && VAR_17 >= 6) {
  for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
   VAR_8[VAR_10] = FUNC_5(FUNC_8(VAR_16[VAR_10*2]));
  FUNC_7(VAR_16);
 } else {
  FUNC_7(VAR_16);
  for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
   VAR_8[VAR_10] = FUNC_5(FUNC_15(VAR_14, VAR_10));
  if (VAR_8[0] == FUNC_5(0x6060)) {
   FUNC_3(&VAR_6->dev, "IO port conflict at 0x%03lx-0x%03lx\n",
     VAR_7->base_addr, VAR_7->base_addr+15);
   goto failed;
  }
 }





 FUNC_10(0x3f00, VAR_14 + 8);
 VAR_13 = FUNC_6(VAR_14);


 if ((VAR_5 >= 0) && (VAR_5 <= 3))
  VAR_7->if_port = VAR_5;
 else
  FUNC_3(&VAR_6->dev, "invalid if_port requested\n");

 FUNC_1(VAR_7, &VAR_6->dev);

 if (FUNC_16(VAR_7) != 0) {
  FUNC_3(&VAR_6->dev, "register_netdev() failed\n");
  goto failed;
 }

 FUNC_9(VAR_7, "3Com 3c%s, io %#3lx, irq %d, hw_addr %pM\n",
   (VAR_12 ? "562" : "589"), VAR_7->base_addr, VAR_7->irq,
   VAR_7->dev_addr);
 FUNC_9(VAR_7, "  %dK FIFO split %s Rx:Tx, %s xcvr\n",
   (VAR_13 & 7) ? 32 : 8, VAR_15[(VAR_13 >> 16) & 3],
   VAR_4[VAR_7->if_port]);
 return 0;

failed:
 FUNC_17(VAR_6);
 return -VAR_0;
}
