
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int touch_bit; int reset_bus; struct mxc_w1_device* data; } ;
struct mxc_w1_device {scalar_t__ clk; TYPE_1__ bus_master; scalar_t__ regs; } ;


 unsigned int FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 unsigned long FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,char*,...) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 struct mxc_w1_device* FUNC_8 (int *,int,int ) ;
 scalar_t__ FUNC_9 (struct platform_device*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (struct platform_device*,struct mxc_w1_device*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct mxc_w1_device *VAR_8;
 unsigned long VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_8 = FUNC_8(&VAR_7->dev, sizeof(struct mxc_w1_device),
       VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->clk = FUNC_7(&VAR_7->dev, ((void*)0));
 if (FUNC_1(VAR_8->clk))
  return FUNC_2(VAR_8->clk);

 VAR_11 = FUNC_5(VAR_8->clk);
 if (VAR_11)
  return VAR_11;

 VAR_9 = FUNC_4(VAR_8->clk);
 if (VAR_9 < 10000000)
  FUNC_6(&VAR_7->dev,
    "Low clock frequency causes improper function\n");

 VAR_10 = FUNC_0(VAR_9, 1000000);
 VAR_9 /= VAR_10;
 if ((VAR_9 < 980000) || (VAR_9 > 1020000))
  FUNC_6(&VAR_7->dev,
    "Incorrect time base frequency %lu Hz\n", VAR_9);

 VAR_8->regs = FUNC_9(VAR_7, 0);
 if (FUNC_1(VAR_8->regs)) {
  VAR_11 = FUNC_2(VAR_8->regs);
  goto out_disable_clk;
 }


 FUNC_12(VAR_3, VAR_8->regs + VAR_2);
 FUNC_12(0, VAR_8->regs + VAR_2);

 FUNC_12(VAR_10 - 1, VAR_8->regs + VAR_4);

 VAR_8->bus_master.data = VAR_8;
 VAR_8->bus_master.reset_bus = VAR_5;
 VAR_8->bus_master.touch_bit = VAR_6;

 FUNC_10(VAR_7, VAR_8);

 VAR_11 = FUNC_11(&VAR_8->bus_master);
 if (VAR_11)
  goto out_disable_clk;

 return 0;

out_disable_clk:
 FUNC_3(VAR_8->clk);
 return VAR_11;
}
