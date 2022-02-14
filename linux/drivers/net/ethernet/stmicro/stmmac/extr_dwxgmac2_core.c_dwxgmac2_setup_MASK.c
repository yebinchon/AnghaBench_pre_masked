
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stmmac_priv {TYPE_2__* plat; int ioaddr; TYPE_1__* dev; int device; struct mac_device_info* hw; } ;
struct TYPE_10__ {int addr_shift; int clk_csr_shift; void* clk_csr_mask; void* reg_mask; scalar_t__ reg_shift; void* addr_mask; int data; int addr; } ;
struct TYPE_8__ {int speed10000; int speed5000; int speed2500; } ;
struct TYPE_9__ {int speed_mask; TYPE_3__ xgmii; int speed2500; int speed1000; int speed100; int speed10; scalar_t__ duplex; } ;
struct mac_device_info {TYPE_5__ mii; TYPE_4__ link; scalar_t__ multicast_filter_bins; scalar_t__ mcast_bits_log2; int unicast_filter_entries; int pcsr; } ;
struct TYPE_7__ {int unicast_filter_entries; scalar_t__ multicast_filter_bins; } ;
struct TYPE_6__ {int priv_flags; } ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

int FUNC_3(struct stmmac_priv *VAR_11)
{
 struct mac_device_info *VAR_12 = VAR_11->hw;

 FUNC_1(VAR_11->device, "\tXGMAC2\n");

 VAR_11->dev->priv_flags |= VAR_0;
 VAR_12->pcsr = VAR_11->ioaddr;
 VAR_12->multicast_filter_bins = VAR_11->plat->multicast_filter_bins;
 VAR_12->unicast_filter_entries = VAR_11->plat->unicast_filter_entries;
 VAR_12->mcast_bits_log2 = 0;

 if (VAR_12->multicast_filter_bins)
  VAR_12->mcast_bits_log2 = FUNC_2(VAR_12->multicast_filter_bins);

 VAR_12->link.duplex = 0;
 VAR_12->link.speed10 = VAR_4;
 VAR_12->link.speed100 = VAR_3;
 VAR_12->link.speed1000 = VAR_2;
 VAR_12->link.speed2500 = VAR_6;
 VAR_12->link.xgmii.speed2500 = VAR_5;
 VAR_12->link.xgmii.speed5000 = VAR_7;
 VAR_12->link.xgmii.speed10000 = VAR_1;
 VAR_12->link.speed_mask = VAR_8;

 VAR_12->mii.addr = VAR_9;
 VAR_12->mii.data = VAR_10;
 VAR_12->mii.addr_shift = 16;
 VAR_12->mii.addr_mask = FUNC_0(20, 16);
 VAR_12->mii.reg_shift = 0;
 VAR_12->mii.reg_mask = FUNC_0(15, 0);
 VAR_12->mii.clk_csr_shift = 19;
 VAR_12->mii.clk_csr_mask = FUNC_0(21, 19);

 return 0;
}
