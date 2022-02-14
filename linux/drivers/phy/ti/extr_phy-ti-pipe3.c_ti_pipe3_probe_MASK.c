
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_pipe3 {scalar_t__ mode; int sata_refclk_enabled; struct phy* refclk; int settings; int dpll_map; struct device* dev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct pipe3_data {scalar_t__ mode; int settings; int dpll_map; } ;
struct phy_provider {int dummy; } ;
struct phy {int dummy; } ;
struct of_device_id {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct phy*) ;
 int FUNC_4 (struct device*,char*) ;
 struct ti_pipe3* FUNC_5 (struct device*,int,int ) ;
 struct phy_provider* FUNC_6 (struct device*,int ) ;
 struct phy* FUNC_7 (struct device*,int *,int *) ;
 struct of_device_id* FUNC_8 (int ,struct device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct phy*,struct ti_pipe3*) ;
 int FUNC_10 (struct platform_device*,struct ti_pipe3*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct ti_pipe3*) ;
 int FUNC_13 (struct ti_pipe3*) ;
 int FUNC_14 (struct ti_pipe3*) ;
 int FUNC_15 (struct ti_pipe3*) ;
 int VAR_6 ;
 int FUNC_16 (struct phy*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_7)
{
 struct ti_pipe3 *VAR_8;
 struct phy *VAR_9;
 struct phy_provider *VAR_10;
 struct device *VAR_11 = &VAR_7->dev;
 int VAR_12;
 const struct of_device_id *VAR_13;
 struct pipe3_data *VAR_14;

 VAR_8 = FUNC_5(VAR_11, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_13 = FUNC_8(VAR_6, VAR_11);
 if (!VAR_13)
  return -VAR_0;

 VAR_14 = (struct pipe3_data *)VAR_13->data;
 if (!VAR_14) {
  FUNC_4(VAR_11, "no driver data\n");
  return -VAR_0;
 }

 VAR_8->dev = VAR_11;
 VAR_8->mode = VAR_14->mode;
 VAR_8->dpll_map = VAR_14->dpll_map;
 VAR_8->settings = VAR_14->settings;

 VAR_12 = FUNC_13(VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_15(VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_14(VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_12(VAR_8);
 if (VAR_12)
  return VAR_12;

 FUNC_10(VAR_7, VAR_8);
 FUNC_11(VAR_11);




 if (VAR_8->mode == VAR_3) {
  if (!FUNC_0(VAR_8->refclk)) {
   FUNC_3(VAR_8->refclk);
   VAR_8->sata_refclk_enabled = 1;
  }
 }

 VAR_9 = FUNC_7(VAR_11, ((void*)0), &VAR_5);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 FUNC_9(VAR_9, VAR_8);

 FUNC_16(VAR_9);

 VAR_10 = FUNC_6(VAR_11, VAR_4);
 return FUNC_2(VAR_10);
}
