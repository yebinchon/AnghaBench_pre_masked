
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct alcor_sdmmc_host {int dev; struct alcor_pci_priv* alcor_pci; } ;
struct alcor_pll_conf {unsigned int min_div; unsigned int max_div; int clk_src_reg; int clk_src_freq; } ;
struct alcor_pci_priv {int dummy; } ;


 int FUNC_0 (struct alcor_pll_conf*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ,unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 struct alcor_pll_conf* VAR_2 ;
 int FUNC_3 (struct alcor_pci_priv*,int,int ) ;
 int FUNC_4 (int ,char*,unsigned int,int,int,int) ;

__attribute__((used)) static void FUNC_5(struct alcor_sdmmc_host *VAR_3, unsigned int VAR_4)
{
 struct alcor_pci_priv *VAR_5 = VAR_3->alcor_pci;
 int VAR_6, VAR_7 = 0x7fffffff, VAR_8 = 0;
 u16 VAR_9 = 0;
 u8 VAR_10 = 0;

 if (VAR_4 == 0) {
  FUNC_3(VAR_5, 0, VAR_1);
  return;
 }

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  unsigned int VAR_11, VAR_12;
  const struct alcor_pll_conf *VAR_13 = &VAR_2[VAR_6];

  VAR_11 = FUNC_1(VAR_13->clk_src_freq, VAR_4);
  if (VAR_13->min_div > VAR_11 || VAR_11 > VAR_13->max_div)
   continue;

  VAR_8 = FUNC_1(VAR_13->clk_src_freq, VAR_11);
  VAR_12 = FUNC_2(VAR_4 - VAR_8);

  if (VAR_12 < VAR_7) {
   VAR_7 = VAR_12;
   VAR_9 = VAR_13->clk_src_reg;
   VAR_10 = VAR_11;
  }
 }

 VAR_9 |= ((VAR_10 - 1) << 8);
 VAR_9 |= VAR_0;

 FUNC_4(VAR_3->dev, "set freq %d cal freq %d, use div %d, mod %x\n",
   VAR_4, VAR_8, VAR_10, VAR_9);

 FUNC_3(VAR_5, VAR_9, VAR_1);

}
