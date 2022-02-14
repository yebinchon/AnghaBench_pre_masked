
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct davinci_mmc_config* platform_data; } ;
struct platform_device {int id; TYPE_1__ dev; } ;
struct mmc_ios {int const power_mode; int bus_width; int bus_mode; int vdd; int clock; } ;
struct mmc_host {int parent; } ;
struct mmc_davinci_host {int mmc; scalar_t__ base; int bus_mode; int version; } ;
struct davinci_mmc_config {int (* set_power ) (int ,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;


 int FUNC_0 (struct mmc_host*,struct mmc_ios*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 unsigned long VAR_9 ;
 int FUNC_4 (int ) ;
 struct mmc_davinci_host* FUNC_5 (struct mmc_host*) ;
 unsigned long FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;
 struct platform_device* FUNC_11 (int ) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_13(struct mmc_host *VAR_10, struct mmc_ios *VAR_11)
{
 struct mmc_davinci_host *VAR_12 = FUNC_5(VAR_10);
 struct platform_device *VAR_13 = FUNC_11(VAR_10->parent);
 struct davinci_mmc_config *VAR_14 = VAR_13->dev.platform_data;

 FUNC_2(FUNC_4(VAR_12->mmc),
  "clock %dHz busmode %d powermode %d Vdd %04x\n",
  VAR_11->clock, VAR_11->bus_mode, VAR_11->power_mode,
  VAR_11->vdd);

 switch (VAR_11->power_mode) {
 case 129:
  if (VAR_14 && VAR_14->set_power)
   VAR_14->set_power(VAR_13->id, 0);
  break;
 case 128:
  if (VAR_14 && VAR_14->set_power)
   VAR_14->set_power(VAR_13->id, 1);
  break;
 }

 switch (VAR_11->bus_width) {
 case 130:
  FUNC_2(FUNC_4(VAR_12->mmc), "Enabling 8 bit mode\n");
  FUNC_12((FUNC_7(VAR_12->base + VAR_2) &
   ~VAR_5) | VAR_6,
   VAR_12->base + VAR_2);
  break;
 case 131:
  FUNC_2(FUNC_4(VAR_12->mmc), "Enabling 4 bit mode\n");
  if (VAR_12->version == VAR_8)
   FUNC_12((FUNC_7(VAR_12->base + VAR_2) &
    ~VAR_6) | VAR_5,
    VAR_12->base + VAR_2);
  else
   FUNC_12(FUNC_7(VAR_12->base + VAR_2) |
    VAR_5,
    VAR_12->base + VAR_2);
  break;
 case 132:
  FUNC_2(FUNC_4(VAR_12->mmc), "Enabling 1 bit mode\n");
  if (VAR_12->version == VAR_8)
   FUNC_12(FUNC_7(VAR_12->base + VAR_2) &
    ~(VAR_6 | VAR_5),
    VAR_12->base + VAR_2);
  else
   FUNC_12(FUNC_7(VAR_12->base + VAR_2) &
    ~VAR_5,
    VAR_12->base + VAR_2);
  break;
 }

 FUNC_0(VAR_10, VAR_11);

 VAR_12->bus_mode = VAR_11->bus_mode;
 if (VAR_11->power_mode == 128) {
  unsigned long VAR_15 = VAR_9 + FUNC_6(50);
  bool VAR_16 = 1;


  FUNC_12(0, VAR_12->base + VAR_0);
  FUNC_12(VAR_4, VAR_12->base + VAR_1);
  while (FUNC_10(VAR_9, VAR_15)) {
   u32 VAR_17 = FUNC_7(VAR_12->base + VAR_3);

   if (VAR_17 & VAR_7) {
    VAR_16 = 0;
    break;
   }
   FUNC_1();
  }
  if (VAR_16)
   FUNC_3(FUNC_4(VAR_12->mmc), "powerup timeout\n");
 }


}
