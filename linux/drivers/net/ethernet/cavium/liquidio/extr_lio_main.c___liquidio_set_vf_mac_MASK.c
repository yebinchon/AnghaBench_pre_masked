
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
struct TYPE_10__ {int param1; int more; int param2; int cmd; } ;
struct TYPE_11__ {TYPE_4__ s; scalar_t__ u64; } ;
struct octnic_ctrl_pkt {scalar_t__* udd; int cb_fn; TYPE_5__ ncmd; scalar_t__ netpndev; int iq_no; } ;
struct TYPE_12__ {int max_vfs; scalar_t__* vf_macaddr; } ;
struct octeon_device {TYPE_6__ sriov_info; } ;
struct net_device {int dummy; } ;
struct TYPE_9__ {TYPE_2__* txpciq; } ;
struct lio {TYPE_3__ linfo; struct octeon_device* oct_dev; } ;
struct TYPE_7__ {int q_no; } ;
struct TYPE_8__ {TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lio* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (struct octnic_ctrl_pkt*,int ,int) ;
 int FUNC_4 (struct octeon_device*,struct octnic_ctrl_pkt*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, int VAR_5,
     u8 *VAR_6, bool VAR_7)
{
 struct lio *VAR_8 = FUNC_0(VAR_4);
 struct octeon_device *VAR_9 = VAR_8->oct_dev;
 struct octnic_ctrl_pkt VAR_10;
 int VAR_11 = 0;

 if (!FUNC_2(VAR_6))
  return -VAR_0;

 if (VAR_5 < 0 || VAR_5 >= VAR_9->sriov_info.max_vfs)
  return -VAR_0;

 FUNC_3(&VAR_10, 0, sizeof(struct octnic_ctrl_pkt));

 VAR_10.ncmd.u64 = 0;
 VAR_10.ncmd.s.cmd = VAR_2;

 VAR_10.ncmd.s.param1 = VAR_5 + 1;
 VAR_10.ncmd.s.more = 1;
 VAR_10.iq_no = VAR_8->linfo.txpciq[0].s.q_no;
 VAR_10.netpndev = (u64)VAR_4;
 if (VAR_7) {
  VAR_10.ncmd.s.param2 = 1;
  VAR_10.cb_fn = VAR_3;
 }

 VAR_10.udd[0] = 0;

 FUNC_1((u8 *)&VAR_10.udd[0] + 2, VAR_6);

 VAR_9->sriov_info.vf_macaddr[VAR_5] = VAR_10.udd[0];

 VAR_11 = FUNC_4(VAR_9, &VAR_10);
 if (VAR_11 > 0)
  VAR_11 = -VAR_1;

 return VAR_11;
}
