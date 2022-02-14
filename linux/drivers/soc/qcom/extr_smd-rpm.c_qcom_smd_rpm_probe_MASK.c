
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int of_node; } ;
struct rpmsg_device {TYPE_1__ dev; int ept; } ;
struct qcom_smd_rpm {int rpm_channel; TYPE_1__* dev; int ack; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct qcom_smd_rpm*) ;
 struct qcom_smd_rpm* FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct rpmsg_device *VAR_2)
{
 struct qcom_smd_rpm *VAR_3;

 VAR_3 = FUNC_1(&VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_3(&VAR_3->lock);
 FUNC_2(&VAR_3->ack);

 VAR_3->dev = &VAR_2->dev;
 VAR_3->rpm_channel = VAR_2->ept;
 FUNC_0(&VAR_2->dev, VAR_3);

 return FUNC_4(VAR_2->dev.of_node, ((void*)0), ((void*)0), &VAR_2->dev);
}
