
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_10__ {scalar_t__ state; } ;
struct port_info {TYPE_5__ dcb; int port_id; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {scalar_t__* pgrate; int type; } ;
struct TYPE_6__ {int pgid; int type; } ;
struct TYPE_8__ {TYPE_2__ pgrate; TYPE_1__ pgid; } ;
struct TYPE_9__ {TYPE_3__ dcb; } ;
struct fw_port_cmd {int op_to_portid; TYPE_4__ u; } ;
struct adapter {int pdev_dev; int mbox; } ;
typedef int pcmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fw_port_cmd,int ) ;
 int FUNC_1 (struct fw_port_cmd,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct fw_port_cmd*,int ,int) ;
 struct port_info* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct adapter*,int ,struct fw_port_cmd*,int,struct fw_port_cmd*) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_6, int VAR_7,
    u8 VAR_8, u8 VAR_9, u8 VAR_10,
    u8 VAR_11)
{
 struct fw_port_cmd VAR_12;
 struct port_info *VAR_13 = FUNC_6(VAR_6);
 struct adapter *VAR_14 = VAR_13->adapter;
 int VAR_15 = 7 - VAR_7;
 u32 VAR_16;
 int VAR_17;

 if (VAR_9 == VAR_1)
  return;
 if (VAR_10 == VAR_1)
  return;

 FUNC_0(VAR_12, VAR_13->port_id);
 VAR_12.u.dcb.pgid.type = VAR_4;

 VAR_17 = FUNC_7(VAR_14, VAR_14->mbox, &VAR_12, sizeof(VAR_12), &VAR_12);
 if (VAR_17 != VAR_3) {
  FUNC_4(VAR_14->pdev_dev, "DCB read PGID failed with %d\n", -VAR_17);
  return;
 }

 VAR_16 = FUNC_2(VAR_12.u.dcb.pgid.pgid);
 VAR_16 &= ~(0xF << (VAR_15 * 4));
 VAR_16 |= VAR_9 << (VAR_15 * 4);
 VAR_12.u.dcb.pgid.pgid = FUNC_3(VAR_16);

 FUNC_1(VAR_12, VAR_13->port_id);

 VAR_17 = FUNC_7(VAR_14, VAR_14->mbox, &VAR_12, sizeof(VAR_12), &VAR_12);
 if (VAR_17 != VAR_3) {
  FUNC_4(VAR_14->pdev_dev, "DCB write PGID failed with %d\n",
   -VAR_17);
  return;
 }

 FUNC_5(&VAR_12, 0, sizeof(struct fw_port_cmd));

 FUNC_0(VAR_12, VAR_13->port_id);
 VAR_12.u.dcb.pgrate.type = VAR_5;

 VAR_17 = FUNC_7(VAR_14, VAR_14->mbox, &VAR_12, sizeof(VAR_12), &VAR_12);
 if (VAR_17 != VAR_3) {
  FUNC_4(VAR_14->pdev_dev, "DCB read PGRATE failed with %d\n",
   -VAR_17);
  return;
 }

 VAR_12.u.dcb.pgrate.pgrate[VAR_9] = VAR_10;

 FUNC_1(VAR_12, VAR_13->port_id);
 if (VAR_13->dcb.state == VAR_0)
  VAR_12.op_to_portid |= FUNC_3(VAR_2);

 VAR_17 = FUNC_7(VAR_14, VAR_14->mbox, &VAR_12, sizeof(VAR_12), &VAR_12);
 if (VAR_17 != VAR_3)
  FUNC_4(VAR_14->pdev_dev, "DCB write PGRATE failed with %d\n",
   -VAR_17);
}
