
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_6__ {int qmi_comp; } ;
struct TYPE_5__ {int * wakeup; int xfer_msg; int enable_stream; int get_laddr; int clkgear; TYPE_1__* a_framer; } ;
struct TYPE_4__ {int rootfreq; int superfreq; } ;
struct qcom_slim_ngd_ctrl {TYPE_3__ qmi; int reconf; int tx_buf_lock; int state; TYPE_2__ ctrl; TYPE_1__ framer; struct device* dev; int base; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,struct qcom_slim_ngd_ctrl*) ;
 int FUNC_4 (struct device*,struct resource*) ;
 struct qcom_slim_ngd_ctrl* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int ,int ,int ,char*,struct qcom_slim_ngd_ctrl*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device*,struct qcom_slim_ngd_ctrl*) ;
 int FUNC_9 (int *) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_15)
{
 struct device *VAR_16 = &VAR_15->dev;
 struct qcom_slim_ngd_ctrl *VAR_17;
 struct resource *VAR_18;
 int VAR_19;

 VAR_17 = FUNC_5(VAR_16, sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 FUNC_3(VAR_16, VAR_17);

 VAR_18 = FUNC_10(VAR_15, VAR_4, 0);
 VAR_17->base = FUNC_4(VAR_16, VAR_18);
 if (FUNC_0(VAR_17->base))
  return FUNC_1(VAR_17->base);

 VAR_18 = FUNC_10(VAR_15, VAR_3, 0);
 if (!VAR_18) {
  FUNC_2(&VAR_15->dev, "no slimbus IRQ resource\n");
  return -VAR_0;
 }

 VAR_19 = FUNC_6(VAR_16, VAR_18->start, VAR_13,
          VAR_5, "slim-ngd", VAR_17);
 if (VAR_19) {
  FUNC_2(&VAR_15->dev, "request IRQ failed\n");
  return VAR_19;
 }

 VAR_17->dev = VAR_16;
 VAR_17->framer.rootfreq = VAR_9 >> 3;
 VAR_17->framer.superfreq =
  VAR_17->framer.rootfreq / VAR_7;

 VAR_17->ctrl.a_framer = &VAR_17->framer;
 VAR_17->ctrl.clkgear = VAR_8;
 VAR_17->ctrl.get_laddr = VAR_12;
 VAR_17->ctrl.enable_stream = VAR_11;
 VAR_17->ctrl.xfer_msg = VAR_14;
 VAR_17->ctrl.wakeup = ((void*)0);
 VAR_17->state = VAR_6;

 FUNC_11(&VAR_17->tx_buf_lock);
 FUNC_7(&VAR_17->reconf);
 FUNC_7(&VAR_17->qmi.qmi_comp);

 FUNC_9(&VAR_10);
 return FUNC_8(VAR_16, VAR_17);
}
