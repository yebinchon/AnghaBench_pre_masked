
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mmcif_host {int clkdiv_map; TYPE_1__* mmc; int clk; } ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned int f_max; unsigned int f_min; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct device*,char*,unsigned int,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct device* FUNC_5 (struct sh_mmcif_host*) ;

__attribute__((used)) static void FUNC_6(struct sh_mmcif_host *VAR_0)
{
 struct device *VAR_1 = FUNC_5(VAR_0);

 if (VAR_0->mmc->f_max) {
  unsigned int VAR_2, VAR_3 = 0, VAR_4;

  VAR_2 = VAR_0->mmc->f_max;
  for (VAR_4 = VAR_2; VAR_4 > 2;) {
   VAR_3 = FUNC_1(VAR_0->clk, VAR_4 / 2);
   if (VAR_3 == VAR_4)
    break;
   VAR_4 = VAR_3;
  }




  VAR_0->clkdiv_map = 0x3ff;

  VAR_0->mmc->f_max = VAR_2 / (1 << FUNC_3(VAR_0->clkdiv_map));
  VAR_0->mmc->f_min = VAR_3 / (1 << FUNC_4(VAR_0->clkdiv_map));
 } else {
  unsigned int VAR_5 = FUNC_0(VAR_0->clk);

  VAR_0->mmc->f_max = VAR_5 / 2;
  VAR_0->mmc->f_min = VAR_5 / 512;
 }

 FUNC_2(VAR_1, "clk max/min = %d/%d\n",
  VAR_0->mmc->f_max, VAR_0->mmc->f_min);
}
