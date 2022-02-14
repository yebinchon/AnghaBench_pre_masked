
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct bcm_kona_wdt {int resolution; int base; int lock; } ;
struct TYPE_7__ {struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct bcm_kona_wdt*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*,...) ;
 struct bcm_kona_wdt* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct device*,TYPE_1__*) ;
 int FUNC_9 (struct platform_device*,struct bcm_kona_wdt*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*,struct bcm_kona_wdt*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct bcm_kona_wdt *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_10(&VAR_7->lock);

 VAR_7->base = FUNC_7(VAR_5, 0);
 if (FUNC_0(VAR_7->base))
  return -VAR_0;

 VAR_7->resolution = VAR_3;
 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8) {
  FUNC_5(VAR_6, "Failed to set resolution (error: %d)", VAR_8);
  return VAR_8;
 }

 FUNC_9(VAR_5, VAR_7);
 FUNC_11(&VAR_4, VAR_7);
 VAR_4.parent = VAR_6;

 VAR_8 = FUNC_3(&VAR_4, 0);
 if (VAR_8) {
  FUNC_5(VAR_6, "Failed set watchdog timeout");
  return VAR_8;
 }

 FUNC_12(&VAR_4);
 FUNC_13(&VAR_4);
 VAR_8 = FUNC_8(VAR_6, &VAR_4);
 if (VAR_8)
  return VAR_8;

 FUNC_1(VAR_5);
 FUNC_4(VAR_6, "Broadcom Kona Watchdog Timer");

 return 0;
}
