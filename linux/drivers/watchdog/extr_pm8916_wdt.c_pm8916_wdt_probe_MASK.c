
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pretimeout; int timeout; int max_timeout; int min_timeout; struct device* parent; int * ops; int * info; } ;
struct pm8916_wdt {TYPE_1__ wdev; scalar_t__ baseaddr; int regmap; } ;
struct device {struct device* parent; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct device*,char*,scalar_t__*) ;
 struct pm8916_wdt* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int,int ,int ,char*,struct pm8916_wdt*) ;
 int FUNC_5 (struct device*,TYPE_1__*) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int ,scalar_t__,int ) ;
 int FUNC_9 (TYPE_1__*,int ,struct device*) ;
 int FUNC_10 (TYPE_1__*,struct pm8916_wdt*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_13)
{
 struct device *VAR_14 = &VAR_13->dev;
 struct pm8916_wdt *VAR_15;
 struct device *VAR_16;
 int VAR_17, VAR_18;

 VAR_15 = FUNC_3(VAR_14, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_1;

 VAR_16 = VAR_14->parent;







 VAR_15->regmap = FUNC_1(VAR_16->parent, ((void*)0));
 if (!VAR_15->regmap) {
  FUNC_0(VAR_14, "failed to locate regmap\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_2(VAR_16, "reg", &VAR_15->baseaddr);
 if (VAR_17) {
  FUNC_0(VAR_14, "failed to get pm8916-pon address\n");
  return VAR_17;
 }

 VAR_18 = FUNC_6(VAR_13, 0);
 if (VAR_18 > 0) {
  VAR_17 = FUNC_4(VAR_14, VAR_18, VAR_10, 0,
           "pm8916_wdt", VAR_15);
  if (VAR_17)
   return VAR_17;

  VAR_15->wdev.info = &VAR_12;
 } else {
  if (VAR_18 == -VAR_2)
   return -VAR_2;

  VAR_15->wdev.info = &VAR_9;
 }


 VAR_17 = FUNC_8(VAR_15->regmap,
      VAR_15->baseaddr + VAR_7,
      VAR_8);
 if (VAR_17) {
  FUNC_0(VAR_14, "failed configure watchdog\n");
  return VAR_17;
 }

 VAR_15->wdev.ops = &VAR_11,
 VAR_15->wdev.parent = VAR_14;
 VAR_15->wdev.min_timeout = VAR_6;
 VAR_15->wdev.max_timeout = VAR_5;
 VAR_15->wdev.timeout = VAR_4;
 VAR_15->wdev.pretimeout = 0;
 FUNC_10(&VAR_15->wdev, VAR_15);

 FUNC_9(&VAR_15->wdev, 0, VAR_14);
 FUNC_7(&VAR_15->wdev);

 return FUNC_5(VAR_14, &VAR_15->wdev);
}
