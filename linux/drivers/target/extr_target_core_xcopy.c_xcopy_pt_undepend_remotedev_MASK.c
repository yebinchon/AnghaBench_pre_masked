
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xcopy_op {scalar_t__ op_origin; struct se_device* src_dev; struct se_device* dst_dev; } ;
struct TYPE_2__ {int cg_item; } ;
struct se_device {TYPE_1__ dev_group; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct se_device*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct xcopy_op *VAR_1)
{
 struct se_device *VAR_2;

 if (VAR_1->op_origin == VAR_0)
  VAR_2 = VAR_1->dst_dev;
 else
  VAR_2 = VAR_1->src_dev;

 FUNC_0("Calling configfs_undepend_item for"
    " remote_dev: %p remote_dev->dev_group: %p\n",
    VAR_2, &VAR_2->dev_group.cg_item);

 FUNC_1(&VAR_2->dev_group.cg_item);
}
