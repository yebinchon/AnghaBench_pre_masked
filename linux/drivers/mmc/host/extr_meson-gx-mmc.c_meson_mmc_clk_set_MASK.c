
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int actual_clock; } ;
struct meson_host {int ddr; unsigned long req_rate; int dev; int mmc_clk; scalar_t__ regs; struct mmc_host* mmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,char*,unsigned long) ;
 int FUNC_3 (int ,char*,unsigned long,int) ;
 int FUNC_4 (struct meson_host*) ;
 int FUNC_5 (struct meson_host*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct meson_host *VAR_3, unsigned long VAR_4,
        bool VAR_5)
{
 struct mmc_host *VAR_6 = VAR_3->mmc;
 int VAR_7;
 u32 VAR_8;


 if (VAR_3->ddr == VAR_5 && VAR_3->req_rate == VAR_4)
  return 0;


 FUNC_4(VAR_3);
 VAR_3->req_rate = 0;
 VAR_6->actual_clock = 0;


 if (!VAR_4)
  return 0;


 VAR_8 = FUNC_6(VAR_3->regs + VAR_2);
 VAR_8 |= VAR_1;
 FUNC_7(VAR_8, VAR_3->regs + VAR_2);

 if (VAR_5) {

  VAR_4 <<= 1;
  VAR_8 |= VAR_0;
 } else {
  VAR_8 &= ~VAR_0;
 }
 FUNC_7(VAR_8, VAR_3->regs + VAR_2);
 VAR_3->ddr = VAR_5;

 VAR_7 = FUNC_1(VAR_3->mmc_clk, VAR_4);
 if (VAR_7) {
  FUNC_3(VAR_3->dev, "Unable to set cfg_div_clk to %lu. ret=%d\n",
   VAR_4, VAR_7);
  return VAR_7;
 }

 VAR_3->req_rate = VAR_4;
 VAR_6->actual_clock = FUNC_0(VAR_3->mmc_clk);


 if (VAR_5) {
  VAR_3->req_rate >>= 1;
  VAR_6->actual_clock >>= 1;
 }

 FUNC_2(VAR_3->dev, "clk rate: %u Hz\n", VAR_6->actual_clock);
 if (VAR_4 != VAR_6->actual_clock)
  FUNC_2(VAR_3->dev, "requested rate was %lu\n", VAR_4);


 FUNC_5(VAR_3);

 return 0;
}
