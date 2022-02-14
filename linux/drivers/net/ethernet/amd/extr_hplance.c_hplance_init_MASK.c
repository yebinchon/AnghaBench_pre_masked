
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {unsigned long base_addr; int* dev_addr; scalar_t__ dma; int * netdev_ops; } ;
struct lance_init_block {int dummy; } ;
struct TYPE_4__ {unsigned long base; int tx_ring_mod_mask; int rx_ring_mod_mask; int lance_log_tx_bufs; int lance_log_rx_bufs; int readrdp; int writerdp; int writerap; int irq; int busmaster_regval; int * lance_init_block; struct lance_init_block* init_block; int name; } ;
struct hplance_private {TYPE_2__ lance; } ;
struct TYPE_3__ {unsigned long start; } ;
struct dio_dev {int ipl; int name; TYPE_1__ resource; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 struct hplance_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_13, struct dio_dev *VAR_14)
{
 unsigned long VAR_15 = (VAR_14->resource.start + VAR_1);
 struct hplance_private *VAR_16;
 int VAR_17;


 FUNC_2(VAR_15 + VAR_0, 0xff);
 FUNC_3(100);


 VAR_13->base_addr = VAR_15;
 VAR_13->netdev_ops = &VAR_9;
 VAR_13->dma = 0;

 for (VAR_17 = 0; VAR_17 < 6; VAR_17++) {



  VAR_13->dev_addr[VAR_17] = ((FUNC_0(VAR_15 + VAR_3 + VAR_17*4 + 1) & 0xF) << 4)
   | (FUNC_0(VAR_15 + VAR_3 + VAR_17*4 + 3) & 0xF);
 }

 VAR_16 = FUNC_1(VAR_13);
 VAR_16->lance.name = VAR_14->name;
 VAR_16->lance.base = VAR_15;
 VAR_16->lance.init_block = (struct lance_init_block *)(VAR_15 + VAR_2);
 VAR_16->lance.lance_init_block = ((void*)0);
 VAR_16->lance.busmaster_regval = VAR_6;
 VAR_16->lance.irq = VAR_14->ipl;
 VAR_16->lance.writerap = VAR_11;
 VAR_16->lance.writerdp = VAR_12;
 VAR_16->lance.readrdp = VAR_10;
 VAR_16->lance.lance_log_rx_bufs = VAR_4;
 VAR_16->lance.lance_log_tx_bufs = VAR_5;
 VAR_16->lance.rx_ring_mod_mask = VAR_7;
 VAR_16->lance.tx_ring_mod_mask = VAR_8;
}
