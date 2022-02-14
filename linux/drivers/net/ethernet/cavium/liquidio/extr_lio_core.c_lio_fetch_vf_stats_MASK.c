
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct octeon_soft_command {scalar_t__ sc_status; int caller_is_done; int iq_no; int complete; scalar_t__ virtrptr; } ;
struct octeon_device {TYPE_4__* pci_dev; } ;
struct oct_nic_vf_stats_resp {scalar_t__ spoofmac_cnt; int status; } ;
struct TYPE_7__ {TYPE_2__* txpciq; } ;
struct lio {TYPE_3__ linfo; struct octeon_device* oct_dev; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_5__ {int q_no; } ;
struct TYPE_6__ {TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct oct_nic_vf_stats_resp*,int ,int) ;
 scalar_t__ FUNC_5 (struct octeon_device*,int ,int,int ) ;
 int FUNC_6 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_7 (struct octeon_device*,struct octeon_soft_command*,int ,int ,int ,int ,int ) ;
 int FUNC_8 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct octeon_device*,struct octeon_soft_command*,int) ;

__attribute__((used)) static int FUNC_11(struct lio *VAR_7)
{
 struct octeon_device *VAR_8 = VAR_7->oct_dev;
 struct octeon_soft_command *VAR_9;
 struct oct_nic_vf_stats_resp *VAR_10;

 int VAR_11;


 VAR_9 = (struct octeon_soft_command *)
  FUNC_5(VAR_8,
       0,
       sizeof(struct oct_nic_vf_stats_resp),
       0);

 if (!VAR_9) {
  FUNC_1(&VAR_8->pci_dev->dev, "Soft command allocation failed\n");
  VAR_11 = -VAR_0;
  goto lio_fetch_vf_stats_exit;
 }

 VAR_10 = (struct oct_nic_vf_stats_resp *)VAR_9->virtrptr;
 FUNC_4(VAR_10, 0, sizeof(struct oct_nic_vf_stats_resp));

 FUNC_3(&VAR_9->complete);
 VAR_9->sc_status = VAR_3;

 VAR_9->iq_no = VAR_7->linfo.txpciq[0].s.q_no;

 FUNC_7(VAR_8, VAR_9, VAR_5,
        VAR_6, 0, 0, 0);

 VAR_11 = FUNC_8(VAR_8, VAR_9);
 if (VAR_11 == VAR_1) {
  FUNC_6(VAR_8, VAR_9);
  goto lio_fetch_vf_stats_exit;
 }

 VAR_11 =
  FUNC_10(VAR_8, VAR_9,
            (2 * VAR_2));
 if (VAR_11) {
  FUNC_1(&VAR_8->pci_dev->dev,
   "sc OPCODE_NIC_VF_PORT_STATS command failed\n");
  goto lio_fetch_vf_stats_exit;
 }

 if (VAR_9->sc_status != VAR_4 && !VAR_10->status) {
  FUNC_9((u64 *)&VAR_10->spoofmac_cnt,
        (sizeof(u64)) >> 3);

  if (VAR_10->spoofmac_cnt != 0) {
   FUNC_2(&VAR_8->pci_dev->dev,
     "%llu Spoofed packets detected\n",
     VAR_10->spoofmac_cnt);
  }
 }
 FUNC_0(VAR_9->caller_is_done, 1);

lio_fetch_vf_stats_exit:
 return VAR_11;
}
