
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcie_device {scalar_t__ service; TYPE_1__* port; } ;
struct controller {int hotplug_slot; } ;
struct TYPE_2__ {int subordinate; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct controller*) ;
 int FUNC_1 (struct controller*,char*,int) ;
 int FUNC_2 (struct controller*,char*) ;
 int FUNC_3 (struct controller*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int *) ;
 struct controller* FUNC_6 (struct pcie_device*) ;
 int FUNC_7 (struct controller*) ;
 int FUNC_8 (struct controller*) ;
 int FUNC_9 (struct controller*) ;
 int FUNC_10 (struct controller*) ;
 int FUNC_11 (struct pcie_device*,struct controller*) ;

__attribute__((used)) static int FUNC_12(struct pcie_device *VAR_3)
{
 int VAR_4;
 struct controller *VAR_5;


 if (VAR_3->service != VAR_2)
  return -VAR_1;

 if (!VAR_3->port->subordinate) {

  FUNC_4(VAR_3->port,
   "Hotplug bridge without secondary bus, ignoring\n");
  return -VAR_1;
 }

 VAR_5 = FUNC_6(VAR_3);
 if (!VAR_5) {
  FUNC_4(VAR_3->port, "Controller initialization failed\n");
  return -VAR_1;
 }
 FUNC_11(VAR_3, VAR_5);


 VAR_4 = FUNC_3(VAR_5);
 if (VAR_4) {
  if (VAR_4 == -VAR_0)
   FUNC_2(VAR_5, "Slot already registered by another hotplug driver\n");
  else
   FUNC_1(VAR_5, "Slot initialization failed (%d)\n", VAR_4);
  goto err_out_release_ctlr;
 }


 VAR_4 = FUNC_7(VAR_5);
 if (VAR_4) {
  FUNC_1(VAR_5, "Notification initialization failed (%d)\n", VAR_4);
  goto err_out_free_ctrl_slot;
 }


 VAR_4 = FUNC_5(&VAR_5->hotplug_slot);
 if (VAR_4) {
  FUNC_1(VAR_5, "Publication to user space failed (%d)\n", VAR_4);
  goto err_out_shutdown_notification;
 }

 FUNC_9(VAR_5);

 return 0;

err_out_shutdown_notification:
 FUNC_8(VAR_5);
err_out_free_ctrl_slot:
 FUNC_0(VAR_5);
err_out_release_ctlr:
 FUNC_10(VAR_5);
 return -VAR_1;
}
