
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct port_info {int port_id; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int * pgrate; int type; } ;
struct TYPE_5__ {TYPE_1__ pgrate; } ;
struct TYPE_6__ {TYPE_2__ dcb; } ;
struct fw_port_cmd {TYPE_3__ u; } ;
struct adapter {int pdev_dev; int mbox; } ;
typedef int pcmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fw_port_cmd,int ) ;
 int FUNC_1 (struct fw_port_cmd,int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct port_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct adapter*,int ,struct fw_port_cmd*,int,struct fw_port_cmd*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2, int VAR_3, u8 *VAR_4,
         int VAR_5)
{
 struct fw_port_cmd VAR_6;
 struct port_info *VAR_7 = FUNC_3(VAR_2);
 struct adapter *VAR_8 = VAR_7->adapter;
 int VAR_9;

 if (VAR_5)
  FUNC_0(VAR_6, VAR_7->port_id);
 else
  FUNC_1(VAR_6, VAR_7->port_id);

 VAR_6.u.dcb.pgrate.type = VAR_1;
 VAR_9 = FUNC_4(VAR_8, VAR_8->mbox, &VAR_6, sizeof(VAR_6), &VAR_6);
 if (VAR_9 != VAR_0) {
  FUNC_2(VAR_8->pdev_dev, "DCB read PGRATE failed with %d\n",
   -VAR_9);
  return;
 }

 *VAR_4 = VAR_6.u.dcb.pgrate.pgrate[VAR_3];
}
