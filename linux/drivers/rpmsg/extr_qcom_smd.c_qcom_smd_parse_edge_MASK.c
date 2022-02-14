
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int knows_txdone; struct device* dev; } ;
struct qcom_smd_edge {int irq; int name; int ipc_bit; int ipc_offset; int * ipc_regmap; int * mbox_chan; TYPE_1__ mbox_client; int remote_pid; int edge_id; int of_node; int state_work; int scan_work; int channels_lock; int channels; } ;
struct device_node {int name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,int,int ,int ,int ,struct qcom_smd_edge*) ;
 int FUNC_6 (struct device_node*,int ) ;
 int * FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (struct device_node*) ;
 struct device_node* FUNC_9 (struct device_node*,char*,int ) ;
 int FUNC_10 (struct device_node*,char*,int *) ;
 int FUNC_11 (struct device_node*,char const*,int *) ;
 int FUNC_12 (struct device_node*,char const*,int,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (struct device_node*) ;

__attribute__((used)) static int FUNC_15(struct device *VAR_7,
          struct device_node *VAR_8,
          struct qcom_smd_edge *VAR_9)
{
 struct device_node *VAR_10;
 const char *VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_0(&VAR_9->channels);
 FUNC_13(&VAR_9->channels_lock);

 FUNC_1(&VAR_9->scan_work, VAR_4);
 FUNC_1(&VAR_9->state_work, VAR_5);

 VAR_9->of_node = FUNC_8(VAR_8);

 VAR_11 = "qcom,smd-edge";
 VAR_13 = FUNC_11(VAR_8, VAR_11, &VAR_9->edge_id);
 if (VAR_13) {
  FUNC_4(VAR_7, "edge missing %s property\n", VAR_11);
  return -VAR_0;
 }

 VAR_9->remote_pid = VAR_3;
 VAR_11 = "qcom,remote-pid";
 FUNC_11(VAR_8, VAR_11, &VAR_9->remote_pid);

 VAR_9->mbox_client.dev = VAR_7;
 VAR_9->mbox_client.knows_txdone = 1;
 VAR_9->mbox_chan = FUNC_7(&VAR_9->mbox_client, 0);
 if (FUNC_2(VAR_9->mbox_chan)) {
  if (FUNC_3(VAR_9->mbox_chan) != -VAR_1)
   return FUNC_3(VAR_9->mbox_chan);

  VAR_9->mbox_chan = ((void*)0);

  VAR_10 = FUNC_9(VAR_8, "qcom,ipc", 0);
  if (!VAR_10) {
   FUNC_4(VAR_7, "no qcom,ipc node\n");
   return -VAR_1;
  }

  VAR_9->ipc_regmap = FUNC_14(VAR_10);
  if (FUNC_2(VAR_9->ipc_regmap))
   return FUNC_3(VAR_9->ipc_regmap);

  VAR_11 = "qcom,ipc";
  VAR_13 = FUNC_12(VAR_8, VAR_11, 1, &VAR_9->ipc_offset);
  if (VAR_13 < 0) {
   FUNC_4(VAR_7, "no offset in %s\n", VAR_11);
   return -VAR_0;
  }

  VAR_13 = FUNC_12(VAR_8, VAR_11, 2, &VAR_9->ipc_bit);
  if (VAR_13 < 0) {
   FUNC_4(VAR_7, "no bit in %s\n", VAR_11);
   return -VAR_0;
  }
 }

 VAR_13 = FUNC_10(VAR_8, "label", &VAR_9->name);
 if (VAR_13 < 0)
  VAR_9->name = VAR_8->name;

 VAR_12 = FUNC_6(VAR_8, 0);
 if (VAR_12 < 0) {
  FUNC_4(VAR_7, "required smd interrupt missing\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_5(VAR_7, VAR_12,
          VAR_6, VAR_2,
          VAR_8->name, VAR_9);
 if (VAR_13) {
  FUNC_4(VAR_7, "failed to request smd irq\n");
  return VAR_13;
 }

 VAR_9->irq = VAR_12;

 return 0;
}
