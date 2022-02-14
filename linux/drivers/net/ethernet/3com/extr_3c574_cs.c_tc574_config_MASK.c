
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
typedef int u8 ;
struct pcmcia_device {int io_lines; char** prod_id; int dev; TYPE_1__** resource; int irq; struct net_device* priv; } ;
struct net_device {unsigned int base_addr; scalar_t__ dev_addr; int irq; } ;
struct el3_private {int default_media; int autoselect; int phys; int advertising; int media; } ;
typedef int __u32 ;
typedef int __be16 ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (unsigned int,int,int) ;
 int FUNC_10 (unsigned int,int) ;
 int FUNC_11 (unsigned int,int,int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (struct net_device*,char*,...) ;
 struct el3_private* FUNC_13 (struct net_device*) ;
 int FUNC_14 (int,scalar_t__) ;
 int FUNC_15 (struct pcmcia_device*) ;
 size_t FUNC_16 (struct pcmcia_device*,int,int **) ;
 int FUNC_17 (struct pcmcia_device*) ;
 int FUNC_18 (struct pcmcia_device*,int ) ;
 int FUNC_19 (char*,int) ;
 int FUNC_20 (char*,...) ;
 int * VAR_16 ;
 int FUNC_21 (unsigned int,int) ;
 scalar_t__ FUNC_22 (struct net_device*) ;
 int FUNC_23 (struct pcmcia_device*) ;
 int FUNC_24 (struct net_device*,int ) ;
 int FUNC_25 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_26(struct pcmcia_device *VAR_17)
{
 struct net_device *VAR_18 = VAR_17->priv;
 struct el3_private *VAR_19 = FUNC_13(VAR_18);
 int VAR_20, VAR_21, VAR_22;
 unsigned int VAR_23;
 __be16 *VAR_24;
 char *VAR_25;
 __u32 VAR_26;
 u8 *VAR_27;
 size_t VAR_28;

 VAR_24 = (__be16 *)VAR_18->dev_addr;

 FUNC_2(&VAR_17->dev, "3c574_config()\n");

 VAR_17->io_lines = 16;

 for (VAR_21 = VAR_22 = 0; VAR_22 < 0x400; VAR_22 += 0x20) {
  VAR_17->resource[0]->start = VAR_22 ^ 0x300;
  VAR_21 = FUNC_17(VAR_17);
  if (VAR_21 == 0)
   break;
 }
 if (VAR_21 != 0)
  goto failed;

 VAR_20 = FUNC_18(VAR_17, VAR_12);
 if (VAR_20)
  goto failed;

 VAR_20 = FUNC_15(VAR_17);
 if (VAR_20)
  goto failed;

 VAR_18->irq = VAR_17->irq;
 VAR_18->base_addr = VAR_17->resource[0]->start;

 VAR_23 = VAR_18->base_addr;





 VAR_28 = FUNC_16(VAR_17, 0x88, &VAR_27);
 if (VAR_27 && VAR_28 >= 6) {
  for (VAR_21 = 0; VAR_21 < 3; VAR_21++)
   VAR_24[VAR_21] = FUNC_3(FUNC_7(VAR_27[VAR_21 * 2]));
  FUNC_6(VAR_27);
 } else {
  FUNC_6(VAR_27);
  FUNC_0(0);
  for (VAR_21 = 0; VAR_21 < 3; VAR_21++)
   VAR_24[VAR_21] = FUNC_3(FUNC_21(VAR_23, VAR_21 + 10));
  if (VAR_24[0] == FUNC_3(0x6060)) {
   FUNC_20("IO port conflict at 0x%03lx-0x%03lx\n",
      VAR_18->base_addr, VAR_18->base_addr+15);
   goto failed;
  }
 }
 if (VAR_17->prod_id[1])
  VAR_25 = VAR_17->prod_id[1];
 else
  VAR_25 = "3Com 3c574";

 {
  u_char VAR_29;
  FUNC_14(2<<11, VAR_23 + VAR_5);
  VAR_29 = FUNC_4(VAR_23 + 2);
  FUNC_14(0<<11, VAR_23 + VAR_5);
  FUNC_19("  ASIC rev %d,", VAR_29>>3);
  FUNC_0(3);
  VAR_26 = FUNC_5(VAR_23 + VAR_8);
  VAR_19->default_media = (VAR_26 & VAR_10) >> VAR_11;
  VAR_19->autoselect = VAR_26 & VAR_0 ? 1 : 0;
 }

 FUNC_25(&VAR_19->media, VAR_14, 0);

 {
  int VAR_30;


  FUNC_14(0x8040, VAR_23 + VAR_9);
  FUNC_8(1);
  FUNC_14(0xc040, VAR_23 + VAR_9);
  FUNC_24(VAR_18, VAR_7);
  FUNC_24(VAR_18, VAR_6);
  FUNC_8(1);
  FUNC_14(0x8040, VAR_23 + VAR_9);

  FUNC_0(4);
  for (VAR_30 = 1; VAR_30 <= 32; VAR_30++) {
   int VAR_31;
   FUNC_10(VAR_23, 32);
   VAR_31 = FUNC_9(VAR_23, VAR_30 & 0x1f, 1);
   if (VAR_31 != 0xffff) {
    VAR_19->phys = VAR_30 & 0x1f;
    FUNC_2(&VAR_17->dev, "  MII transceiver at "
     "index %d, status %x.\n",
       VAR_30, VAR_31);
    if ((VAR_31 & 0x0040) == 0)
     VAR_15 = 1;
    break;
   }
  }
  if (VAR_30 > 32) {
   FUNC_20("  No MII transceivers found!\n");
   goto failed;
  }
  VAR_21 = FUNC_9(VAR_23, VAR_19->phys, 16) | 0x40;
  FUNC_11(VAR_23, VAR_19->phys, 16, VAR_21);
  VAR_19->advertising = FUNC_9(VAR_23, VAR_19->phys, 4);
  if (VAR_13) {

   VAR_19->advertising &= ~0x02a0;
   FUNC_11(VAR_23, VAR_19->phys, 4, VAR_19->advertising);
  }
 }

 FUNC_1(VAR_18, &VAR_17->dev);

 if (FUNC_22(VAR_18) != 0) {
  FUNC_20("register_netdev() failed\n");
  goto failed;
 }

 FUNC_12(VAR_18, "%s at io %#3lx, irq %d, hw_addr %pM\n",
      VAR_25, VAR_18->base_addr, VAR_18->irq, VAR_18->dev_addr);
 FUNC_12(VAR_18, " %dK FIFO split %s Rx:Tx, %sMII interface.\n",
      8 << (VAR_26 & VAR_2),
      VAR_16[(VAR_26 & VAR_3) >> VAR_4],
      VAR_26 & VAR_0 ? "autoselect " : "");

 return 0;

failed:
 FUNC_23(VAR_17);
 return -VAR_1;

}
