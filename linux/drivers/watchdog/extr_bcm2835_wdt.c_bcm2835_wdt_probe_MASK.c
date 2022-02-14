
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct bcm2835_wdt {int base; int lock; } ;
struct bcm2835_pm {int base; } ;
struct TYPE_8__ {int status; struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 struct bcm2835_wdt* VAR_4 ;
 scalar_t__ FUNC_0 (struct bcm2835_wdt*) ;
 TYPE_1__ VAR_5 ;
 struct bcm2835_pm* FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 struct bcm2835_wdt* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int ,struct device*) ;
 int FUNC_8 (TYPE_1__*,struct bcm2835_wdt*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_9)
{
 struct bcm2835_pm *VAR_10 = FUNC_1(VAR_9->dev.parent);
 struct device *VAR_11 = &VAR_9->dev;
 struct bcm2835_wdt *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_3(VAR_11, sizeof(struct bcm2835_wdt), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 FUNC_6(&VAR_12->lock);

 VAR_12->base = VAR_10->base;

 FUNC_8(&VAR_5, VAR_12);
 FUNC_7(&VAR_5, VAR_6, VAR_11);
 FUNC_9(&VAR_5, VAR_7);
 VAR_5.parent = VAR_11;
 if (FUNC_0(VAR_12)) {
  FUNC_5(VAR_2, &VAR_5.status);
 }

 FUNC_10(&VAR_5, 128);

 FUNC_11(&VAR_5);
 VAR_13 = FUNC_4(VAR_11, &VAR_5);
 if (VAR_13)
  return VAR_13;

 if (VAR_8 == ((void*)0)) {
  VAR_8 = VAR_3;
  VAR_4 = VAR_12;
 }

 FUNC_2(VAR_11, "Broadcom BCM2835 watchdog timer");
 return 0;
}
