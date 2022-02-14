
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qcom_smd_edge {int dev; } ;
struct TYPE_3__ {int release; int * parent; } ;
struct TYPE_4__ {TYPE_1__ dev; int * ops; } ;
struct qcom_smd_device {TYPE_2__ rpdev; struct qcom_smd_edge* edge; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qcom_smd_device* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct qcom_smd_edge *VAR_4)
{
 struct qcom_smd_device *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->edge = VAR_4;
 VAR_5->rpdev.ops = &VAR_2;
 VAR_5->rpdev.dev.parent = &VAR_4->dev;
 VAR_5->rpdev.dev.release = VAR_3;

 return FUNC_1(&VAR_5->rpdev);
}
