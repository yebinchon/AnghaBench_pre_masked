
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct resource {int dummy; } ;
struct qcom_rpm {TYPE_1__* data; int ipc_bit; int ipc_offset; int * ipc_regmap; int * status_regs; int * req_regs; int * ctrl_regs; int * ramclk; int ack; int lock; TYPE_2__* dev; } ;
struct TYPE_13__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {TYPE_1__* data; } ;
struct device_node {int dummy; } ;
struct TYPE_12__ {scalar_t__ version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qcom_rpm*,int) ;
 int FUNC_3 (struct qcom_rpm*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 int FUNC_6 (TYPE_2__*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,struct qcom_rpm*) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 int * FUNC_9 (TYPE_2__*,char*) ;
 int * FUNC_10 (TYPE_2__*,struct resource*) ;
 struct qcom_rpm* FUNC_11 (TYPE_2__*,int,int ) ;
 int FUNC_12 (TYPE_2__*,int,int ,int ,char*,struct qcom_rpm*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (int *) ;
 struct of_device_id* FUNC_16 (int ,TYPE_2__*) ;
 int FUNC_17 (struct device_node*) ;
 struct device_node* FUNC_18 (int ,char*,int ) ;
 int FUNC_19 (int ,int *,int *,TYPE_2__*) ;
 int FUNC_20 (int ,char*,int,int *) ;
 int FUNC_21 (struct platform_device*,char*) ;
 struct resource* FUNC_22 (struct platform_device*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_23 (int ) ;
 int * FUNC_24 (struct device_node*) ;
 int FUNC_25 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_12)
{
 const struct of_device_id *VAR_13;
 struct device_node *VAR_14;
 struct resource *VAR_15;
 struct qcom_rpm *VAR_16;
 u32 VAR_17[3];
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_16 = FUNC_11(&VAR_12->dev, sizeof(*VAR_16), VAR_5);
 if (!VAR_16)
  return -VAR_3;

 VAR_16->dev = &VAR_12->dev;
 FUNC_15(&VAR_16->lock);
 FUNC_13(&VAR_16->ack);


 VAR_16->ramclk = FUNC_9(&VAR_12->dev, "ram");
 if (FUNC_0(VAR_16->ramclk)) {
  VAR_21 = FUNC_1(VAR_16->ramclk);
  if (VAR_21 == -VAR_4)
   return VAR_21;




  VAR_16->ramclk = ((void*)0);
 }
 FUNC_4(VAR_16->ramclk);

 VAR_19 = FUNC_21(VAR_12, "ack");
 if (VAR_19 < 0)
  return VAR_19;

 VAR_20 = FUNC_21(VAR_12, "err");
 if (VAR_20 < 0)
  return VAR_20;

 VAR_18 = FUNC_21(VAR_12, "wakeup");
 if (VAR_18 < 0)
  return VAR_18;

 VAR_13 = FUNC_16(VAR_10, &VAR_12->dev);
 if (!VAR_13)
  return -VAR_2;
 VAR_16->data = VAR_13->data;

 VAR_15 = FUNC_22(VAR_12, VAR_6, 0);
 VAR_16->status_regs = FUNC_10(&VAR_12->dev, VAR_15);
 if (FUNC_0(VAR_16->status_regs))
  return FUNC_1(VAR_16->status_regs);
 VAR_16->ctrl_regs = VAR_16->status_regs + 0x400;
 VAR_16->req_regs = VAR_16->status_regs + 0x600;

 VAR_14 = FUNC_18(VAR_12->dev.of_node, "qcom,ipc", 0);
 if (!VAR_14) {
  FUNC_5(&VAR_12->dev, "no qcom,ipc node\n");
  return -VAR_2;
 }

 VAR_16->ipc_regmap = FUNC_24(VAR_14);
 FUNC_17(VAR_14);
 if (FUNC_0(VAR_16->ipc_regmap))
  return FUNC_1(VAR_16->ipc_regmap);

 VAR_21 = FUNC_20(VAR_12->dev.of_node, "qcom,ipc", 1,
      &VAR_16->ipc_offset);
 if (VAR_21 < 0) {
  FUNC_5(&VAR_12->dev, "no offset in qcom,ipc\n");
  return -VAR_1;
 }

 VAR_21 = FUNC_20(VAR_12->dev.of_node, "qcom,ipc", 2,
      &VAR_16->ipc_bit);
 if (VAR_21 < 0) {
  FUNC_5(&VAR_12->dev, "no bit in qcom,ipc\n");
  return -VAR_1;
 }

 FUNC_7(&VAR_12->dev, VAR_16);

 VAR_17[0] = FUNC_23(FUNC_3(VAR_16, 0));
 VAR_17[1] = FUNC_23(FUNC_3(VAR_16, 1));
 VAR_17[2] = FUNC_23(FUNC_3(VAR_16, 2));
 if (VAR_17[0] != VAR_16->data->version) {
  FUNC_5(&VAR_12->dev,
   "RPM version %u.%u.%u incompatible with driver version %u",
   VAR_17[0],
   VAR_17[1],
   VAR_17[2],
   VAR_16->data->version);
  return -VAR_0;
 }

 FUNC_25(VAR_17[0], FUNC_2(VAR_16, 0));
 FUNC_25(VAR_17[1], FUNC_2(VAR_16, 1));
 FUNC_25(VAR_17[2], FUNC_2(VAR_16, 2));

 FUNC_6(&VAR_12->dev, "RPM firmware %u.%u.%u\n", VAR_17[0],
       VAR_17[1],
       VAR_17[2]);

 VAR_21 = FUNC_12(&VAR_12->dev,
          VAR_19,
          VAR_8,
          VAR_7,
          "qcom_rpm_ack",
          VAR_16);
 if (VAR_21) {
  FUNC_5(&VAR_12->dev, "failed to request ack interrupt\n");
  return VAR_21;
 }

 VAR_21 = FUNC_14(VAR_19, 1);
 if (VAR_21)
  FUNC_8(&VAR_12->dev, "failed to mark ack irq as wakeup\n");

 VAR_21 = FUNC_12(&VAR_12->dev,
          VAR_20,
          VAR_9,
          VAR_7,
          "qcom_rpm_err",
          VAR_16);
 if (VAR_21) {
  FUNC_5(&VAR_12->dev, "failed to request err interrupt\n");
  return VAR_21;
 }

 VAR_21 = FUNC_12(&VAR_12->dev,
          VAR_18,
          VAR_11,
          VAR_7,
          "qcom_rpm_wakeup",
          VAR_16);
 if (VAR_21) {
  FUNC_5(&VAR_12->dev, "failed to request wakeup interrupt\n");
  return VAR_21;
 }

 VAR_21 = FUNC_14(VAR_18, 1);
 if (VAR_21)
  FUNC_8(&VAR_12->dev, "failed to mark wakeup irq as wakeup\n");

 return FUNC_19(VAR_12->dev.of_node, ((void*)0), ((void*)0), &VAR_12->dev);
}
