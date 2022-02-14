
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
typedef int u16 ;
struct TYPE_7__ {int cmd; int param1; int more; } ;
struct TYPE_8__ {TYPE_1__ s; scalar_t__ u64; } ;
struct octnic_ctrl_pkt {int cb_fn; scalar_t__ netpndev; int iq_no; TYPE_2__ ncmd; } ;
struct octeon_device {TYPE_6__* pci_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_11__ {TYPE_4__* txpciq; } ;
struct lio {struct octeon_device* oct_dev; TYPE_5__ linfo; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_9__ {int q_no; } ;
struct TYPE_10__ {TYPE_3__ s; } ;


 int VAR_0 ;
 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct octnic_ctrl_pkt*,int ,int) ;
 int FUNC_3 (struct octeon_device*,struct octnic_ctrl_pkt*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, int VAR_3,
           u16 VAR_4, u8 VAR_5)
{
 struct lio *VAR_6 = FUNC_0(VAR_2);
 struct octeon_device *VAR_7 = VAR_6->oct_dev;
 struct octnic_ctrl_pkt VAR_8;
 int VAR_9 = 0;

 FUNC_2(&VAR_8, 0, sizeof(struct octnic_ctrl_pkt));

 VAR_8.ncmd.u64 = 0;
 VAR_8.ncmd.s.cmd = VAR_3;
 VAR_8.ncmd.s.more = VAR_5;
 VAR_8.ncmd.s.param1 = VAR_4;
 VAR_8.iq_no = VAR_6->linfo.txpciq[0].s.q_no;
 VAR_8.netpndev = (u64)VAR_2;
 VAR_8.cb_fn = VAR_1;

 VAR_9 = FUNC_3(VAR_6->oct_dev, &VAR_8);
 if (VAR_9) {
  FUNC_1(&VAR_7->pci_dev->dev,
   "DEVFLAGS VxLAN port add/delete failed in core (ret : 0x%x)\n",
   VAR_9);
  if (VAR_9 > 0)
   VAR_9 = -VAR_0;
 }
 return VAR_9;
}
