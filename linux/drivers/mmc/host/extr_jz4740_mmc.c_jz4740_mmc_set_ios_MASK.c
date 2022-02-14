
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_ios {int power_mode; int bus_width; int vdd; int clock; } ;
struct TYPE_2__ {int vmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;
struct jz4740_mmc_host {int cmdat; int clk; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;




 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct jz4740_mmc_host*) ;
 int FUNC_4 (struct jz4740_mmc_host*,int ) ;
 struct jz4740_mmc_host* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct mmc_host *VAR_2, struct mmc_ios *VAR_3)
{
 struct jz4740_mmc_host *VAR_4 = FUNC_5(VAR_2);
 if (VAR_3->clock)
  FUNC_4(VAR_4, VAR_3->clock);

 switch (VAR_3->power_mode) {
 case 128:
  FUNC_3(VAR_4);
  if (!FUNC_0(VAR_2->supply.vmmc))
   FUNC_6(VAR_2, VAR_2->supply.vmmc, VAR_3->vdd);
  VAR_4->cmdat |= VAR_1;
  FUNC_2(VAR_4->clk);
  break;
 case 129:
  break;
 default:
  if (!FUNC_0(VAR_2->supply.vmmc))
   FUNC_6(VAR_2, VAR_2->supply.vmmc, 0);
  FUNC_1(VAR_4->clk);
  break;
 }

 switch (VAR_3->bus_width) {
 case 131:
  VAR_4->cmdat &= ~VAR_0;
  break;
 case 130:
  VAR_4->cmdat |= VAR_0;
  break;
 default:
  break;
 }
}
