
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int notifier_call; } ;
struct TYPE_4__ {int var; } ;
struct sa1100fb_info {TYPE_3__ freq_transition; int map_dma; int map_cpu; int map_size; int dev; TYPE_1__ fb; int clk; int base; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ,int ,char*) ;
 int FUNC_7 (int *,struct resource*) ;
 int FUNC_8 (int *,int,int ,int ,char*,struct sa1100fb_info*) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct sa1100fb_info*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *,TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct sa1100fb_info* FUNC_16 (int *) ;
 int FUNC_17 (struct sa1100fb_info*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_8)
{
 struct sa1100fb_info *VAR_9;
 struct resource *VAR_10;
 int VAR_11, VAR_12;

 if (!FUNC_4(&VAR_8->dev)) {
  FUNC_3(&VAR_8->dev, "no platform LCD data\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_11(VAR_8, 0);
 if (VAR_12 < 0)
  return -VAR_1;

 VAR_9 = FUNC_16(&VAR_8->dev);
 if (!VAR_9)
  return -VAR_2;

 VAR_10 = FUNC_12(VAR_8, VAR_4, 0);
 VAR_9->base = FUNC_7(&VAR_8->dev, VAR_10);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 VAR_9->clk = FUNC_5(&VAR_8->dev, ((void*)0));
 if (FUNC_0(VAR_9->clk))
  return FUNC_1(VAR_9->clk);

 VAR_11 = FUNC_8(&VAR_8->dev, VAR_12, VAR_7, 0,
          "LCD", VAR_9);
 if (VAR_11) {
  FUNC_3(&VAR_8->dev, "request_irq failed: %d\n", VAR_11);
  return VAR_11;
 }

 if (FUNC_10()) {
  VAR_11 = FUNC_6(&VAR_8->dev, VAR_5,
   VAR_3, "display enable");
  if (VAR_11)
   return VAR_11;
 }


 VAR_11 = FUNC_17(VAR_9);
 if (VAR_11)
  return VAR_11;





 FUNC_15(&VAR_9->fb.var, &VAR_9->fb);

 FUNC_13(VAR_8, VAR_9);

 VAR_11 = FUNC_14(&VAR_9->fb);
 if (VAR_11 < 0) {
  FUNC_9(VAR_9->dev, VAR_9->map_size, VAR_9->map_cpu,
       VAR_9->map_dma);
  return VAR_11;
 }







 return 0;
}
