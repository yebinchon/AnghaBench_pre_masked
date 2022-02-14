
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct esp {int scsi_id; int scsi_id_mask; TYPE_2__* host; int dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int this_id; } ;


 void* FUNC_0 (struct device_node*,char*,int) ;
 struct platform_device* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct esp *VAR_0, struct platform_device *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_1(VAR_0->dev);
 struct device_node *VAR_3;

 VAR_3 = VAR_2->dev.of_node;
 VAR_0->scsi_id = FUNC_0(VAR_3, "initiator-id", 0xff);
 if (VAR_0->scsi_id != 0xff)
  goto done;

 VAR_0->scsi_id = FUNC_0(VAR_3, "scsi-initiator-id", 0xff);
 if (VAR_0->scsi_id != 0xff)
  goto done;

 VAR_0->scsi_id = FUNC_0(VAR_1->dev.of_node,
          "scsi-initiator-id", 7);

done:
 VAR_0->host->this_id = VAR_0->scsi_id;
 VAR_0->scsi_id_mask = (1 << VAR_0->scsi_id);
}
