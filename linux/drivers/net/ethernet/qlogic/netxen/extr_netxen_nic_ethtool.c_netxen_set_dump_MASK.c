
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxen_minidump {int md_enabled; int md_capture_mask; } ;
struct netxen_adapter {int flags; int fw_mdump_rdy; struct netxen_minidump mdump; } ;
struct net_device {int dummy; } ;
struct ethtool_dump {int flag; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;




 int FUNC_1 (struct net_device*,char*,...) ;
 struct netxen_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct netxen_adapter*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_3, struct ethtool_dump *VAR_4)
{
 int VAR_5;
 struct netxen_adapter *VAR_6 = FUNC_2(VAR_3);
 struct netxen_minidump *VAR_7 = &VAR_6->mdump;

 switch (VAR_4->flag) {
 case 129:
  if (!VAR_7->md_enabled) {
   FUNC_1(VAR_3, "FW dump not enabled\n");
   return 0;
  }
  if (VAR_6->fw_mdump_rdy) {
   FUNC_1(VAR_3, "Previous dump not cleared, not forcing dump\n");
   return 0;
  }
  FUNC_1(VAR_3, "Forcing a fw dump\n");
  FUNC_3(VAR_6);
  break;
 case 131:
  if (VAR_7->md_enabled) {
   FUNC_1(VAR_3, "Disabling FW Dump\n");
   VAR_7->md_enabled = 0;
  }
  break;
 case 130:
  if (!VAR_7->md_enabled) {
   FUNC_1(VAR_3, "Enabling FW dump\n");
   VAR_7->md_enabled = 1;
  }
  break;
 case 128:
  FUNC_1(VAR_3, "Forcing FW reset\n");
  FUNC_3(VAR_6);
  VAR_6->flags &= ~VAR_2;
  break;
 default:
  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
   if (VAR_4->flag == VAR_1[VAR_5]) {
    VAR_7->md_capture_mask = VAR_4->flag;
    FUNC_1(VAR_3,
     "Driver mask changed to: 0x%x\n",
     VAR_7->md_capture_mask);
    return 0;
   }
  }
  FUNC_1(VAR_3,
   "Invalid dump level: 0x%x\n", VAR_4->flag);
  return -VAR_0;
 }

 return 0;
}
