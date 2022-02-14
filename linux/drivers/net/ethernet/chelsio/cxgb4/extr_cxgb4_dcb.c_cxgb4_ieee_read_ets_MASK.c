
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct port_dcb_info {int msgs; int pg_num_tcs_supported; } ;
struct port_info {int port_id; struct adapter* adapter; struct port_dcb_info dcb; } ;
struct net_device {int dummy; } ;
struct ieee_ets {int willing; int* prio_tc; int * tc_tsa; int * tc_tx_bw; int * tc_rx_bw; int ets_cap; } ;
struct TYPE_6__ {int * tsa; int * pgrate; int type; } ;
struct TYPE_5__ {int pgid; int type; } ;
struct TYPE_7__ {TYPE_2__ pgrate; TYPE_1__ pgid; } ;
struct TYPE_8__ {TYPE_3__ dcb; } ;
struct fw_port_cmd {TYPE_4__ u; } ;
struct adapter {int pdev_dev; int mbox; } ;
typedef int pcmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fw_port_cmd,int ) ;
 int FUNC_1 (struct fw_port_cmd,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 struct port_info* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct adapter*,int ,struct fw_port_cmd*,int,struct fw_port_cmd*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6, struct ieee_ets *VAR_7,
          int VAR_8)
{
 struct port_info *VAR_9 = FUNC_4(VAR_6);
 struct port_dcb_info *VAR_10 = &VAR_9->dcb;
 struct adapter *VAR_11 = VAR_9->adapter;
 uint32_t VAR_12;
 struct fw_port_cmd VAR_13;
 int VAR_14, VAR_15, VAR_16;

 if (!(VAR_10->msgs & (VAR_0 | VAR_1)))
  return 0;

 VAR_7->ets_cap = VAR_10->pg_num_tcs_supported;

 if (VAR_8) {
  VAR_7->willing = 1;
  FUNC_0(VAR_13, VAR_9->port_id);
 } else {
  FUNC_1(VAR_13, VAR_9->port_id);
 }

 VAR_13.u.dcb.pgid.type = VAR_3;
 VAR_16 = FUNC_5(VAR_11, VAR_11->mbox, &VAR_13, sizeof(VAR_13), &VAR_13);
 if (VAR_16 != VAR_2) {
  FUNC_3(VAR_11->pdev_dev, "DCB read PGID failed with %d\n", -VAR_16);
  return VAR_16;
 }

 VAR_12 = FUNC_2(VAR_13.u.dcb.pgid.pgid);

 if (VAR_8)
  FUNC_0(VAR_13, VAR_9->port_id);
 else
  FUNC_1(VAR_13, VAR_9->port_id);

 VAR_13.u.dcb.pgrate.type = VAR_4;
 VAR_16 = FUNC_5(VAR_11, VAR_11->mbox, &VAR_13, sizeof(VAR_13), &VAR_13);
 if (VAR_16 != VAR_2) {
  FUNC_3(VAR_11->pdev_dev, "DCB read PGRATE failed with %d\n",
   -VAR_16);
  return VAR_16;
 }

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  VAR_15 = (VAR_12 >> ((7 - VAR_14) * 4)) & 0xF;
  VAR_7->prio_tc[VAR_14] = VAR_15;
  VAR_7->tc_tx_bw[VAR_14] = VAR_13.u.dcb.pgrate.pgrate[VAR_14];
  VAR_7->tc_rx_bw[VAR_14] = VAR_7->tc_tx_bw[VAR_14];
  VAR_7->tc_tsa[VAR_14] = VAR_13.u.dcb.pgrate.tsa[VAR_14];
 }

 return 0;
}
