
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_ios {unsigned short vdd; unsigned long clock; int bus_width; int power_mode; } ;
struct TYPE_2__ {int vmmc; } ;
struct mmc_host {TYPE_1__ supply; int actual_clock; } ;
struct meson_mx_mmc_host {scalar_t__ error; int cfg_div_clk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,unsigned long,scalar_t__) ;
 int FUNC_5 (struct mmc_host*,int ,int ,int ) ;
 int FUNC_6 (struct mmc_host*) ;
 struct meson_mx_mmc_host* FUNC_7 (struct mmc_host*) ;
 scalar_t__ FUNC_8 (struct mmc_host*,int ,unsigned short) ;

__attribute__((used)) static void FUNC_9(struct mmc_host *VAR_3, struct mmc_ios *VAR_4)
{
 struct meson_mx_mmc_host *VAR_5 = FUNC_7(VAR_3);
 unsigned short VAR_6 = VAR_4->vdd;
 unsigned long VAR_7 = VAR_4->clock;

 switch (VAR_4->bus_width) {
 case 132:
  FUNC_5(VAR_3, VAR_1,
           VAR_2, 0);
  break;

 case 131:
  FUNC_5(VAR_3, VAR_1,
           VAR_2,
           VAR_2);
  break;

 case 130:
 default:
  FUNC_3(FUNC_6(VAR_3), "unsupported bus width: %d\n",
   VAR_4->bus_width);
  VAR_5->error = -VAR_0;
  return;
 }

 VAR_5->error = FUNC_2(VAR_5->cfg_div_clk, VAR_4->clock);
 if (VAR_5->error) {
  FUNC_4(FUNC_6(VAR_3),
    "failed to set MMC clock to %lu: %d\n",
    VAR_7, VAR_5->error);
  return;
 }

 VAR_3->actual_clock = FUNC_1(VAR_5->cfg_div_clk);

 switch (VAR_4->power_mode) {
 case 129:
  VAR_6 = 0;

 case 128:
  if (!FUNC_0(VAR_3->supply.vmmc)) {
   VAR_5->error = FUNC_8(VAR_3,
           VAR_3->supply.vmmc,
           VAR_6);
   if (VAR_5->error)
    return;
  }
  break;
 }
}
