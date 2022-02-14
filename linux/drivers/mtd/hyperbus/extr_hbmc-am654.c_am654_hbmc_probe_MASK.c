
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct mux_control {int dummy; } ;
struct TYPE_4__ {int np; TYPE_1__* ctlr; } ;
struct TYPE_3__ {int * ops; struct device* dev; } ;
struct am654_hbmc_priv {struct mux_control* mux_ctrl; TYPE_2__ hbdev; TYPE_1__ ctlr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mux_control*) ;
 int FUNC_1 (struct mux_control*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*) ;
 struct am654_hbmc_priv* FUNC_3 (struct device*,int,int ) ;
 struct mux_control* FUNC_4 (struct device*,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct mux_control*) ;
 int FUNC_7 (struct mux_control*,int) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,char*) ;
 int FUNC_10 (struct platform_device*,struct am654_hbmc_priv*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct am654_hbmc_priv *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_4, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_10(VAR_3, VAR_5);

 if (FUNC_9(VAR_4->of_node, "mux-controls")) {
  struct mux_control *VAR_7 = FUNC_4(VAR_4, ((void*)0));

  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);

  VAR_6 = FUNC_7(VAR_7, 1);
  if (VAR_6) {
   FUNC_2(VAR_4, "Failed to select HBMC mux\n");
   return VAR_6;
  }
  VAR_5->mux_ctrl = VAR_7;
 }

 FUNC_12(VAR_4);
 VAR_6 = FUNC_13(VAR_4);
 if (VAR_6 < 0) {
  FUNC_14(VAR_4);
  goto disable_pm;
 }

 VAR_5->ctlr.dev = VAR_4;
 VAR_5->ctlr.ops = &VAR_2;
 VAR_5->hbdev.ctlr = &VAR_5->ctlr;
 VAR_5->hbdev.np = FUNC_8(VAR_4->of_node, ((void*)0));
 VAR_6 = FUNC_5(&VAR_5->hbdev);
 if (VAR_6) {
  FUNC_2(VAR_4, "failed to register controller\n");
  FUNC_15(&VAR_3->dev);
  goto disable_pm;
 }

 return 0;
disable_pm:
 FUNC_11(VAR_4);
 if (VAR_5->mux_ctrl)
  FUNC_6(VAR_5->mux_ctrl);
 return VAR_6;
}
