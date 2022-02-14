
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_dev {int dev; } ;
struct net_device {int base_addr; int irq; int dma; int mem_start; unsigned int dev_addr; int if_port; int watchdog_timeo; int * ethtool_ops; int * netdev_ops; int name; } ;
struct corkscrew_private {char* product_name; int options; int media_override; int full_duplex; int bus_master; int available_media; int default_media; int autoselect; unsigned int capabilities; int full_bus_master_tx; int full_bus_master_rx; int timer; int lock; int list; struct net_device* our_dev; int * dev; } ;
typedef int __u32 ;
typedef int __be16 ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 TYPE_1__* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct corkscrew_private* FUNC_5 (struct net_device*) ;
 int* VAR_19 ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (struct pnp_dev*,int ) ;
 int FUNC_8 (char*,unsigned int) ;
 int FUNC_9 (char*,int,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct net_device*) ;
 scalar_t__ FUNC_12 (int,char*) ;
 int VAR_20 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_21, int VAR_22,
       struct pnp_dev *VAR_23, int VAR_24)
{
 struct corkscrew_private *VAR_25 = FUNC_5(VAR_21);
 unsigned int VAR_26[0x40], VAR_27 = 0;
 int VAR_28;
 int VAR_29;
 VAR_29 = FUNC_3(VAR_22 + 0x2002) & 15;


 VAR_21->base_addr = VAR_22;
 VAR_21->irq = VAR_29;
 VAR_21->dma = FUNC_3(VAR_22 + 0x2000) & 7;
 VAR_25->product_name = "3c515";
 VAR_25->options = VAR_21->mem_start;
 VAR_25->our_dev = VAR_21;

 if (!VAR_25->options) {
   if (VAR_24 >= VAR_3)
   VAR_25->options = -1;
  else
   VAR_25->options = VAR_19[VAR_24];
 }

 if (VAR_25->options >= 0) {
  VAR_25->media_override = VAR_25->options & 7;
  if (VAR_25->media_override == 2)
   VAR_25->media_override = 0;
  VAR_25->full_duplex = (VAR_25->options & 8) ? 1 : 0;
  VAR_25->bus_master = (VAR_25->options & 16) ? 1 : 0;
 } else {
  VAR_25->media_override = 7;
  VAR_25->full_duplex = 0;
  VAR_25->bus_master = 0;
 }




 FUNC_9("%s: 3Com %s at %#3x,", VAR_21->name, VAR_25->product_name, VAR_22);

 FUNC_13(&VAR_25->lock);

 FUNC_14(&VAR_25->timer, VAR_15, 0);


 FUNC_0(0);
 for (VAR_28 = 0; VAR_28 < 0x18; VAR_28++) {
  __be16 *VAR_30 = (__be16 *) VAR_21->dev_addr;
  int VAR_31;
  FUNC_6(VAR_1 + VAR_28, VAR_22 + VAR_8);

  for (VAR_31 = 4; VAR_31 >= 0; VAR_31--) {
   FUNC_15(162);
   if ((FUNC_3(VAR_22 + VAR_8) & 0x0200) == 0)
    break;
  }
  VAR_26[VAR_28] = FUNC_3(VAR_22 + VAR_9);
  VAR_27 ^= VAR_26[VAR_28];
  if (VAR_28 < 3)
   VAR_30[VAR_28] = FUNC_1(VAR_26[VAR_28]);
 }
 VAR_27 = (VAR_27 ^ (VAR_27 >> 8)) & 0xff;
 if (VAR_27 != 0x00)
  FUNC_8(" ***INVALID CHECKSUM %4.4x*** ", VAR_27);
 FUNC_8(" %pM", VAR_21->dev_addr);
 if (VAR_26[16] == 0x11c7) {
  if (FUNC_12(VAR_21->dma, "3c515")) {
   FUNC_8(", DMA %d allocation failed", VAR_21->dma);
   VAR_21->dma = 0;
  } else
   FUNC_8(", DMA %d", VAR_21->dma);
 }
 FUNC_8(", IRQ %d\n", VAR_21->irq);

 if (VAR_14 && (VAR_21->irq <= 0 || VAR_21->irq > 15))
  FUNC_10(" *** Warning: this IRQ is unlikely to work! ***\n");

 {
  static const char * const VAR_32[] = {
   "5:3", "3:1", "1:1", "3:5"
  };
  __u32 VAR_33;
  FUNC_0(3);
  VAR_25->available_media = FUNC_3(VAR_22 + VAR_11);
  VAR_33 = FUNC_2(VAR_22 + VAR_10);
  if (VAR_14 > 1)
   FUNC_9("  Internal config register is %4.4x, transceivers %#x.\n",
    VAR_33, FUNC_3(VAR_22 + VAR_11));
  FUNC_9("  %dK %s-wide RAM %s Rx:Tx split, %s%s interface.\n",
   8 << VAR_33 & VAR_4,
   VAR_33 & VAR_7 ? "word" : "byte",
   VAR_32[(VAR_33 & VAR_5) >> VAR_6],
   VAR_33 & VAR_0 ? "autoselect/" : "",
   VAR_16[(VAR_33 & VAR_12) >> VAR_13].name);
  VAR_25->default_media = (VAR_33 & VAR_12) >> VAR_13;
  VAR_25->autoselect = VAR_33 & VAR_0 ? 1 : 0;
  VAR_21->if_port = VAR_25->default_media;
 }
 if (VAR_25->media_override != 7) {
  FUNC_9("  Media override to transceiver type %d (%s).\n",
         VAR_25->media_override,
         VAR_16[VAR_25->media_override].name);
  VAR_21->if_port = VAR_25->media_override;
 }

 VAR_25->capabilities = VAR_26[16];
 VAR_25->full_bus_master_tx = (VAR_25->capabilities & 0x20) ? 1 : 0;


 VAR_25->full_bus_master_rx = (VAR_25->capabilities & 0x20) ? 1 : 0;


 VAR_21->netdev_ops = &VAR_18;
 VAR_21->watchdog_timeo = (400 * VAR_2) / 1000;
 VAR_21->ethtool_ops = &VAR_17;

 return FUNC_11(VAR_21);
}
