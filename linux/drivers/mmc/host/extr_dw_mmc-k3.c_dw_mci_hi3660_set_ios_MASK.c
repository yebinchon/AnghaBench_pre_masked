
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ios {int clock; int timing; } ;
struct k3_priv {int cur_speed; } ;
struct dw_mci {unsigned long bus_hz; scalar_t__ current_speed; int ciu_clk; int dev; struct k3_priv* priv; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,char*,unsigned long) ;
 int FUNC_3 (struct dw_mci*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct dw_mci *VAR_1, struct mmc_ios *VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;
 unsigned long VAR_5;
 struct k3_priv *VAR_6 = VAR_1->priv;

 if (!VAR_2->clock || VAR_2->clock == VAR_6->cur_speed)
  return;

 VAR_4 = VAR_2->clock * (VAR_0 + 1);
 VAR_3 = FUNC_1(VAR_1->ciu_clk, VAR_4);
 if (VAR_3) {
  FUNC_2(VAR_1->dev, "failed to set rate %luHz\n", VAR_4);
  return;
 }
 VAR_5 = FUNC_0(VAR_1->ciu_clk);

 FUNC_3(VAR_1, VAR_2->timing, -1);
 VAR_1->bus_hz = VAR_5 / (VAR_0 + 1);
 VAR_1->current_speed = 0;
 VAR_6->cur_speed = VAR_1->bus_hz;
}
