
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_6__ {int entity; } ;
struct TYPE_5__ {int num_data_lanes; } ;
struct csi_state {scalar_t__ irq; int lock; TYPE_2__ mipi_sd; int clk_frequency; scalar_t__ wrap_clk; int hs_settle; TYPE_1__ bus; int events; struct device* dev; int regs; struct platform_device* pdev; int slock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int ,int ,int,int ) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,struct resource*) ;
 struct csi_state* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int,int ,int ,int ,struct csi_state*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct csi_state*) ;
 int FUNC_11 (struct csi_state*) ;
 int FUNC_12 (struct csi_state*) ;
 int FUNC_13 (struct csi_state*) ;
 int FUNC_14 (struct csi_state*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_15 (struct platform_device*,struct csi_state*) ;
 int FUNC_16 (struct csi_state*) ;
 int FUNC_17 (struct csi_state*) ;
 int FUNC_18 (struct device*,int) ;
 int FUNC_19 (TYPE_2__*,struct platform_device*,int *) ;
 int VAR_5 ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (struct platform_device*,int ) ;
 struct resource* FUNC_23 (struct platform_device*,int ,int ) ;
 int FUNC_24 (struct platform_device*,TYPE_2__*) ;
 int FUNC_25 (struct device*) ;
 int FUNC_26 (struct device*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct resource *VAR_8;
 struct csi_state *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_6(VAR_7, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_27(&VAR_9->slock);

 VAR_9->pdev = VAR_6;
 VAR_9->dev = VAR_7;

 VAR_10 = FUNC_15(VAR_6, VAR_9);
 if (VAR_10 < 0) {
  FUNC_2(VAR_7, "Failed to parse device tree: %d\n", VAR_10);
  return VAR_10;
 }

 FUNC_16(VAR_9);
 FUNC_17(VAR_9);

 VAR_8 = FUNC_23(VAR_6, VAR_2, 0);
 VAR_9->regs = FUNC_5(VAR_7, VAR_8);
 if (FUNC_0(VAR_9->regs))
  return FUNC_1(VAR_9->regs);

 VAR_9->irq = FUNC_22(VAR_6, 0);
 if (VAR_9->irq < 0)
  return VAR_9->irq;

 VAR_10 = FUNC_12(VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_11(VAR_9);
 if (VAR_10 < 0) {
  FUNC_2(VAR_9->dev, "failed to enable clocks: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_7(VAR_7, VAR_9->irq, VAR_4,
          0, FUNC_4(VAR_7), VAR_9);
 if (VAR_10) {
  FUNC_2(VAR_7, "Interrupt request failed\n");
  goto disable_clock;
 }

 FUNC_24(VAR_6, &VAR_9->mipi_sd);

 FUNC_21(&VAR_9->lock);
 VAR_10 = FUNC_19(&VAR_9->mipi_sd, VAR_6,
        &VAR_5);
 if (VAR_10 < 0)
  goto disable_clock;

 FUNC_9(VAR_9->events, VAR_3, sizeof(VAR_9->events));

 FUNC_14(VAR_9);
 FUNC_25(VAR_7);
 if (!FUNC_26(VAR_7)) {
  VAR_10 = FUNC_18(VAR_7, 1);
  if (VAR_10 < 0)
   goto unregister_all;
 }

 FUNC_3(&VAR_6->dev, "lanes: %d, hs_settle: %d, wclk: %d, freq: %u\n",
   VAR_9->bus.num_data_lanes, VAR_9->hs_settle,
   VAR_9->wrap_clk ? 1 : 0, VAR_9->clk_frequency);

 return 0;

unregister_all:
 FUNC_13(VAR_9);
 FUNC_8(&VAR_9->mipi_sd.entity);
 FUNC_28(&VAR_9->mipi_sd);
disable_clock:
 FUNC_10(VAR_9);
 FUNC_20(&VAR_9->lock);

 return VAR_10;
}
