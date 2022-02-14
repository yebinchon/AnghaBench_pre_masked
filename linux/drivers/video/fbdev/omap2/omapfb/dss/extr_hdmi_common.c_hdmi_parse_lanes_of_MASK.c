
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct property {int dummy; } ;
struct platform_device {int dev; } ;
struct hdmi_phy_data {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct hdmi_phy_data*,int const*) ;
 struct property* FUNC_4 (struct device_node*,char*,int*) ;
 int FUNC_5 (struct device_node*,char*,int*,int) ;

int FUNC_6(struct platform_device *VAR_1, struct device_node *VAR_2,
 struct hdmi_phy_data *VAR_3)
{
 struct property *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_4(VAR_2, "lanes", &VAR_6);
 if (VAR_4) {
  u32 VAR_7[8];

  if (VAR_6 / sizeof(u32) != FUNC_0(VAR_7)) {
   FUNC_2(&VAR_1->dev, "bad number of lanes\n");
   return -VAR_0;
  }

  VAR_5 = FUNC_5(VAR_2, "lanes", VAR_7,
   FUNC_0(VAR_7));
  if (VAR_5) {
   FUNC_2(&VAR_1->dev, "failed to read lane data\n");
   return VAR_5;
  }

  VAR_5 = FUNC_3(VAR_3, VAR_7);
  if (VAR_5) {
   FUNC_2(&VAR_1->dev, "failed to parse lane data\n");
   return VAR_5;
  }
 } else {
  static const u32 VAR_8[] = { 0, 1, 2, 3, 4, 5, 6, 7 };

  VAR_5 = FUNC_3(VAR_3, VAR_8);
  if (FUNC_1(VAR_5)) {
   FUNC_2(&VAR_1->dev, "failed to parse lane data\n");
   return VAR_5;
  }
 }

 return 0;
}
