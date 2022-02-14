
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


typedef void* uint32_t ;
typedef scalar_t__ u64 ;
struct TYPE_7__ {void* param2; void* param1; int cmd; } ;
struct TYPE_8__ {TYPE_1__ s; scalar_t__ u64; } ;
struct octnic_ctrl_pkt {int cb_fn; scalar_t__ netpndev; int iq_no; TYPE_2__ ncmd; } ;
struct octeon_device {TYPE_6__* pci_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_11__ {TYPE_4__* txpciq; } ;
struct lio {struct octeon_device* oct_dev; TYPE_5__ linfo; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_9__ {int q_no; } ;
struct TYPE_10__ {TYPE_3__ s; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct octnic_ctrl_pkt*,int ,int) ;
 int FUNC_3 (struct octeon_device*,struct octnic_ctrl_pkt*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_2, uint32_t VAR_3)
{
 struct lio *VAR_4 = FUNC_0(VAR_2);
 struct octeon_device *VAR_5 = VAR_4->oct_dev;
 struct octnic_ctrl_pkt VAR_6;
 int VAR_7 = 0;

 FUNC_2(&VAR_6, 0, sizeof(struct octnic_ctrl_pkt));

 VAR_6.ncmd.u64 = 0;
 VAR_6.ncmd.s.cmd = VAR_0;
 VAR_6.ncmd.s.param1 = VAR_3;
 VAR_6.ncmd.s.param2 = VAR_3;
 VAR_6.iq_no = VAR_4->linfo.txpciq[0].s.q_no;
 VAR_6.netpndev = (u64)VAR_2;
 VAR_6.cb_fn = VAR_1;

 VAR_7 = FUNC_3(VAR_4->oct_dev, &VAR_6);
 if (VAR_7) {
  FUNC_1(&VAR_5->pci_dev->dev, "Failed to send Queue reset command (ret: 0x%x)\n",
   VAR_7);
  return -1;
 }

 return 0;
}
