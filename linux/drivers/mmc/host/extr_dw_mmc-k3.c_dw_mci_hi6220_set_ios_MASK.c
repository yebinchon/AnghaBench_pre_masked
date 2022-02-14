
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ios {int clock; } ;
struct dw_mci {int biu_clk; int bus_hz; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct dw_mci *VAR_0, struct mmc_ios *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3;

 VAR_3 = (VAR_1->clock <= 25000000) ? 25000000 : VAR_1->clock;

 VAR_2 = FUNC_1(VAR_0->biu_clk, VAR_3);
 if (VAR_2)
  FUNC_2(VAR_0->dev, "failed to set rate %uHz\n", VAR_3);

 VAR_0->bus_hz = FUNC_0(VAR_0->biu_clk);
}
