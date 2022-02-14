
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdes_am654 {void* pll_ok; void* pll_enable; void* rx0_enable; void* tx0_enable; void* por_en; void* cmu_ok_i_0; void* l1_master_cdn_o; void* config_version; void* cmu_master_cdn_o; struct device* dev; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,struct regmap*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(struct serdes_am654 *VAR_9)
{
 struct regmap *VAR_10 = VAR_9->regmap;
 struct device *VAR_11 = VAR_9->dev;

 VAR_9->cmu_master_cdn_o = FUNC_3(VAR_11, VAR_10,
             VAR_0);
 if (FUNC_0(VAR_9->cmu_master_cdn_o)) {
  FUNC_2(VAR_11, "CMU_MASTER_CDN_O reg field init failed\n");
  return FUNC_1(VAR_9->cmu_master_cdn_o);
 }

 VAR_9->config_version = FUNC_3(VAR_11, VAR_10,
           VAR_2);
 if (FUNC_0(VAR_9->config_version)) {
  FUNC_2(VAR_11, "CONFIG_VERSION reg field init failed\n");
  return FUNC_1(VAR_9->config_version);
 }

 VAR_9->l1_master_cdn_o = FUNC_3(VAR_11, VAR_10,
            VAR_3);
 if (FUNC_0(VAR_9->l1_master_cdn_o)) {
  FUNC_2(VAR_11, "L1_MASTER_CDN_O reg field init failed\n");
  return FUNC_1(VAR_9->l1_master_cdn_o);
 }

 VAR_9->cmu_ok_i_0 = FUNC_3(VAR_11, VAR_10,
       VAR_1);
 if (FUNC_0(VAR_9->cmu_ok_i_0)) {
  FUNC_2(VAR_11, "CMU_OK_I_0 reg field init failed\n");
  return FUNC_1(VAR_9->cmu_ok_i_0);
 }

 VAR_9->por_en = FUNC_3(VAR_11, VAR_10, VAR_6);
 if (FUNC_0(VAR_9->por_en)) {
  FUNC_2(VAR_11, "POR_EN reg field init failed\n");
  return FUNC_1(VAR_9->por_en);
 }

 VAR_9->tx0_enable = FUNC_3(VAR_11, VAR_10,
       VAR_8);
 if (FUNC_0(VAR_9->tx0_enable)) {
  FUNC_2(VAR_11, "TX0_ENABLE reg field init failed\n");
  return FUNC_1(VAR_9->tx0_enable);
 }

 VAR_9->rx0_enable = FUNC_3(VAR_11, VAR_10,
       VAR_7);
 if (FUNC_0(VAR_9->rx0_enable)) {
  FUNC_2(VAR_11, "RX0_ENABLE reg field init failed\n");
  return FUNC_1(VAR_9->rx0_enable);
 }

 VAR_9->pll_enable = FUNC_3(VAR_11, VAR_10,
       VAR_4);
 if (FUNC_0(VAR_9->pll_enable)) {
  FUNC_2(VAR_11, "PLL_ENABLE reg field init failed\n");
  return FUNC_1(VAR_9->pll_enable);
 }

 VAR_9->pll_ok = FUNC_3(VAR_11, VAR_10, VAR_5);
 if (FUNC_0(VAR_9->pll_ok)) {
  FUNC_2(VAR_11, "PLL_OK reg field init failed\n");
  return FUNC_1(VAR_9->pll_ok);
 }

 return 0;
}
