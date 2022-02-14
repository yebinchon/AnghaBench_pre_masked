
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {scalar_t__ state; } ;
struct port_info {TYPE_4__ dcb; int port_id; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int * pgrate; int type; } ;
struct TYPE_6__ {TYPE_1__ pgrate; } ;
struct TYPE_7__ {TYPE_2__ dcb; } ;
struct fw_port_cmd {int op_to_portid; TYPE_3__ u; } ;
struct adapter {int pdev_dev; int mbox; } ;
typedef int pcmd ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fw_port_cmd,int ) ;
 int FUNC_1 (struct fw_port_cmd,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 struct port_info* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct adapter*,int ,struct fw_port_cmd*,int,struct fw_port_cmd*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4, int VAR_5,
     u8 VAR_6)
{
 struct fw_port_cmd VAR_7;
 struct port_info *VAR_8 = FUNC_4(VAR_4);
 struct adapter *VAR_9 = VAR_8->adapter;
 int VAR_10;

 FUNC_0(VAR_7, VAR_8->port_id);
 VAR_7.u.dcb.pgrate.type = VAR_3;

 VAR_10 = FUNC_5(VAR_9, VAR_9->mbox, &VAR_7, sizeof(VAR_7), &VAR_7);
 if (VAR_10 != VAR_2) {
  FUNC_3(VAR_9->pdev_dev, "DCB read PGRATE failed with %d\n",
   -VAR_10);
  return;
 }

 VAR_7.u.dcb.pgrate.pgrate[VAR_5] = VAR_6;

 FUNC_1(VAR_7, VAR_8->port_id);
 if (VAR_8->dcb.state == VAR_0)
  VAR_7.op_to_portid |= FUNC_2(VAR_1);

 VAR_10 = FUNC_5(VAR_9, VAR_9->mbox, &VAR_7, sizeof(VAR_7), &VAR_7);

 if (VAR_10 != VAR_2)
  FUNC_3(VAR_9->pdev_dev, "DCB write PGRATE failed with %d\n",
   -VAR_10);
}
