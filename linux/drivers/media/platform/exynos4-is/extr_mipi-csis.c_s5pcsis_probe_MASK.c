
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {struct csis_drvdata* data; } ;
struct TYPE_13__ {int function; } ;
struct TYPE_11__ {TYPE_6__ entity; int flags; int name; int owner; } ;
struct TYPE_10__ {int height; int width; int code; } ;
struct csis_state {scalar_t__ num_lanes; scalar_t__ max_num_lanes; scalar_t__ irq; int index; int * clock; TYPE_2__ sd; scalar_t__ clk_frequency; int wclk_ext; int hs_settle; int events; TYPE_7__* pads; TYPE_1__ format; TYPE_4__* csis_fmt; TYPE_9__* supplies; int regs; int phy; int interrupt_mask; struct platform_device* pdev; int slock; int lock; } ;
struct csis_drvdata {int interrupt_mask; } ;
struct TYPE_15__ {int supply; } ;
struct TYPE_14__ {int flags; } ;
struct TYPE_12__ {int code; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int * VAR_17 ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,char*,...) ;
 int FUNC_8 (struct device*,char*,scalar_t__,int ,int ,scalar_t__) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*,struct resource*) ;
 struct csis_state* FUNC_11 (struct device*,int,int ) ;
 int FUNC_12 (struct device*,char*) ;
 int FUNC_13 (struct device*,int,TYPE_9__*) ;
 int FUNC_14 (struct device*,int,int ,int ,int ,struct csis_state*) ;
 int FUNC_15 (TYPE_6__*) ;
 int FUNC_16 (TYPE_6__*,int ,TYPE_7__*) ;
 int FUNC_17 (int ,int ,int) ;
 int FUNC_18 (int *) ;
 struct of_device_id* FUNC_19 (int ,int ) ;
 scalar_t__ FUNC_20 (struct platform_device*,int ) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int ) ;
 int FUNC_22 (struct platform_device*,TYPE_2__*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct csis_state*) ;
 int FUNC_26 (struct csis_state*) ;
 int VAR_18 ;
 TYPE_4__* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_27 (struct platform_device*,struct csis_state*) ;
 int FUNC_28 (struct device*,int) ;
 int VAR_22 ;
 int FUNC_29 (int ,int,char*,char*,int) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (TYPE_2__*,struct platform_device*) ;
 int FUNC_32 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_33(struct platform_device *VAR_23)
{
 const struct of_device_id *VAR_24;
 const struct csis_drvdata *VAR_25;
 struct device *VAR_26 = &VAR_23->dev;
 struct resource *VAR_27;
 struct csis_state *VAR_28;
 int VAR_29 = -VAR_7;
 int VAR_30;

 VAR_28 = FUNC_11(VAR_26, sizeof(*VAR_28), VAR_8);
 if (!VAR_28)
  return -VAR_7;

 FUNC_18(&VAR_28->lock);
 FUNC_30(&VAR_28->slock);
 VAR_28->pdev = VAR_23;

 VAR_24 = FUNC_19(VAR_21, VAR_26->of_node);
 if (FUNC_2(VAR_24 == ((void*)0)))
  return -VAR_6;

 VAR_25 = VAR_24->data;
 VAR_28->interrupt_mask = VAR_25->interrupt_mask;

 VAR_29 = FUNC_27(VAR_23, VAR_28);
 if (VAR_29 < 0)
  return VAR_29;

 if (VAR_28->num_lanes == 0 || VAR_28->num_lanes > VAR_28->max_num_lanes) {
  FUNC_7(VAR_26, "Unsupported number of data lanes: %d (max. %d)\n",
   VAR_28->num_lanes, VAR_28->max_num_lanes);
  return -VAR_6;
 }

 VAR_28->phy = FUNC_12(VAR_26, "csis");
 if (FUNC_0(VAR_28->phy))
  return FUNC_1(VAR_28->phy);

 VAR_27 = FUNC_21(VAR_23, VAR_9, 0);
 VAR_28->regs = FUNC_10(VAR_26, VAR_27);
 if (FUNC_0(VAR_28->regs))
  return FUNC_1(VAR_28->regs);

 VAR_28->irq = FUNC_20(VAR_23, 0);
 if (VAR_28->irq < 0)
  return VAR_28->irq;

 for (VAR_30 = 0; VAR_30 < VAR_1; VAR_30++)
  VAR_28->supplies[VAR_30].supply = VAR_17[VAR_30];

 VAR_29 = FUNC_13(VAR_26, VAR_1,
     VAR_28->supplies);
 if (VAR_29)
  return VAR_29;

 VAR_29 = FUNC_25(VAR_28);
 if (VAR_29 < 0)
  return VAR_29;

 if (VAR_28->clk_frequency)
  VAR_29 = FUNC_5(VAR_28->clock[VAR_0],
       VAR_28->clk_frequency);
 else
  FUNC_6(VAR_26, "No clock frequency specified!\n");
 if (VAR_29 < 0)
  goto e_clkput;

 VAR_29 = FUNC_4(VAR_28->clock[VAR_0]);
 if (VAR_29 < 0)
  goto e_clkput;

 VAR_29 = FUNC_14(VAR_26, VAR_28->irq, VAR_20,
          0, FUNC_9(VAR_26), VAR_28);
 if (VAR_29) {
  FUNC_7(VAR_26, "Interrupt request failed\n");
  goto e_clkdis;
 }

 FUNC_32(&VAR_28->sd, &VAR_22);
 VAR_28->sd.owner = VAR_15;
 FUNC_29(VAR_28->sd.name, sizeof(VAR_28->sd.name), "%s.%d",
   VAR_5, VAR_28->index);
 VAR_28->sd.flags |= VAR_16;
 VAR_28->csis_fmt = &VAR_19[0];

 VAR_28->format.code = VAR_19[0].code;
 VAR_28->format.width = VAR_14;
 VAR_28->format.height = VAR_13;

 VAR_28->sd.entity.function = VAR_10;
 VAR_28->pads[VAR_3].flags = VAR_11;
 VAR_28->pads[VAR_4].flags = VAR_12;
 VAR_29 = FUNC_16(&VAR_28->sd.entity,
    VAR_2, VAR_28->pads);
 if (VAR_29 < 0)
  goto e_clkdis;


 FUNC_31(&VAR_28->sd, VAR_23);


 FUNC_22(VAR_23, &VAR_28->sd);
 FUNC_17(VAR_28->events, VAR_18, sizeof(VAR_28->events));

 FUNC_23(VAR_26);
 if (!FUNC_24(VAR_26)) {
  VAR_29 = FUNC_28(VAR_26, 1);
  if (VAR_29 < 0)
   goto e_m_ent;
 }

 FUNC_8(&VAR_23->dev, "lanes: %d, hs_settle: %d, wclk: %d, freq: %u\n",
   VAR_28->num_lanes, VAR_28->hs_settle, VAR_28->wclk_ext,
   VAR_28->clk_frequency);
 return 0;

e_m_ent:
 FUNC_15(&VAR_28->sd.entity);
e_clkdis:
 FUNC_3(VAR_28->clock[VAR_0]);
e_clkput:
 FUNC_26(VAR_28);
 return VAR_29;
}
