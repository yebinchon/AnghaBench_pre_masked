
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ios {int clock; } ;
struct dw_mci {int ciu_clk; int bus_hz; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct dw_mci *VAR_0, struct mmc_ios *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0->ciu_clk, VAR_1->clock);
 if (VAR_2)
  FUNC_2(VAR_0->dev, "failed to set rate %uHz\n", VAR_1->clock);

 VAR_0->bus_hz = FUNC_0(VAR_0->ciu_clk);
}
