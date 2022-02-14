
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {int state; } ;
struct port_info {int port_id; TYPE_1__ dcb; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int idx; scalar_t__ sel_field; int user_prio_map; int protocolid; int type; } ;
struct TYPE_7__ {TYPE_2__ app_priority; } ;
struct TYPE_8__ {TYPE_3__ dcb; } ;
struct fw_port_cmd {TYPE_4__ u; } ;
struct adapter {int pdev_dev; int mbox; } ;
typedef int pcmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fw_port_cmd,int ) ;
 int FUNC_1 (struct fw_port_cmd,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 struct port_info* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct adapter*,int ,struct fw_port_cmd*,int,struct fw_port_cmd*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, u8 VAR_5, u16 VAR_6,
     int VAR_7)
{
 struct port_info *VAR_8 = FUNC_5(VAR_4);
 struct adapter *VAR_9 = VAR_8->adapter;
 int VAR_10;

 if (!FUNC_3(VAR_8->dcb.state))
  return 0;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  struct fw_port_cmd VAR_11;
  int VAR_12;

  if (VAR_7)
   FUNC_1(VAR_11, VAR_8->port_id);
  else
   FUNC_0(VAR_11, VAR_8->port_id);

  VAR_11.u.dcb.app_priority.type = VAR_3;
  VAR_11.u.dcb.app_priority.idx = VAR_10;

  VAR_12 = FUNC_6(VAR_9, VAR_9->mbox, &VAR_11, sizeof(VAR_11), &VAR_11);
  if (VAR_12 != VAR_2) {
   FUNC_4(VAR_9->pdev_dev, "DCB APP read failed with %d\n",
    -VAR_12);
   return VAR_12;
  }
  if (FUNC_2(VAR_11.u.dcb.app_priority.protocolid) == VAR_6)
   if (VAR_11.u.dcb.app_priority.sel_field == VAR_5)
    return VAR_11.u.dcb.app_priority.user_prio_map;


  if (!VAR_11.u.dcb.app_priority.protocolid)
   break;
 }

 return -VAR_1;
}
