
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


struct TYPE_7__ {int param1; int param2; scalar_t__ more; int cmd; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct octnic_ctrl_pkt {int * cb_fn; int iq_no; TYPE_2__ ncmd; } ;
struct TYPE_12__ {int num_vfs_alloced; int* vf_linkstate; } ;
struct octeon_device {TYPE_6__ sriov_info; } ;
struct net_device {int dummy; } ;
struct TYPE_11__ {TYPE_4__* txpciq; } ;
struct lio {TYPE_5__ linfo; struct octeon_device* oct_dev; } ;
struct TYPE_9__ {int q_no; } ;
struct TYPE_10__ {TYPE_3__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lio* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_1 (struct octnic_ctrl_pkt*,int ,int) ;
 int FUNC_2 (struct octeon_device*,struct octnic_ctrl_pkt*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, int VAR_4,
          int VAR_5)
{
 struct lio *VAR_6 = FUNC_0(VAR_3);
 struct octeon_device *VAR_7 = VAR_6->oct_dev;
 struct octnic_ctrl_pkt VAR_8;
 int VAR_9 = 0;

 if (VAR_4 < 0 || VAR_4 >= VAR_7->sriov_info.num_vfs_alloced)
  return -VAR_0;

 if (VAR_7->sriov_info.vf_linkstate[VAR_4] == VAR_5)
  return 0;

 FUNC_1(&VAR_8, 0, sizeof(struct octnic_ctrl_pkt));
 VAR_8.ncmd.s.cmd = VAR_2;
 VAR_8.ncmd.s.param1 =
     VAR_4 + 1;
 VAR_8.ncmd.s.param2 = VAR_5;
 VAR_8.ncmd.s.more = 0;
 VAR_8.iq_no = VAR_6->linfo.txpciq[0].s.q_no;
 VAR_8.cb_fn = ((void*)0);

 VAR_9 = FUNC_2(VAR_7, &VAR_8);

 if (!VAR_9)
  VAR_7->sriov_info.vf_linkstate[VAR_4] = VAR_5;
 else if (VAR_9 > 0)
  VAR_9 = -VAR_1;

 return VAR_9;
}
