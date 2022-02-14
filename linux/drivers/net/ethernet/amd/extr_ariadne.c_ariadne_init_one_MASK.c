
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
struct zorro_dev {TYPE_2__ rom; TYPE_1__ resource; } ;
struct resource {int name; } ;
struct net_device {int* dev_addr; unsigned long base_addr; unsigned long mem_start; int mem_end; int watchdog_timeo; int * netdev_ops; int name; } ;
struct ariadne_private {int dummy; } ;
struct Am79C960 {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 struct net_device* FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*,unsigned long,int*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (unsigned long,int) ;
 struct resource* FUNC_7 (unsigned long,int,char*) ;
 int FUNC_8 (struct zorro_dev*,struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct zorro_dev *VAR_7,
       const struct zorro_device_id *VAR_8)
{
 unsigned long VAR_9 = VAR_7->resource.start;
 unsigned long VAR_10 = VAR_9 + VAR_0;
 unsigned long VAR_11 = VAR_9 + VAR_1;
 struct resource *VAR_12, *VAR_13;
 struct net_device *VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_12 = FUNC_7(VAR_10, sizeof(struct Am79C960), "Am79C960");
 if (!VAR_12)
  return -VAR_3;
 VAR_13 = FUNC_7(VAR_11, VAR_2, "RAM");
 if (!VAR_13) {
  FUNC_6(VAR_10, sizeof(struct Am79C960));
  return -VAR_3;
 }

 VAR_14 = FUNC_1(sizeof(struct ariadne_private));
 if (VAR_14 == ((void*)0)) {
  FUNC_6(VAR_10, sizeof(struct Am79C960));
  FUNC_6(VAR_11, VAR_2);
  return -VAR_4;
 }

 VAR_12->name = VAR_14->name;
 VAR_13->name = VAR_14->name;

 VAR_15 = FUNC_2(VAR_7->rom.er_SerialNumber);
 VAR_14->dev_addr[0] = 0x00;
 VAR_14->dev_addr[1] = 0x60;
 VAR_14->dev_addr[2] = 0x30;
 VAR_14->dev_addr[3] = (VAR_15 >> 16) & 0xff;
 VAR_14->dev_addr[4] = (VAR_15 >> 8) & 0xff;
 VAR_14->dev_addr[5] = VAR_15 & 0xff;
 VAR_14->base_addr = (unsigned long)FUNC_0(VAR_10);
 VAR_14->mem_start = (unsigned long)FUNC_0(VAR_11);
 VAR_14->mem_end = VAR_14->mem_start + VAR_2;

 VAR_14->netdev_ops = &VAR_6;
 VAR_14->watchdog_timeo = 5 * VAR_5;

 VAR_16 = FUNC_5(VAR_14);
 if (VAR_16) {
  FUNC_6(VAR_10, sizeof(struct Am79C960));
  FUNC_6(VAR_11, VAR_2);
  FUNC_3(VAR_14);
  return VAR_16;
 }
 FUNC_8(VAR_7, VAR_14);

 FUNC_4(VAR_14, "Ariadne at 0x%08lx, Ethernet Address %pM\n",
      VAR_9, VAR_14->dev_addr);

 return 0;
}
