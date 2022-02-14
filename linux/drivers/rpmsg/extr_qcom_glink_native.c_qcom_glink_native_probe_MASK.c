
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qcom_glink_pipe {int dummy; } ;
struct TYPE_5__ {int knows_txdone; struct device* dev; } ;
struct qcom_glink {unsigned long features; int intentless; int irq; int mbox_chan; TYPE_3__ mbox_client; int name; int rcids; int lcids; int idr_lock; int rx_work; int rx_queue; int rx_lock; int tx_lock; struct qcom_glink_pipe* rx_pipe; struct qcom_glink_pipe* tx_pipe; struct device* dev; } ;
struct device {TYPE_1__* of_node; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qcom_glink* FUNC_0 (int ) ;
 struct qcom_glink* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device*,char*) ;
 struct qcom_glink* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int,int ,int,char*,struct qcom_glink*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*,char*,int *) ;
 int VAR_5 ;
 int FUNC_13 (struct qcom_glink*) ;
 int VAR_6 ;
 int FUNC_14 (int *) ;

struct qcom_glink *FUNC_15(struct device *VAR_7,
        unsigned long VAR_8,
        struct qcom_glink_pipe *VAR_9,
        struct qcom_glink_pipe *VAR_10,
        bool VAR_11)
{
 int VAR_12;
 int VAR_13;
 struct qcom_glink *VAR_14;

 VAR_14 = FUNC_7(VAR_7, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return FUNC_1(-VAR_0);

 VAR_14->dev = VAR_7;
 VAR_14->tx_pipe = VAR_10;
 VAR_14->rx_pipe = VAR_9;

 VAR_14->features = VAR_8;
 VAR_14->intentless = VAR_11;

 FUNC_14(&VAR_14->tx_lock);
 FUNC_14(&VAR_14->rx_lock);
 FUNC_2(&VAR_14->rx_queue);
 FUNC_3(&VAR_14->rx_work, VAR_6);

 FUNC_14(&VAR_14->idr_lock);
 FUNC_9(&VAR_14->lcids);
 FUNC_9(&VAR_14->rcids);

 VAR_13 = FUNC_12(VAR_7->of_node, "label", &VAR_14->name);
 if (VAR_13 < 0)
  VAR_14->name = VAR_7->of_node->name;

 VAR_14->mbox_client.dev = VAR_7;
 VAR_14->mbox_client.knows_txdone = 1;
 VAR_14->mbox_chan = FUNC_10(&VAR_14->mbox_client, 0);
 if (FUNC_4(VAR_14->mbox_chan)) {
  if (FUNC_5(VAR_14->mbox_chan) != -VAR_1)
   FUNC_6(VAR_7, "failed to acquire IPC channel\n");
  return FUNC_0(VAR_14->mbox_chan);
 }

 VAR_12 = FUNC_11(VAR_7->of_node, 0);
 VAR_13 = FUNC_8(VAR_7, VAR_12,
          VAR_5,
          VAR_3 | VAR_4,
          "glink-native", VAR_14);
 if (VAR_13) {
  FUNC_6(VAR_7, "failed to request IRQ\n");
  return FUNC_1(VAR_13);
 }

 VAR_14->irq = VAR_12;

 VAR_13 = FUNC_13(VAR_14);
 if (VAR_13)
  return FUNC_1(VAR_13);

 return VAR_14;
}
