
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_am654_data {int otap_del_sel; int flags; int trm_icp; int strb_sel; int drv_strength; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,int*) ;
 int FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_7,
     struct sdhci_am654_data *VAR_8)
{
 struct device *VAR_9 = &VAR_7->dev;
 int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_9, "ti,otap-del-sel",
           &VAR_8->otap_del_sel);
 if (VAR_11)
  return VAR_11;

 if (VAR_8->flags & VAR_0) {
  VAR_11 = FUNC_1(VAR_9, "ti,trm-icp",
            &VAR_8->trm_icp);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_1(VAR_9, "ti,driver-strength-ohm",
            &VAR_10);
  if (VAR_11)
   return VAR_11;

  switch (VAR_10) {
  case 50:
   VAR_8->drv_strength = VAR_4;
   break;
  case 33:
   VAR_8->drv_strength = VAR_2;
   break;
  case 66:
   VAR_8->drv_strength = VAR_5;
   break;
  case 100:
   VAR_8->drv_strength = VAR_1;
   break;
  case 40:
   VAR_8->drv_strength = VAR_3;
   break;
  default:
   FUNC_0(VAR_9, "Invalid driver strength\n");
   return -VAR_6;
  }
 }

 FUNC_1(VAR_9, "ti,strobe-sel", &VAR_8->strb_sel);

 FUNC_2(VAR_7);

 return 0;
}
