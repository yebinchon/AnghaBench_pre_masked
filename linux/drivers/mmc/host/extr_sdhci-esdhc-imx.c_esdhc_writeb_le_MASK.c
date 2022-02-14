
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {scalar_t__ ioaddr; } ;
struct pltfm_imx_data {scalar_t__ is_ddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;

 int FUNC_0 (struct sdhci_host*,int,int,int const) ;
 scalar_t__ FUNC_1 (struct pltfm_imx_data*) ;
 int FUNC_2 (struct pltfm_imx_data*) ;
 int FUNC_3 (scalar_t__) ;
 struct pltfm_imx_data* FUNC_4 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct sdhci_host *VAR_10, u8 VAR_11, int VAR_12)
{
 struct sdhci_pltfm_host *VAR_13 = FUNC_5(VAR_10);
 struct pltfm_imx_data *VAR_14 = FUNC_4(VAR_13);
 u32 VAR_15 = 0;
 u32 VAR_16;

 switch (VAR_12) {
 case 129:




  return;
 case 130:

  VAR_15 = VAR_11 & VAR_7;

  VAR_15 |= VAR_2;

  if (!FUNC_2(VAR_14)) {

   VAR_15 |= (VAR_11 & VAR_6) << 5;
  }







  VAR_16 = 0xffff & ~(VAR_0 | VAR_1);

  FUNC_0(VAR_10, VAR_16, VAR_15, VAR_12);
  return;
 case 128:
  if (VAR_11 & VAR_9)
   VAR_15 = FUNC_3(VAR_10->ioaddr + 130);
  break;
 }
 FUNC_0(VAR_10, 0xff, VAR_11, VAR_12);

 if (VAR_12 == 128) {
  if (VAR_11 & VAR_8) {
   FUNC_0(VAR_10, 0x7, 0x7, VAR_5);




   if (FUNC_1(VAR_14)) {



    VAR_15 = FUNC_3(VAR_10->ioaddr + VAR_3);
    FUNC_6(VAR_15 & VAR_4,
      VAR_10->ioaddr + VAR_3);
    VAR_14->is_ddr = 0;
   }
  } else if (VAR_11 & VAR_9) {





   FUNC_0(VAR_10, 0xff, VAR_15,
     130);
  }
 }
}
