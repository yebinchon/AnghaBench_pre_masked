
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


struct work_struct {int dummy; } ;
struct octeon_soft_command {int caller_is_done; int sc_status; int iq_no; int complete; scalar_t__ virtrptr; } ;
struct TYPE_9__ {scalar_t__ num_vfs_alloced; } ;
struct TYPE_8__ {int app_cap_flags; } ;
struct octeon_device {int vfstats_poll; TYPE_6__* pci_dev; TYPE_2__ sriov_info; TYPE_1__ fw_info; } ;
struct oct_nic_stats_resp {int dummy; } ;
struct TYPE_14__ {int work; } ;
struct TYPE_12__ {TYPE_4__* txpciq; } ;
struct lio {TYPE_7__ stats_wk; TYPE_5__ linfo; struct octeon_device* oct_dev; } ;
struct cavium_wk {struct lio* ctxptr; } ;
struct TYPE_13__ {int dev; } ;
struct TYPE_10__ {int q_no; } ;
struct TYPE_11__ {TYPE_3__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct octeon_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct lio*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct lio*) ;
 int FUNC_6 (struct oct_nic_stats_resp*,int ,int) ;
 unsigned long FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct octeon_device*,int ,int,int ) ;
 int FUNC_9 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_10 (struct octeon_device*,struct octeon_soft_command*,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_12 (struct octeon_device*,int ,struct octeon_soft_command*) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (struct octeon_device*,struct octeon_soft_command*,int) ;

void FUNC_15(struct work_struct *VAR_9)
{
 struct cavium_wk *VAR_10 = (struct cavium_wk *)VAR_9;
 struct lio *VAR_11 = VAR_10->ctxptr;
 struct octeon_device *VAR_12 = VAR_11->oct_dev;
 struct octeon_soft_command *VAR_13;
 struct oct_nic_stats_resp *VAR_14;
 unsigned long VAR_15;
 int VAR_16;

 if (FUNC_0(VAR_12)) {

  if (!(VAR_12->vfstats_poll % VAR_3) &&
      (VAR_12->fw_info.app_cap_flags & VAR_5) &&
      VAR_12->sriov_info.num_vfs_alloced) {
   FUNC_5(VAR_11);
  }

  VAR_12->vfstats_poll++;
 }


 VAR_13 = (struct octeon_soft_command *)
  FUNC_8(VAR_12,
       0,
       sizeof(struct oct_nic_stats_resp),
       0);

 if (!VAR_13) {
  FUNC_2(&VAR_12->pci_dev->dev, "Soft command allocation failed\n");
  goto lio_fetch_stats_exit;
 }

 VAR_14 = (struct oct_nic_stats_resp *)VAR_13->virtrptr;
 FUNC_6(VAR_14, 0, sizeof(struct oct_nic_stats_resp));

 FUNC_4(&VAR_13->complete);
 VAR_13->sc_status = VAR_6;

 VAR_13->iq_no = VAR_11->linfo.txpciq[0].s.q_no;

 FUNC_10(VAR_12, VAR_13, VAR_7,
        VAR_8, 0, 0, 0);

 VAR_16 = FUNC_11(VAR_12, VAR_13);
 if (VAR_16 == VAR_0) {
  FUNC_9(VAR_12, VAR_13);
  goto lio_fetch_stats_exit;
 }

 VAR_16 = FUNC_14(VAR_12, VAR_13,
      (2 * VAR_2));
 if (VAR_16) {
  FUNC_2(&VAR_12->pci_dev->dev, "sc OPCODE_NIC_PORT_STATS command failed\n");
  goto lio_fetch_stats_exit;
 }

 FUNC_12(VAR_12, VAR_13->sc_status, VAR_13);
 FUNC_1(VAR_13->caller_is_done, 1);

lio_fetch_stats_exit:
 VAR_15 = FUNC_7(VAR_4);
 if (FUNC_3(VAR_11, VAR_1))
  FUNC_13(&VAR_11->stats_wk.work, VAR_15);

 return;
}
