
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlogicpti {int scsi_id; TYPE_2__* qhost; struct platform_device* op; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {struct device_node* parent; } ;
struct TYPE_4__ {int this_id; int max_sectors; } ;


 void* FUNC_0 (struct device_node*,char*,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(struct qlogicpti *VAR_0)
{
 struct platform_device *VAR_1 = VAR_0->op;
 struct device_node *VAR_2;

 VAR_2 = VAR_1->dev.of_node;

 VAR_0->scsi_id = FUNC_0(VAR_2, "initiator-id", -1);
 if (VAR_0->scsi_id == -1)
  VAR_0->scsi_id = FUNC_0(VAR_2, "scsi-initiator-id",
            -1);
 if (VAR_0->scsi_id == -1)
  VAR_0->scsi_id =
   FUNC_0(VAR_2->parent,
           "scsi-initiator-id", 7);
 VAR_0->qhost->this_id = VAR_0->scsi_id;
 VAR_0->qhost->max_sectors = 64;

 FUNC_1("SCSI ID %d ", VAR_0->scsi_id);
}
