
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {scalar_t__ state; } ;
struct port_info {TYPE_1__ dcb; int port_id; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int idx; void* user_prio_map; void* sel_field; scalar_t__ protocolid; void* type; } ;
struct TYPE_7__ {TYPE_2__ app_priority; } ;
struct TYPE_8__ {TYPE_3__ dcb; } ;
struct fw_port_cmd {TYPE_4__ u; int op_to_portid; } ;
struct adapter {int pdev_dev; int mbox; } ;
typedef int pcmd ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (struct fw_port_cmd,int ) ;
 int FUNC_1 (struct fw_port_cmd,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,char*,...) ;
 struct port_info* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct adapter*,int ,struct fw_port_cmd*,int,struct fw_port_cmd*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_8, u8 VAR_9, u16 VAR_10,
     u8 VAR_11)
{
 struct fw_port_cmd VAR_12;
 struct port_info *VAR_13 = FUNC_7(VAR_8);
 struct adapter *VAR_14 = VAR_13->adapter;
 int VAR_15, VAR_16;


 if (!FUNC_5(VAR_13->dcb.state))
  return -VAR_3;


 if (!FUNC_8(VAR_8))
  return -VAR_4;

 for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
  FUNC_0(VAR_12, VAR_13->port_id);
  VAR_12.u.dcb.app_priority.type = VAR_7;
  VAR_12.u.dcb.app_priority.idx = VAR_15;
  VAR_16 = FUNC_9(VAR_14, VAR_14->mbox, &VAR_12, sizeof(VAR_12), &VAR_12);

  if (VAR_16 != VAR_6) {
   FUNC_6(VAR_14->pdev_dev, "DCB app table read failed with %d\n",
    -VAR_16);
   return VAR_16;
  }
  if (FUNC_2(VAR_12.u.dcb.app_priority.protocolid) == VAR_10) {

   VAR_12.u.dcb.app_priority.protocolid = 0;
   break;
  }

  if (!VAR_12.u.dcb.app_priority.protocolid)
   break;
 }

 if (VAR_15 == VAR_1) {

  FUNC_6(VAR_14->pdev_dev, "DCB app table full\n");
  return -VAR_2;
 }


 FUNC_1(VAR_12, VAR_13->port_id);
 if (VAR_13->dcb.state == VAR_0)
  VAR_12.op_to_portid |= FUNC_4(VAR_5);

 VAR_12.u.dcb.app_priority.type = VAR_7;
 VAR_12.u.dcb.app_priority.protocolid = FUNC_3(VAR_10);
 VAR_12.u.dcb.app_priority.sel_field = VAR_9;
 VAR_12.u.dcb.app_priority.user_prio_map = VAR_11;
 VAR_12.u.dcb.app_priority.idx = VAR_15;

 VAR_16 = FUNC_9(VAR_14, VAR_14->mbox, &VAR_12, sizeof(VAR_12), &VAR_12);
 if (VAR_16 != VAR_6) {
  FUNC_6(VAR_14->pdev_dev, "DCB app table write failed with %d\n",
   -VAR_16);
  return VAR_16;
 }

 return 0;
}
