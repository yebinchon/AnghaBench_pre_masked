
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ port_over_current_change; scalar_t__ port_suspend_change; scalar_t__ port_enable_change; scalar_t__ port_reset_change; scalar_t__ port_connect_status_change; } ;
struct TYPE_4__ {TYPE_1__ b; } ;
struct dwc2_hsotg {TYPE_2__ flags; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int FUNC_1(struct dwc2_hsotg *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_2 != 1)
  return -VAR_0;

 VAR_3 = (VAR_1->flags.b.port_connect_status_change ||
    VAR_1->flags.b.port_reset_change ||
    VAR_1->flags.b.port_enable_change ||
    VAR_1->flags.b.port_suspend_change ||
    VAR_1->flags.b.port_over_current_change);

 if (VAR_3) {
  FUNC_0(VAR_1->dev,
   "DWC OTG HCD HUB STATUS DATA: Root port status changed\n");
  FUNC_0(VAR_1->dev, "  port_connect_status_change: %d\n",
   VAR_1->flags.b.port_connect_status_change);
  FUNC_0(VAR_1->dev, "  port_reset_change: %d\n",
   VAR_1->flags.b.port_reset_change);
  FUNC_0(VAR_1->dev, "  port_enable_change: %d\n",
   VAR_1->flags.b.port_enable_change);
  FUNC_0(VAR_1->dev, "  port_suspend_change: %d\n",
   VAR_1->flags.b.port_suspend_change);
  FUNC_0(VAR_1->dev, "  port_over_current_change: %d\n",
   VAR_1->flags.b.port_over_current_change);
 }

 return VAR_3;
}
