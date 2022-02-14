
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mmc_ios {int power_mode; int bus_width; scalar_t__ timing; int clock; int vdd; } ;
struct TYPE_2__ {int vmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;
struct cvm_mmc_slot {int clock; int cached_switch; int bus_id; struct cvm_mmc_host* host; } ;
struct cvm_mmc_host {int sys_freq; int (* release_bus ) (struct cvm_mmc_host*) ;int (* set_shared_power ) (struct cvm_mmc_host*,int) ;int global_pwr_gpiod; int (* acquire_bus ) (struct cvm_mmc_host*) ;} ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct cvm_mmc_slot*) ;
 int FUNC_3 (struct cvm_mmc_slot*) ;
 int FUNC_4 (struct cvm_mmc_host*,int) ;
 struct cvm_mmc_slot* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*,int ,int ) ;
 int FUNC_7 (int*,int ) ;
 int FUNC_8 (struct cvm_mmc_slot*,int ) ;
 int FUNC_9 (struct cvm_mmc_host*) ;
 int FUNC_10 (struct cvm_mmc_host*,int) ;
 int FUNC_11 (struct cvm_mmc_host*,int) ;
 int FUNC_12 (struct cvm_mmc_host*) ;
 int FUNC_13 (struct cvm_mmc_slot*,int) ;

__attribute__((used)) static void FUNC_14(struct mmc_host *VAR_7, struct mmc_ios *VAR_8)
{
 struct cvm_mmc_slot *VAR_9 = FUNC_5(VAR_7);
 struct cvm_mmc_host *VAR_10 = VAR_9->host;
 int VAR_11 = 0, VAR_12 = 10, VAR_13 = 0;
 u64 VAR_14, VAR_15;

 VAR_10->acquire_bus(VAR_10);
 FUNC_3(VAR_9);


 switch (VAR_8->power_mode) {
 case 129:
  break;

 case 130:
  FUNC_2(VAR_9);
  if (VAR_10->global_pwr_gpiod)
   VAR_10->set_shared_power(VAR_10, 0);
  else if (!FUNC_1(VAR_7->supply.vmmc))
   FUNC_6(VAR_7, VAR_7->supply.vmmc, 0);
  break;

 case 128:
  if (VAR_10->global_pwr_gpiod)
   VAR_10->set_shared_power(VAR_10, 1);
  else if (!FUNC_1(VAR_7->supply.vmmc))
   FUNC_6(VAR_7, VAR_7->supply.vmmc, VAR_8->vdd);
  break;
 }


 switch (VAR_8->bus_width) {
 case 131:
  VAR_13 = 2;
  break;
 case 132:
  VAR_13 = 1;
  break;
 case 133:
  VAR_13 = 0;
  break;
 }


 if (VAR_8->bus_width && VAR_8->timing == VAR_5)
  VAR_13 |= 4;


 VAR_14 = VAR_8->clock;
 if (VAR_14 > 52000000)
  VAR_14 = 52000000;
 VAR_9->clock = VAR_14;

 if (VAR_14)
  VAR_11 = (VAR_10->sys_freq + VAR_14 - 1) / (2 * VAR_14);

 VAR_15 = FUNC_0(VAR_3,
    (VAR_8->timing == VAR_6)) |
       FUNC_0(VAR_0, VAR_13) |
       FUNC_0(VAR_4, VAR_12) |
       FUNC_0(VAR_1, VAR_11) |
       FUNC_0(VAR_2, VAR_11);
 FUNC_7(&VAR_15, VAR_9->bus_id);

 if (!FUNC_13(VAR_9, VAR_15))
  goto out;

 FUNC_8(VAR_9, 0);
 FUNC_4(VAR_10, VAR_15);
 VAR_9->cached_switch = VAR_15;
out:
 VAR_10->release_bus(VAR_10);
}
