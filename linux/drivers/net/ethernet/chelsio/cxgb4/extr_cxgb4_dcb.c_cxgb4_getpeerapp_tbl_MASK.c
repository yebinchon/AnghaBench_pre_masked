
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state; } ;
struct port_info {int port_id; TYPE_1__ dcb; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int idx; int user_prio_map; int protocolid; scalar_t__ sel_field; int type; } ;
struct TYPE_7__ {TYPE_2__ app_priority; } ;
struct TYPE_8__ {TYPE_3__ dcb; } ;
struct fw_port_cmd {TYPE_4__ u; } ;
struct dcb_app {scalar_t__ priority; int protocol; scalar_t__ selector; } ;
struct adapter {int pdev_dev; int mbox; } ;
typedef int pcmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fw_port_cmd,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 struct port_info* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct adapter*,int ,struct fw_port_cmd*,int,struct fw_port_cmd*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3, struct dcb_app *VAR_4)
{
 struct fw_port_cmd VAR_5;
 struct port_info *VAR_6 = FUNC_5(VAR_3);
 struct adapter *VAR_7 = VAR_6->adapter;
 int VAR_8, VAR_9 = 0;

 if (!FUNC_2(VAR_6->dcb.state))
  return 1;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  FUNC_0(VAR_5, VAR_6->port_id);
  VAR_5.u.dcb.app_priority.type = VAR_2;
  VAR_5.u.dcb.app_priority.idx = VAR_8;
  VAR_9 = FUNC_6(VAR_7, VAR_7->mbox, &VAR_5, sizeof(VAR_5), &VAR_5);

  if (VAR_9 != VAR_1) {
   FUNC_3(VAR_7->pdev_dev, "DCB app table read failed with %d\n",
    -VAR_9);
   return VAR_9;
  }


  if (!VAR_5.u.dcb.app_priority.protocolid)
   break;

  VAR_4[VAR_8].selector = (VAR_5.u.dcb.app_priority.sel_field + 1);
  VAR_4[VAR_8].protocol =
   FUNC_1(VAR_5.u.dcb.app_priority.protocolid);
  VAR_4[VAR_8].priority =
   FUNC_4(VAR_5.u.dcb.app_priority.user_prio_map) - 1;
 }
 return VAR_9;
}
