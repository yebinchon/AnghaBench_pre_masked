
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct port_info {int port_id; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int num_tcs_supported; int * pgrate; int type; } ;
struct TYPE_5__ {int pgid; int type; } ;
struct TYPE_7__ {TYPE_2__ pgrate; TYPE_1__ pgid; } ;
struct TYPE_8__ {TYPE_3__ dcb; } ;
struct fw_port_cmd {TYPE_4__ u; } ;
struct cee_pg {int willing; int* prio_pg; int tcs_supported; int * pg_bw; } ;
struct adapter {int pdev_dev; int mbox; } ;
typedef int pcmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fw_port_cmd,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct port_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct adapter*,int ,struct fw_port_cmd*,int,struct fw_port_cmd*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, struct cee_pg *VAR_5)
{
 struct fw_port_cmd VAR_6;
 struct port_info *VAR_7 = FUNC_3(VAR_4);
 struct adapter *VAR_8 = VAR_7->adapter;
 u32 VAR_9;
 int VAR_10, VAR_11;




 VAR_5->willing = 1;

 FUNC_0(VAR_6, VAR_7->port_id);
 VAR_6.u.dcb.pgid.type = VAR_2;
 VAR_11 = FUNC_4(VAR_8, VAR_8->mbox, &VAR_6, sizeof(VAR_6), &VAR_6);
 if (VAR_11 != VAR_1) {
  FUNC_2(VAR_8->pdev_dev, "DCB read PGID failed with %d\n", -VAR_11);
  return VAR_11;
 }
 VAR_9 = FUNC_1(VAR_6.u.dcb.pgid.pgid);

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  VAR_5->prio_pg[7 - VAR_10] = (VAR_9 >> (VAR_10 * 4)) & 0xF;

 FUNC_0(VAR_6, VAR_7->port_id);
 VAR_6.u.dcb.pgrate.type = VAR_3;
 VAR_11 = FUNC_4(VAR_8, VAR_8->mbox, &VAR_6, sizeof(VAR_6), &VAR_6);
 if (VAR_11 != VAR_1) {
  FUNC_2(VAR_8->pdev_dev, "DCB read PGRATE failed with %d\n",
   -VAR_11);
  return VAR_11;
 }

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  VAR_5->pg_bw[VAR_10] = VAR_6.u.dcb.pgrate.pgrate[VAR_10];

 VAR_5->tcs_supported = VAR_6.u.dcb.pgrate.num_tcs_supported;

 return 0;
}
