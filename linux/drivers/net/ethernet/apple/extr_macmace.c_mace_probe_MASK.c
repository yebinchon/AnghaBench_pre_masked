
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u8 ;
typedef scalar_t__ u32 ;
struct platform_device {int dev; } ;
struct net_device {unsigned char* dev_addr; int watchdog_timeo; int * netdev_ops; int irq; scalar_t__ base_addr; } ;
struct mace_data {int chipid; TYPE_1__* mace; int dma_intr; int * device; } ;
struct TYPE_2__ {int chipid_hi; int chipid_lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 unsigned char* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,int *) ;
 int VAR_7 ;
 struct net_device* FUNC_1 (int ) ;
 unsigned char FUNC_2 (unsigned char) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_8 ;
 struct mace_data* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct platform_device*,struct net_device*) ;
 int FUNC_6 (char*,unsigned char*,int) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_9)
{
 int VAR_10;
 struct mace_data *VAR_11;
 unsigned char *VAR_12;
 struct net_device *VAR_13;
 unsigned char VAR_14 = 0;
 int VAR_15;

 VAR_13 = FUNC_1(VAR_6);
 if (!VAR_13)
  return -VAR_1;

 VAR_11 = FUNC_4(VAR_13);

 VAR_11->device = &VAR_9->dev;
 FUNC_5(VAR_9, VAR_13);
 FUNC_0(VAR_13, &VAR_9->dev);

 VAR_13->base_addr = (u32)VAR_4;
 VAR_11->mace = VAR_4;

 VAR_13->irq = VAR_2;
 VAR_11->dma_intr = VAR_3;

 VAR_11->chipid = VAR_11->mace->chipid_hi << 8 | VAR_11->mace->chipid_lo;
 VAR_12 = VAR_5;

 for (VAR_10 = 0; VAR_10 < 6; ++VAR_10) {
  u8 VAR_16 = FUNC_2(VAR_12[VAR_10<<4]);
  VAR_14 ^= VAR_16;
  VAR_13->dev_addr[VAR_10] = VAR_16;
 }
 for (; VAR_10 < 8; ++VAR_10) {
  VAR_14 ^= FUNC_2(VAR_12[VAR_10<<4]);
 }

 if (VAR_14 != 0xFF) {
  FUNC_3(VAR_13);
  return -VAR_0;
 }

 VAR_13->netdev_ops = &VAR_8;
 VAR_13->watchdog_timeo = VAR_7;

 FUNC_6("Onboard MACE, hardware address %pM, chip revision 0x%04X\n",
  VAR_13->dev_addr, VAR_11->chipid);

 VAR_15 = FUNC_7(VAR_13);
 if (!VAR_15)
  return 0;

 FUNC_3(VAR_13);
 return VAR_15;
}
