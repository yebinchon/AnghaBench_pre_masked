
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct port_info {int port_id; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {size_t* pgrate; int type; } ;
struct TYPE_5__ {int pgid; int type; } ;
struct TYPE_7__ {TYPE_2__ pgrate; TYPE_1__ pgid; } ;
struct TYPE_8__ {TYPE_3__ dcb; } ;
struct fw_port_cmd {TYPE_4__ u; } ;
struct adapter {int pdev_dev; int mbox; } ;
typedef int pcmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fw_port_cmd,int ) ;
 int FUNC_1 (struct fw_port_cmd,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 struct port_info* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct adapter*,int ,struct fw_port_cmd*,int,struct fw_port_cmd*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3, int VAR_4,
        u8 *VAR_5, u8 *VAR_6, u8 *VAR_7,
        u8 *VAR_8, int VAR_9)
{
 struct fw_port_cmd VAR_10;
 struct port_info *VAR_11 = FUNC_4(VAR_3);
 struct adapter *VAR_12 = VAR_11->adapter;
 int VAR_13;

 *VAR_5 = *VAR_6 = *VAR_7 = *VAR_8 = 0;

 if (VAR_9)
  FUNC_0(VAR_10, VAR_11->port_id);
 else
  FUNC_1(VAR_10, VAR_11->port_id);

 VAR_10.u.dcb.pgid.type = VAR_1;
 VAR_13 = FUNC_5(VAR_12, VAR_12->mbox, &VAR_10, sizeof(VAR_10), &VAR_10);
 if (VAR_13 != VAR_0) {
  FUNC_3(VAR_12->pdev_dev, "DCB read PGID failed with %d\n", -VAR_13);
  return;
 }
 *VAR_6 = (FUNC_2(VAR_10.u.dcb.pgid.pgid) >> (VAR_4 * 4)) & 0xf;

 if (VAR_9)
  FUNC_0(VAR_10, VAR_11->port_id);
 else
  FUNC_1(VAR_10, VAR_11->port_id);
 VAR_10.u.dcb.pgrate.type = VAR_2;
 VAR_13 = FUNC_5(VAR_12, VAR_12->mbox, &VAR_10, sizeof(VAR_10), &VAR_10);
 if (VAR_13 != VAR_0) {
  FUNC_3(VAR_12->pdev_dev, "DCB read PGRATE failed with %d\n",
   -VAR_13);
  return;
 }

 *VAR_7 = VAR_10.u.dcb.pgrate.pgrate[*VAR_6];
 *VAR_8 = (1 << VAR_4);


 if (*VAR_6 != 0xF)
  *VAR_5 = 0x2;
}
