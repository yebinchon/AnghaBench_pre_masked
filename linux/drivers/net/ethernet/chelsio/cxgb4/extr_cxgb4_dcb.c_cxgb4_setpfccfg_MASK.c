
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_5__ {scalar_t__ state; int pfcen; } ;
struct port_info {TYPE_1__ dcb; int port_id; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int pfcen; int type; } ;
struct TYPE_7__ {TYPE_2__ pfc; } ;
struct TYPE_8__ {TYPE_3__ dcb; } ;
struct fw_port_cmd {TYPE_4__ u; int op_to_portid; } ;
struct adapter {int pdev_dev; int mbox; } ;
typedef int pcmd ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fw_port_cmd,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,int) ;
 struct port_info* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct adapter*,int ,struct fw_port_cmd*,int,struct fw_port_cmd*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_5, int VAR_6, u8 VAR_7)
{
 struct fw_port_cmd VAR_8;
 struct port_info *VAR_9 = FUNC_4(VAR_5);
 struct adapter *VAR_10 = VAR_9->adapter;
 int VAR_11;

 if (!FUNC_2(VAR_9->dcb.state) ||
     VAR_6 >= VAR_1)
  return;

 FUNC_0(VAR_8, VAR_9->port_id);
 if (VAR_9->dcb.state == VAR_0)
  VAR_8.op_to_portid |= FUNC_1(VAR_2);

 VAR_8.u.dcb.pfc.type = VAR_4;
 VAR_8.u.dcb.pfc.pfcen = VAR_9->dcb.pfcen;

 if (VAR_7)
  VAR_8.u.dcb.pfc.pfcen |= (1 << (7 - VAR_6));
 else
  VAR_8.u.dcb.pfc.pfcen &= (~(1 << (7 - VAR_6)));

 VAR_11 = FUNC_5(VAR_10, VAR_10->mbox, &VAR_8, sizeof(VAR_8), &VAR_8);
 if (VAR_11 != VAR_3) {
  FUNC_3(VAR_10->pdev_dev, "DCB PFC write failed with %d\n", -VAR_11);
  return;
 }

 VAR_9->dcb.pfcen = VAR_8.u.dcb.pfc.pfcen;
}
