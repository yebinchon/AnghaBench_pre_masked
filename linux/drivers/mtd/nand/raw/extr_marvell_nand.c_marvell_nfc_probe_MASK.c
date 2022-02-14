
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; TYPE_1__* id_entry; } ;
struct TYPE_4__ {int * ops; } ;
struct marvell_nfc {int * core_clk; int * reg_clk; void* caps; int * regs; int chips; TYPE_2__ controller; struct device* dev; } ;
struct TYPE_3__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*,char*) ;
 void* FUNC_7 (struct device*,char*) ;
 int * FUNC_8 (struct device*,struct resource*) ;
 struct marvell_nfc* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*,int,int ,int ,char*,struct marvell_nfc*) ;
 int FUNC_11 (struct device*,struct marvell_nfc*) ;
 int VAR_6 ;
 int FUNC_12 (struct marvell_nfc*,int ) ;
 int FUNC_13 (struct marvell_nfc*,int ) ;
 int FUNC_14 (struct marvell_nfc*) ;
 int VAR_7 ;
 int FUNC_15 (TYPE_2__*) ;
 void* FUNC_16 (struct device*) ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct marvell_nfc*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct resource *VAR_10;
 struct marvell_nfc *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_11 = FUNC_9(&VAR_8->dev, sizeof(struct marvell_nfc),
      VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->dev = VAR_9;
 FUNC_15(&VAR_11->controller);
 VAR_11->controller.ops = &VAR_6;
 FUNC_1(&VAR_11->chips);

 VAR_10 = FUNC_18(VAR_8, VAR_4, 0);
 VAR_11->regs = FUNC_8(VAR_9, VAR_10);
 if (FUNC_2(VAR_11->regs))
  return FUNC_3(VAR_11->regs);

 VAR_13 = FUNC_17(VAR_8, 0);
 if (VAR_13 < 0) {
  FUNC_6(VAR_9, "failed to retrieve irq\n");
  return VAR_13;
 }

 VAR_11->core_clk = FUNC_7(&VAR_8->dev, "core");


 if (VAR_11->core_clk == FUNC_0(-VAR_1))
  VAR_11->core_clk = FUNC_7(&VAR_8->dev, ((void*)0));

 if (FUNC_2(VAR_11->core_clk))
  return FUNC_3(VAR_11->core_clk);

 VAR_12 = FUNC_5(VAR_11->core_clk);
 if (VAR_12)
  return VAR_12;

 VAR_11->reg_clk = FUNC_7(&VAR_8->dev, "reg");
 if (FUNC_2(VAR_11->reg_clk)) {
  if (FUNC_3(VAR_11->reg_clk) != -VAR_1) {
   VAR_12 = FUNC_3(VAR_11->reg_clk);
   goto unprepare_core_clk;
  }

  VAR_11->reg_clk = ((void*)0);
 }

 VAR_12 = FUNC_5(VAR_11->reg_clk);
 if (VAR_12)
  goto unprepare_core_clk;

 FUNC_13(VAR_11, VAR_5);
 FUNC_12(VAR_11, VAR_5);
 VAR_12 = FUNC_10(VAR_9, VAR_13, VAR_7,
          0, "marvell-nfc", VAR_11);
 if (VAR_12)
  goto unprepare_reg_clk;


 if (VAR_8->id_entry)
  VAR_11->caps = (void *)VAR_8->id_entry->driver_data;
 else
  VAR_11->caps = FUNC_16(&VAR_8->dev);

 if (!VAR_11->caps) {
  FUNC_6(VAR_9, "Could not retrieve NFC caps\n");
  VAR_12 = -VAR_0;
  goto unprepare_reg_clk;
 }


 VAR_12 = FUNC_14(VAR_11);
 if (VAR_12)
  goto unprepare_reg_clk;

 FUNC_19(VAR_8, VAR_11);

 VAR_12 = FUNC_11(VAR_9, VAR_11);
 if (VAR_12)
  goto unprepare_reg_clk;

 return 0;

unprepare_reg_clk:
 FUNC_4(VAR_11->reg_clk);
unprepare_core_clk:
 FUNC_4(VAR_11->core_clk);

 return VAR_12;
}
