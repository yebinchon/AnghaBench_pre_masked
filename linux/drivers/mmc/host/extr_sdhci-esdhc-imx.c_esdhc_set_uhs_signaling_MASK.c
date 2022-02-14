
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int clock; TYPE_1__* ops; scalar_t__ ioaddr; } ;
struct esdhc_platform_data {int delay_line; } ;
struct pltfm_imx_data {int is_ddr; struct esdhc_platform_data boarddata; } ;
struct TYPE_2__ {int (* set_clock ) (struct sdhci_host*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sdhci_host*,unsigned int) ;
 int FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct pltfm_imx_data*) ;
 int FUNC_4 (scalar_t__) ;
 struct pltfm_imx_data* FUNC_5 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_6 (struct sdhci_host*) ;
 int FUNC_7 (struct sdhci_host*,int ) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct sdhci_host *VAR_6, unsigned VAR_7)
{
 u32 VAR_8;
 struct sdhci_pltfm_host *VAR_9 = FUNC_6(VAR_6);
 struct pltfm_imx_data *VAR_10 = FUNC_5(VAR_9);
 struct esdhc_platform_data *VAR_11 = &VAR_10->boarddata;


 VAR_8 = FUNC_4(VAR_6->ioaddr + VAR_3);
 VAR_8 &= ~(VAR_4 | VAR_5);
 VAR_10->is_ddr = 0;

 switch (VAR_7) {
 case 130:
 case 129:
 case 128:
 case 131:
 case 135:
 case 134:
  FUNC_8(VAR_8, VAR_6->ioaddr + VAR_3);
  break;
 case 132:
 case 136:
  VAR_8 |= VAR_4;
  FUNC_8(VAR_8, VAR_6->ioaddr + VAR_3);
  VAR_10->is_ddr = 1;
  if (VAR_11->delay_line) {
   u32 VAR_12;
   VAR_12 = VAR_11->delay_line <<
    VAR_2 |
    (1 << VAR_1);
   if (FUNC_3(VAR_10))
    VAR_12 <<= 1;
   FUNC_8(VAR_12, VAR_6->ioaddr + VAR_0);
  }
  break;
 case 133:
  VAR_8 |= VAR_4 | VAR_5;
  FUNC_8(VAR_8, VAR_6->ioaddr + VAR_3);
  VAR_10->is_ddr = 1;

  VAR_6->ops->set_clock(VAR_6, VAR_6->clock);
  FUNC_2(VAR_6);
  break;
 case 137:
 default:
  FUNC_1(VAR_6);
  break;
 }

 FUNC_0(VAR_6, VAR_7);
}
