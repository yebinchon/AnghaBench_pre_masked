
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int groups; struct device_node* of_node; int release; struct device* parent; } ;
struct qcom_smd_edge {TYPE_1__ dev; int mbox_chan; int scan_work; int new_channel_event; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct qcom_smd_edge* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (TYPE_1__*,char*,int ,struct device_node*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 struct qcom_smd_edge* FUNC_8 (int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct qcom_smd_edge*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (TYPE_1__*,struct device_node*,struct qcom_smd_edge*) ;
 int FUNC_14 (int *) ;

struct qcom_smd_edge *FUNC_15(struct device *VAR_4,
          struct device_node *VAR_5)
{
 struct qcom_smd_edge *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_8(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_7(&VAR_6->new_channel_event);

 VAR_6->dev.parent = VAR_4;
 VAR_6->dev.release = VAR_3;
 VAR_6->dev.of_node = VAR_5;
 VAR_6->dev.groups = VAR_2;
 FUNC_4(&VAR_6->dev, "%s:%pOFn", FUNC_3(VAR_4), VAR_5);
 VAR_7 = FUNC_5(&VAR_6->dev);
 if (VAR_7) {
  FUNC_10("failed to register smd edge\n");
  FUNC_11(&VAR_6->dev);
  return FUNC_0(VAR_7);
 }

 VAR_7 = FUNC_13(&VAR_6->dev, VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_2(&VAR_6->dev, "failed to parse smd edge\n");
  goto unregister_dev;
 }

 VAR_7 = FUNC_12(VAR_6);
 if (VAR_7) {
  FUNC_2(&VAR_6->dev, "failed to register chrdev for edge\n");
  goto unregister_dev;
 }

 FUNC_14(&VAR_6->scan_work);

 return VAR_6;

unregister_dev:
 if (!FUNC_1(VAR_6->mbox_chan))
  FUNC_9(VAR_6->mbox_chan);

 FUNC_6(&VAR_6->dev);
 return FUNC_0(VAR_7);
}
