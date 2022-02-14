
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pcmcia_device {int io_lines; int dev; TYPE_1__** resource; int irq; struct net_device* priv; } ;
struct net_device {unsigned int base_addr; int if_port; int dev_addr; int irq; } ;
typedef int mace_private ;
struct TYPE_2__ {unsigned int start; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (int *,char*,...) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int,int ) ;
 int VAR_6 ;
 char FUNC_4 (int *,unsigned int,int ) ;
 int FUNC_5 (int ,int *,size_t) ;
 int FUNC_6 (struct net_device*,char*,unsigned int,int ,int ,int ) ;
 int * FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct pcmcia_device*) ;
 int FUNC_9 (struct pcmcia_device*) ;
 size_t FUNC_10 (struct pcmcia_device*,int,int **) ;
 int FUNC_11 (struct pcmcia_device*) ;
 int FUNC_12 (struct pcmcia_device*,int ) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (struct net_device*) ;

__attribute__((used)) static int FUNC_15(struct pcmcia_device *VAR_7)
{
  struct net_device *VAR_8 = VAR_7->priv;
  mace_private *VAR_9 = FUNC_7(VAR_8);
  u8 *VAR_10;
  size_t VAR_11;
  int VAR_12, VAR_13;
  unsigned int VAR_14;

  FUNC_1(&VAR_7->dev, "nmclan_config\n");

  VAR_7->io_lines = 5;
  VAR_13 = FUNC_11(VAR_7);
  if (VAR_13)
   goto failed;
  VAR_13 = FUNC_12(VAR_7, VAR_6);
  if (VAR_13)
   goto failed;
  VAR_13 = FUNC_9(VAR_7);
  if (VAR_13)
   goto failed;

  VAR_8->irq = VAR_7->irq;
  VAR_8->base_addr = VAR_7->resource[0]->start;

  VAR_14 = VAR_8->base_addr;


  VAR_11 = FUNC_10(VAR_7, 0x80, &VAR_10);
  if (!VAR_10 || VAR_11 < VAR_1) {
   FUNC_2(VAR_10);
   goto failed;
  }
  FUNC_5(VAR_8->dev_addr, VAR_10, VAR_1);
  FUNC_2(VAR_10);


  {
    char VAR_15[2];

    VAR_15[0] = FUNC_4(VAR_9, VAR_14, VAR_3);
    VAR_15[1] = FUNC_4(VAR_9, VAR_14, VAR_2);
    if ((VAR_15[0] == 0x40) && ((VAR_15[1] & 0x0F) == 0x09)) {
      FUNC_1(&VAR_7->dev, "nmclan_cs configured: mace id=%x %x\n",
     VAR_15[0], VAR_15[1]);
    } else {
      FUNC_13("mace id not found: %x %x should be 0x40 0x?9\n",
  VAR_15[0], VAR_15[1]);
      return -VAR_0;
    }
  }

  if(FUNC_3(VAR_9, VAR_14, VAR_8->dev_addr) == -1)
   goto failed;


  if (VAR_5 <= 2)
    VAR_8->if_port = VAR_5;
  else
    FUNC_13("invalid if_port requested\n");

  FUNC_0(VAR_8, &VAR_7->dev);

  VAR_12 = FUNC_14(VAR_8);
  if (VAR_12 != 0) {
    FUNC_13("register_netdev() failed\n");
    goto failed;
  }

  FUNC_6(VAR_8, "nmclan: port %#3lx, irq %d, %s port, hw_addr %pM\n",
       VAR_8->base_addr, VAR_8->irq, VAR_4[VAR_8->if_port], VAR_8->dev_addr);
  return 0;

failed:
 FUNC_8(VAR_7);
 return -VAR_0;
}
