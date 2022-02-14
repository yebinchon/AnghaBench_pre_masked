
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int release; int * parent; int of_node; } ;
struct TYPE_3__ {int name; } ;
struct rpmsg_device {TYPE_2__ dev; void* dst; void* src; TYPE_1__ id; int * ops; } ;
struct qcom_smd_edge {int dev; int of_node; } ;
struct qcom_smd_device {struct rpmsg_device rpdev; struct qcom_smd_edge* edge; } ;
struct qcom_smd_channel {int name; struct qcom_smd_edge* edge; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 struct qcom_smd_device* FUNC_1 (int,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct rpmsg_device*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct qcom_smd_channel *VAR_6)
{
 struct qcom_smd_device *VAR_7;
 struct rpmsg_device *VAR_8;
 struct qcom_smd_edge *VAR_9 = VAR_6->edge;

 FUNC_0(&VAR_9->dev, "registering '%s'\n", VAR_6->name);

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;


 VAR_7->edge = VAR_9;


 VAR_7->rpdev.ops = &VAR_4;


 VAR_8 = &VAR_7->rpdev;
 FUNC_4(VAR_8->id.name, VAR_6->name, VAR_3);
 VAR_8->src = VAR_2;
 VAR_8->dst = VAR_2;

 VAR_8->dev.of_node = FUNC_2(VAR_9->of_node, VAR_6->name);
 VAR_8->dev.parent = &VAR_9->dev;
 VAR_8->dev.release = VAR_5;

 return FUNC_3(VAR_8);
}
