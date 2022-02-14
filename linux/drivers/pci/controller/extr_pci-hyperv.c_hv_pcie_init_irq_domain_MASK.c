
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; char* handler_name; struct hv_pcibus_device* data; int handler; int * ops; int * chip; } ;
struct TYPE_4__ {int fwnode; } ;
struct hv_pcibus_device {TYPE_2__* hdev; int irq_domain; TYPE_3__ msi_info; TYPE_1__ sysdata; } ;
struct TYPE_5__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,TYPE_3__*,int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_2(struct hv_pcibus_device *VAR_9)
{
 VAR_9->msi_info.chip = &VAR_6;
 VAR_9->msi_info.ops = &VAR_7;
 VAR_9->msi_info.flags = (VAR_4 |
  VAR_3 | VAR_1 |
  VAR_2);
 VAR_9->msi_info.handler = VAR_5;
 VAR_9->msi_info.handler_name = "edge";
 VAR_9->msi_info.data = VAR_9;
 VAR_9->irq_domain = FUNC_1(VAR_9->sysdata.fwnode,
           &VAR_9->msi_info,
           VAR_8);
 if (!VAR_9->irq_domain) {
  FUNC_0(&VAR_9->hdev->device,
   "Failed to build an MSI IRQ domain\n");
  return -VAR_0;
 }

 return 0;
}
