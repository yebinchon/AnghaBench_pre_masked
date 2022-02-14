
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_ios {int clock; scalar_t__ bus_width; int timing; } ;
struct dw_mci_rockchip_priv_data {int default_sample_phase; int drv_clk; int sample_clk; } ;
struct dw_mci {int bus_hz; scalar_t__ current_speed; int ciu_clk; int dev; struct dw_mci_rockchip_priv_data* priv; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5(struct dw_mci *VAR_2, struct mmc_ios *VAR_3)
{
 struct dw_mci_rockchip_priv_data *VAR_4 = VAR_2->priv;
 int VAR_5;
 unsigned int VAR_6;
 u32 VAR_7;

 if (VAR_3->clock == 0)
  return;
 if (VAR_3->bus_width == VAR_0 &&
     VAR_3->timing == 130)
  VAR_6 = 2 * VAR_3->clock * VAR_1;
 else
  VAR_6 = VAR_3->clock * VAR_1;

 VAR_5 = FUNC_3(VAR_2->ciu_clk, VAR_6);
 if (VAR_5)
  FUNC_4(VAR_2->dev, "failed to set rate %uHz\n", VAR_3->clock);

 VAR_7 = FUNC_1(VAR_2->ciu_clk) / VAR_1;
 if (VAR_7 != VAR_2->bus_hz) {
  VAR_2->bus_hz = VAR_7;

  VAR_2->current_speed = 0;
 }


 if (!FUNC_0(VAR_4->sample_clk))
  FUNC_2(VAR_4->sample_clk, VAR_4->default_sample_phase);
 if (!FUNC_0(VAR_4->drv_clk)) {
  int VAR_8;







  VAR_8 = 90;

  switch (VAR_3->timing) {
  case 130:





   if (VAR_3->bus_width == VAR_0)
    VAR_8 = 180;
   break;
  case 128:
  case 129:
   VAR_8 = 180;
   break;
  }

  FUNC_2(VAR_4->drv_clk, VAR_8);
 }
}
