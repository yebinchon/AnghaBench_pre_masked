
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct zorro_device_id {int dummy; } ;
struct TYPE_4__ {int er_SerialNumber; } ;
struct TYPE_3__ {unsigned long start; } ;
struct zorro_dev {scalar_t__ id; TYPE_2__ rom; TYPE_1__ resource; } ;
struct resource {int name; } ;
struct net_device {int* dev_addr; unsigned long base_addr; unsigned long mem_start; int mem_end; int watchdog_timeo; scalar_t__ dma; int * netdev_ops; int name; } ;
struct lance_regs {int dummy; } ;
struct lance_private {int multicast_timer; struct net_device* dev; int tx_ring_mod_mask; int rx_ring_mod_mask; int lance_log_tx_bufs; int lance_log_rx_bufs; int busmaster_regval; scalar_t__ auto_select; struct lance_init_block* lance_init_block; struct lance_init_block* init_block; struct lance_regs volatile* ll; } ;
struct lance_init_block {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct net_device*,char*,unsigned long,int*) ;
 struct lance_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (unsigned long,int) ;
 struct resource* FUNC_8 (unsigned long,int,char*) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (struct zorro_dev*,struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct zorro_dev *VAR_14,
     const struct zorro_device_id *VAR_15)
{
 struct net_device *VAR_16;
 struct lance_private *VAR_17;
 unsigned long VAR_18 = VAR_14->resource.start;
 unsigned long VAR_19 = VAR_18 + VAR_0;
 unsigned long VAR_20 = VAR_18 + VAR_1;
 struct resource *VAR_21, *VAR_22;
 u32 VAR_23;
 int VAR_24;

 VAR_21 = FUNC_8(VAR_19, sizeof(struct lance_regs),
    "Am7990");
 if (!VAR_21)
  return -VAR_3;
 VAR_22 = FUNC_8(VAR_20, VAR_2, "RAM");
 if (!VAR_22) {
  FUNC_7(VAR_19, sizeof(struct lance_regs));
  return -VAR_3;
 }

 VAR_16 = FUNC_1(sizeof(struct lance_private));
 if (VAR_16 == ((void*)0)) {
  FUNC_7(VAR_19, sizeof(struct lance_regs));
  FUNC_7(VAR_20, VAR_2);
  return -VAR_4;
 }

 VAR_17 = FUNC_5(VAR_16);

 VAR_21->name = VAR_16->name;
 VAR_22->name = VAR_16->name;

 VAR_23 = FUNC_2(VAR_14->rom.er_SerialNumber);
 VAR_16->dev_addr[0] = 0x00;
 if (VAR_14->id != VAR_11) {
  VAR_16->dev_addr[1] = 0x80;
  VAR_16->dev_addr[2] = 0x10;
 } else {
  VAR_16->dev_addr[1] = 0x00;
  VAR_16->dev_addr[2] = 0x9f;
 }
 VAR_16->dev_addr[3] = (VAR_23 >> 16) & 0xff;
 VAR_16->dev_addr[4] = (VAR_23 >> 8) & 0xff;
 VAR_16->dev_addr[5] = VAR_23 & 0xff;
 VAR_16->base_addr = (unsigned long)FUNC_0(VAR_19);
 VAR_16->mem_start = (unsigned long)FUNC_0(VAR_20);
 VAR_16->mem_end = VAR_16->mem_start + VAR_2;

 VAR_17->ll = (volatile struct lance_regs *)VAR_16->base_addr;
 VAR_17->init_block = (struct lance_init_block *)VAR_16->mem_start;
 VAR_17->lance_init_block = (struct lance_init_block *)VAR_1;
 VAR_17->auto_select = 0;
 VAR_17->busmaster_regval = VAR_8;

 VAR_17->lance_log_rx_bufs = VAR_6;
 VAR_17->lance_log_tx_bufs = VAR_7;
 VAR_17->rx_ring_mod_mask = VAR_9;
 VAR_17->tx_ring_mod_mask = VAR_10;
 VAR_17->dev = VAR_16;

 VAR_16->netdev_ops = &VAR_12;
 VAR_16->watchdog_timeo = 5*VAR_5;
 VAR_16->dma = 0;

 FUNC_9(&VAR_17->multicast_timer, VAR_13, 0);

 VAR_24 = FUNC_6(VAR_16);
 if (VAR_24) {
  FUNC_7(VAR_19, sizeof(struct lance_regs));
  FUNC_7(VAR_20, VAR_2);
  FUNC_3(VAR_16);
  return VAR_24;
 }
 FUNC_10(VAR_14, VAR_16);

 FUNC_4(VAR_16, "A2065 at 0x%08lx, Ethernet Address %pM\n",
      VAR_18, VAR_16->dev_addr);

 return 0;
}
