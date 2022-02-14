
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*,int,int*) ;
 struct regmap* VAR_11 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct regmap*,unsigned int,int ,int) ;
 int FUNC_7 (struct regmap*,int,int) ;
 int FUNC_8 () ;
 int VAR_12 ;
 int VAR_13 ;
 struct regmap* FUNC_9 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_14)
{
 int VAR_15;
 int VAR_16;
 u32 VAR_17;
 unsigned int VAR_18;
 u32 VAR_19;
 struct regmap *VAR_20;
 struct device *VAR_21 = &VAR_14->dev;
 struct device_node *VAR_22 = VAR_21->of_node;

 if (!VAR_22)
  return -VAR_1;


 VAR_11 = FUNC_9(VAR_22, "ti,syscon-pll");
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_20 = FUNC_9(VAR_22, "ti,syscon-dev");
 if (FUNC_0(VAR_20))
  return FUNC_1(VAR_20);

 VAR_16 = FUNC_4(VAR_22, "ti,syscon-pll", 1, &VAR_13);
 if (VAR_16) {
  FUNC_2(VAR_21, "couldn't read the reset pll offset!\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_4(VAR_22, "ti,syscon-dev", 1, &VAR_19);
 if (VAR_16) {
  FUNC_2(VAR_21, "couldn't read the rsmux offset!\n");
  return -VAR_0;
 }


 VAR_17 = FUNC_3(VAR_22, "ti,soft-reset");
 VAR_17 = VAR_17 ? VAR_5 : VAR_4;

 VAR_16 = FUNC_8();
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_7(VAR_11, VAR_13 + VAR_3, VAR_17);
 if (VAR_16)
  return VAR_16;


 VAR_16 = FUNC_7(VAR_11, VAR_13 + VAR_6, 0);
 if (VAR_16)
  return VAR_16;


 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
  VAR_16 = FUNC_4(VAR_22, "ti,wdt-list", VAR_15, &VAR_17);
  if (VAR_16 == -VAR_2 && !VAR_15) {
   FUNC_2(VAR_21, "ti,wdt-list property has to contain at"
    "least one entry\n");
   return -VAR_0;
  } else if (VAR_16) {
   break;
  }

  if (VAR_17 >= VAR_10) {
   FUNC_2(VAR_21, "ti,wdt-list property can contain "
    "only numbers < 4\n");
   return -VAR_0;
  }

  VAR_18 = VAR_19 + VAR_17 * 4;

  VAR_16 = FUNC_6(VAR_20, VAR_18, VAR_8,
      VAR_9 |
      VAR_7);
  if (VAR_16)
   return VAR_16;
 }

 VAR_16 = FUNC_5(&VAR_12);
 if (VAR_16)
  FUNC_2(VAR_21, "cannot register restart handler (err=%d)\n", VAR_16);

 return VAR_16;
}
