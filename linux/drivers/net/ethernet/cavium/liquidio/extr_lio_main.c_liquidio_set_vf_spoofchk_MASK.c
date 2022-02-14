
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int param1; int param2; scalar_t__ more; int cmd; int cmdgroup; } ;
struct TYPE_10__ {TYPE_2__ s; } ;
struct octnic_ctrl_pkt {int * cb_fn; int iq_no; TYPE_3__ ncmd; } ;
struct TYPE_14__ {int num_vfs_alloced; int* vf_spoofchk; } ;
struct TYPE_8__ {int app_cap_flags; } ;
struct octeon_device {TYPE_7__ sriov_info; TYPE_1__ fw_info; } ;
struct net_device {int dummy; } ;
struct TYPE_13__ {TYPE_5__* txpciq; } ;
struct lio {int netdev; TYPE_6__ linfo; struct octeon_device* oct_dev; } ;
struct TYPE_11__ {int q_no; } ;
struct TYPE_12__ {TYPE_4__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lio* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct octnic_ctrl_pkt*,int ,int) ;
 int FUNC_2 (struct lio*,int ,int ,char*,...) ;
 int FUNC_3 (struct octeon_device*,struct octnic_ctrl_pkt*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_6, int VAR_7,
        bool VAR_8)
{
 struct lio *VAR_9 = FUNC_0(VAR_6);
 struct octeon_device *VAR_10 = VAR_9->oct_dev;
 struct octnic_ctrl_pkt VAR_11;
 int VAR_12;

 if (!(VAR_10->fw_info.app_cap_flags & VAR_2)) {
  FUNC_2(VAR_9, VAR_5, VAR_9->netdev,
      "firmware does not support spoofchk\n");
  return -VAR_1;
 }

 if (VAR_7 < 0 || VAR_7 >= VAR_10->sriov_info.num_vfs_alloced) {
  FUNC_2(VAR_9, VAR_5, VAR_9->netdev, "Invalid vfidx %d\n", VAR_7);
  return -VAR_0;
 }

 if (VAR_8) {
  if (VAR_10->sriov_info.vf_spoofchk[VAR_7])
   return 0;
 } else {

  if (!VAR_10->sriov_info.vf_spoofchk[VAR_7])
   return 0;
 }

 FUNC_1(&VAR_11, 0, sizeof(struct octnic_ctrl_pkt));
 VAR_11.ncmd.s.cmdgroup = VAR_3;
 VAR_11.ncmd.s.cmd = VAR_4;
 VAR_11.ncmd.s.param1 =
  VAR_7 + 1;


 VAR_11.ncmd.s.param2 = VAR_8;
 VAR_11.ncmd.s.more = 0;
 VAR_11.iq_no = VAR_9->linfo.txpciq[0].s.q_no;
 VAR_11.cb_fn = ((void*)0);

 VAR_12 = FUNC_3(VAR_10, &VAR_11);

 if (VAR_12) {
  FUNC_2(VAR_9, VAR_5, VAR_9->netdev,
      "Failed to set VF %d spoofchk %s\n", VAR_7,
   VAR_8 ? "on" : "off");
  return -1;
 }

 VAR_10->sriov_info.vf_spoofchk[VAR_7] = VAR_8;
 FUNC_2(VAR_9, VAR_5, VAR_9->netdev, "VF %u spoofchk is %s\n", VAR_7,
     VAR_8 ? "on" : "off");

 return 0;
}
