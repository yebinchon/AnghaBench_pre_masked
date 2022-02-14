
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct sockaddr {int sa_data; } ;
struct TYPE_7__ {int more; scalar_t__ param1; int cmd; } ;
struct TYPE_8__ {TYPE_1__ s; scalar_t__ u64; } ;
struct octnic_ctrl_pkt {scalar_t__ sc_status; scalar_t__* udd; scalar_t__ netpndev; int iq_no; TYPE_2__ ncmd; } ;
struct octeon_device {TYPE_5__* pci_dev; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct TYPE_12__ {int hw_addr; TYPE_4__* txpciq; scalar_t__ macaddr_is_admin_asgnd; } ;
struct lio {TYPE_6__ linfo; struct octeon_device* oct_dev; } ;
struct TYPE_11__ {int dev; } ;
struct TYPE_9__ {int q_no; } ;
struct TYPE_10__ {TYPE_3__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct lio* FUNC_1 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct octnic_ctrl_pkt*,int ,int) ;
 int FUNC_8 (struct octeon_device*,struct octnic_ctrl_pkt*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_5, void *VAR_6)
{
 struct sockaddr *VAR_7 = (struct sockaddr *)VAR_6;
 struct lio *VAR_8 = FUNC_1(VAR_5);
 struct octeon_device *VAR_9 = VAR_8->oct_dev;
 struct octnic_ctrl_pkt VAR_10;
 int VAR_11 = 0;

 if (!FUNC_5(VAR_7->sa_data))
  return -VAR_0;

 if (FUNC_4(VAR_7->sa_data, VAR_5->dev_addr))
  return 0;

 if (VAR_8->linfo.macaddr_is_admin_asgnd)
  return -VAR_2;

 FUNC_7(&VAR_10, 0, sizeof(struct octnic_ctrl_pkt));

 VAR_10.ncmd.u64 = 0;
 VAR_10.ncmd.s.cmd = VAR_4;
 VAR_10.ncmd.s.param1 = 0;
 VAR_10.ncmd.s.more = 1;
 VAR_10.iq_no = VAR_8->linfo.txpciq[0].s.q_no;
 VAR_10.netpndev = (u64)VAR_5;

 VAR_10.udd[0] = 0;

 FUNC_3((u8 *)&VAR_10.udd[0] + 2, VAR_7->sa_data);

 VAR_11 = FUNC_8(VAR_8->oct_dev, &VAR_10);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_9->pci_dev->dev, "MAC Address change failed\n");
  return -VAR_1;
 }

 if (VAR_10.sc_status ==
     FUNC_0(VAR_3)) {
  FUNC_2(&VAR_9->pci_dev->dev, "MAC Address change failed: no permission\n");
  return -VAR_2;
 }

 FUNC_6(VAR_5->dev_addr, VAR_7->sa_data, VAR_5->addr_len);
 FUNC_3(((u8 *)&VAR_8->linfo.hw_addr) + 2, VAR_7->sa_data);

 return 0;
}
