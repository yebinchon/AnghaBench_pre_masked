
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct TYPE_9__ {int pll; int wp; int core; int phy; int audio_playing_lock; int lock; struct platform_device* pdev; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_1__*,int,int *,int ,int ,char*,int *) ;
 int FUNC_3 (char*,int ) ;
 TYPE_4__ VAR_2 ;
 int FUNC_4 (struct platform_device*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_6 (struct platform_device*) ;
 int VAR_4 ;
 int FUNC_7 (struct platform_device*,int *) ;
 int FUNC_8 (struct platform_device*,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct platform_device*) ;
 int FUNC_11 (struct platform_device*) ;
 int FUNC_12 (struct platform_device*,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *) ;
 struct platform_device* FUNC_18 (struct device*) ;

__attribute__((used)) static int FUNC_19(struct device *VAR_5, struct device *VAR_6, void *VAR_7)
{
 struct platform_device *VAR_8 = FUNC_18(VAR_5);
 int VAR_9;
 int VAR_10;

 VAR_2.pdev = VAR_8;
 FUNC_1(&VAR_8->dev, &VAR_2);

 FUNC_13(&VAR_2.lock);
 FUNC_17(&VAR_2.audio_playing_lock);

 if (VAR_8->dev.of_node) {
  VAR_9 = FUNC_10(VAR_8);
  if (VAR_9)
   return VAR_9;
 }

 VAR_9 = FUNC_12(VAR_8, &VAR_2.wp);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_8(VAR_8, &VAR_2.pll, &VAR_2.wp);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_7(VAR_8, &VAR_2.phy);
 if (VAR_9)
  goto err;

 VAR_9 = FUNC_4(VAR_8, &VAR_2.core);
 if (VAR_9)
  goto err;

 VAR_10 = FUNC_14(VAR_8, 0);
 if (VAR_10 < 0) {
  FUNC_0("platform_get_irq failed\n");
  VAR_9 = -VAR_0;
  goto err;
 }

 VAR_9 = FUNC_2(&VAR_8->dev, VAR_10,
   ((void*)0), VAR_4,
   VAR_1, "OMAP HDMI", &VAR_2.wp);
 if (VAR_9) {
  FUNC_0("HDMI IRQ request failed\n");
  goto err;
 }

 FUNC_16(&VAR_8->dev);

 FUNC_6(VAR_8);

 VAR_9 = FUNC_5(&VAR_8->dev);
 if (VAR_9) {
  FUNC_0("Registering HDMI audio failed %d\n", VAR_9);
  FUNC_11(VAR_8);
  FUNC_15(&VAR_8->dev);
  return VAR_9;
 }

 FUNC_3("hdmi", VAR_3);

 return 0;
err:
 FUNC_9(&VAR_2.pll);
 return VAR_9;
}
