
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct lbs_private {int power_up_on_resume; scalar_t__ wol_criteria; scalar_t__ fw_ready; } ;
struct if_sdio_card {struct lbs_private* priv; } ;
struct device {int dummy; } ;
typedef int mmc_pm_flag_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct sdio_func* FUNC_2 (struct device*) ;
 int FUNC_3 (struct if_sdio_card*) ;
 int FUNC_4 (struct lbs_private*) ;
 int FUNC_5 (struct lbs_private*) ;
 int FUNC_6 (struct sdio_func*) ;
 struct if_sdio_card* FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (struct sdio_func*,int) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_4)
{
 struct sdio_func *VAR_5 = FUNC_2(VAR_4);
 struct if_sdio_card *VAR_6 = FUNC_7(VAR_5);
 struct lbs_private *VAR_7 = VAR_6->priv;
 int VAR_8;

 mmc_pm_flag_t VAR_9 = FUNC_8(VAR_5);
 VAR_7->power_up_on_resume = 0;



 if (!FUNC_4(VAR_7)) {
  if (VAR_7->fw_ready) {
   VAR_7->power_up_on_resume = 1;
   FUNC_3(VAR_6);
  }

  return 0;
 }

 FUNC_1(VAR_4, "%s: suspend: PM flags = 0x%x\n",
   FUNC_6(VAR_5), VAR_9);




 if (VAR_7->wol_criteria == VAR_0) {
  FUNC_1(VAR_4, "Suspend without wake params -- powering down card\n");
  if (VAR_7->fw_ready) {
   VAR_8 = FUNC_5(VAR_7);
   if (VAR_8)
    return VAR_8;

   VAR_7->power_up_on_resume = 1;
   FUNC_3(VAR_6);
  }

  return 0;
 }

 if (!(VAR_9 & VAR_2)) {
  FUNC_0(VAR_4, "%s: cannot remain alive while host is suspended\n",
   FUNC_6(VAR_5));
  return -VAR_1;
 }

 VAR_8 = FUNC_9(VAR_5, VAR_2);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8)
  return VAR_8;

 return FUNC_9(VAR_5, VAR_3);
}
