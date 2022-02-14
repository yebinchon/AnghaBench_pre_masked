
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int state; } ;
struct port_info {int port_id; TYPE_1__ dcb; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int idx; int protocolid; int type; } ;
struct TYPE_7__ {TYPE_2__ app_priority; } ;
struct TYPE_8__ {TYPE_3__ dcb; } ;
struct fw_port_cmd {TYPE_4__ u; } ;
struct dcb_peer_app_info {scalar_t__ error; scalar_t__ willing; } ;
struct adapter {int pdev_dev; int mbox; } ;
typedef int pcmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fw_port_cmd,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct port_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct adapter*,int ,struct fw_port_cmd*,int,struct fw_port_cmd*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
        struct dcb_peer_app_info *VAR_4, u16 *VAR_5)
{
 struct fw_port_cmd VAR_6;
 struct port_info *VAR_7 = FUNC_3(VAR_3);
 struct adapter *VAR_8 = VAR_7->adapter;
 int VAR_9, VAR_10 = 0;

 if (!FUNC_1(VAR_7->dcb.state))
  return 1;

 VAR_4->willing = 0;
 VAR_4->error = 0;

 *VAR_5 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  FUNC_0(VAR_6, VAR_7->port_id);
  VAR_6.u.dcb.app_priority.type = VAR_2;
  VAR_6.u.dcb.app_priority.idx = *VAR_5;
  VAR_10 = FUNC_4(VAR_8, VAR_8->mbox, &VAR_6, sizeof(VAR_6), &VAR_6);

  if (VAR_10 != VAR_1) {
   FUNC_2(VAR_8->pdev_dev, "DCB app table read failed with %d\n",
    -VAR_10);
   return VAR_10;
  }


  if (!VAR_6.u.dcb.app_priority.protocolid)
   break;
 }
 *VAR_5 = VAR_9;
 return VAR_10;
}
