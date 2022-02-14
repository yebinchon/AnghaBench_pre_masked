
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stmmac_priv {int ioaddr; int device; struct mac_device_info* hw; } ;
struct TYPE_4__ {int addr_shift; int addr_mask; int reg_shift; int reg_mask; int clk_csr_shift; int clk_csr_mask; int data; int addr; } ;
struct TYPE_3__ {int speed_mask; scalar_t__ speed1000; scalar_t__ speed100; scalar_t__ speed10; int duplex; } ;
struct mac_device_info {TYPE_2__ mii; TYPE_1__ link; int pcsr; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct stmmac_priv *VAR_4)
{
 struct mac_device_info *VAR_5 = VAR_4->hw;

 FUNC_1(VAR_4->device, "\tDWMAC100\n");

 VAR_5->pcsr = VAR_4->ioaddr;
 VAR_5->link.duplex = VAR_0;
 VAR_5->link.speed10 = 0;
 VAR_5->link.speed100 = 0;
 VAR_5->link.speed1000 = 0;
 VAR_5->link.speed_mask = VAR_1;
 VAR_5->mii.addr = VAR_2;
 VAR_5->mii.data = VAR_3;
 VAR_5->mii.addr_shift = 11;
 VAR_5->mii.addr_mask = 0x0000F800;
 VAR_5->mii.reg_shift = 6;
 VAR_5->mii.reg_mask = 0x000007C0;
 VAR_5->mii.clk_csr_shift = 2;
 VAR_5->mii.clk_csr_mask = FUNC_0(5, 2);

 return 0;
}
