
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {int resp_needed; int len; int cmd; int type; } ;
struct TYPE_6__ {TYPE_1__ s; scalar_t__ u64; } ;
struct octeon_mbox_cmd {int q_no; int data; void* fn_arg; scalar_t__ fn; scalar_t__ recv_status; scalar_t__ recv_len; TYPE_2__ msg; } ;
struct TYPE_7__ {unsigned long long vf_drv_loaded_mask; int rings_per_vf; } ;
struct octeon_device {TYPE_4__* pci_dev; TYPE_3__ sriov_info; } ;
struct oct_vf_stats_ctx {int status; struct oct_vf_stats* stats; } ;
struct oct_vf_stats {int dummy; } ;
typedef scalar_t__ octeon_mbox_callback_t ;
struct TYPE_8__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct octeon_device*,int ) ;
 int FUNC_5 (struct octeon_device*,struct octeon_mbox_cmd*) ;
 int FUNC_6 (int) ;

int FUNC_7(struct octeon_device *VAR_4, int VAR_5,
   struct oct_vf_stats *VAR_6)
{
 u32 VAR_7 = VAR_0;
 struct octeon_mbox_cmd VAR_8;
 struct oct_vf_stats_ctx VAR_9;
 u32 VAR_10 = 0, VAR_11;

 if (!(VAR_4->sriov_info.vf_drv_loaded_mask & (1ULL << VAR_5)))
  return -1;

 if (sizeof(struct oct_vf_stats) > sizeof(VAR_8.data))
  return -1;

 VAR_8.msg.u64 = 0;
 VAR_8.msg.s.type = VAR_2;
 VAR_8.msg.s.resp_needed = 1;
 VAR_8.msg.s.cmd = VAR_1;
 VAR_8.msg.s.len = 1;
 VAR_8.q_no = VAR_5 * VAR_4->sriov_info.rings_per_vf;
 VAR_8.recv_len = 0;
 VAR_8.recv_status = 0;
 VAR_8.fn = (octeon_mbox_callback_t)VAR_3;
 VAR_9.stats = VAR_6;
 FUNC_1(&VAR_9.status, 0);
 VAR_8.fn_arg = (void *)&VAR_9;
 FUNC_3(VAR_8.data, 0, sizeof(VAR_8.data));
 FUNC_5(VAR_4, &VAR_8);

 do {
  FUNC_6(1);
 } while ((FUNC_0(&VAR_9.status) == 0) && (VAR_10++ < VAR_7));

 VAR_11 = FUNC_0(&VAR_9.status);
 if (VAR_11 == 0) {
  FUNC_4(VAR_4, 0);
  FUNC_2(&VAR_4->pci_dev->dev, "Unable to get stats from VF-%d, timedout\n",
   VAR_5);
  return -1;
 }

 return 0;
}
