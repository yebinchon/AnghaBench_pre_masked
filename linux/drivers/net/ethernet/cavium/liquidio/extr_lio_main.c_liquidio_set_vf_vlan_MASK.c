
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
typedef int u16 ;
struct TYPE_7__ {int param1; int param2; scalar_t__ more; int cmd; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct octnic_ctrl_pkt {int * cb_fn; int iq_no; TYPE_2__ ncmd; } ;
struct TYPE_12__ {int num_vfs_alloced; int* vf_vlantci; } ;
struct octeon_device {TYPE_6__ sriov_info; } ;
struct net_device {int dummy; } ;
struct TYPE_11__ {TYPE_4__* txpciq; } ;
struct lio {TYPE_5__ linfo; struct octeon_device* oct_dev; } ;
typedef scalar_t__ __be16 ;
struct TYPE_9__ {int q_no; } ;
struct TYPE_10__ {TYPE_3__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct lio* FUNC_0 (struct net_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct octnic_ctrl_pkt*,int ,int) ;
 int FUNC_3 (struct octeon_device*,struct octnic_ctrl_pkt*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_8, int VAR_9,
    u16 VAR_10, u8 VAR_11, __be16 VAR_12)
{
 struct lio *VAR_13 = FUNC_0(VAR_8);
 struct octeon_device *VAR_14 = VAR_13->oct_dev;
 struct octnic_ctrl_pkt VAR_15;
 u16 VAR_16;
 int VAR_17 = 0;

 if (VAR_9 < 0 || VAR_9 >= VAR_14->sriov_info.num_vfs_alloced)
  return -VAR_0;

 if (VAR_12 != FUNC_1(VAR_3))
  return -VAR_2;

 if (VAR_10 >= VAR_6 || VAR_11 > 7)
  return -VAR_0;

 if (VAR_10)
  VAR_16 = VAR_10 | (u16)VAR_11 << VAR_7;
 else
  VAR_16 = 0;

 if (VAR_14->sriov_info.vf_vlantci[VAR_9] == VAR_16)
  return 0;

 FUNC_2(&VAR_15, 0, sizeof(struct octnic_ctrl_pkt));

 if (VAR_10)
  VAR_15.ncmd.s.cmd = VAR_4;
 else
  VAR_15.ncmd.s.cmd = VAR_5;

 VAR_15.ncmd.s.param1 = VAR_16;
 VAR_15.ncmd.s.param2 =
     VAR_9 + 1;
 VAR_15.ncmd.s.more = 0;
 VAR_15.iq_no = VAR_13->linfo.txpciq[0].s.q_no;
 VAR_15.cb_fn = ((void*)0);

 VAR_17 = FUNC_3(VAR_14, &VAR_15);
 if (VAR_17) {
  if (VAR_17 > 0)
   VAR_17 = -VAR_1;
  return VAR_17;
 }

 VAR_14->sriov_info.vf_vlantci[VAR_9] = VAR_16;

 return VAR_17;
}
