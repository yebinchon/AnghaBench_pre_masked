
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_ios {unsigned int clock; int timing; int bus_width; } ;
struct dw_mci_exynos_priv_data {int ddr_timing; int sdr_timing; int ciu_div; int tuned_sample; int hs400_timing; } ;
struct dw_mci {struct dw_mci_exynos_priv_data* priv; } ;


 int VAR_0 ;





 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct dw_mci*,unsigned int) ;
 int FUNC_2 (struct dw_mci*,int) ;
 int FUNC_3 (struct dw_mci*,int) ;

__attribute__((used)) static void FUNC_4(struct dw_mci *VAR_1, struct mmc_ios *VAR_2)
{
 struct dw_mci_exynos_priv_data *VAR_3 = VAR_1->priv;
 unsigned int VAR_4 = VAR_2->clock;
 u32 VAR_5 = VAR_2->timing, VAR_6;

 switch (VAR_5) {
 case 131:

  VAR_6 = FUNC_0(
    VAR_3->hs400_timing, VAR_3->tuned_sample);
  VAR_4 <<= 1;
  break;
 case 132:
  VAR_6 = VAR_3->ddr_timing;

  if (VAR_2->bus_width == VAR_0)
   VAR_4 <<= 1;
  break;
 case 129:
 case 128:
  VAR_6 = (VAR_3->sdr_timing & 0xfff8ffff) |
   (VAR_3->ciu_div << 16);
  break;
 case 130:
  VAR_6 = (VAR_3->ddr_timing & 0xfff8ffff) |
   (VAR_3->ciu_div << 16);
  break;
 default:
  VAR_6 = VAR_3->sdr_timing;
 }


 FUNC_3(VAR_1, VAR_6);


 FUNC_2(VAR_1, VAR_5);


 FUNC_1(VAR_1, VAR_4);
}
