
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct octeon_soft_command {int caller_is_done; int sc_status; int complete; int iq_no; scalar_t__ virtrptr; } ;
struct octeon_device {TYPE_4__* pci_dev; } ;
struct oct_intrmod_resp {int intrmod; scalar_t__ status; } ;
struct oct_intrmod_cfg {int dummy; } ;
struct TYPE_7__ {TYPE_2__* txpciq; } ;
struct lio {TYPE_3__ linfo; struct octeon_device* oct_dev; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_5__ {int q_no; } ;
struct TYPE_6__ {TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct oct_intrmod_cfg*,int *,int) ;
 int FUNC_4 (struct oct_intrmod_resp*,int ,int) ;
 scalar_t__ FUNC_5 (struct octeon_device*,int ,int,int ) ;
 int FUNC_6 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_7 (struct octeon_device*,struct octeon_soft_command*,int ,int ,int ,int ,int ) ;
 int FUNC_8 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct octeon_device*,struct octeon_soft_command*,int ) ;

__attribute__((used)) static int FUNC_11(struct lio *VAR_7,
      struct oct_intrmod_cfg *VAR_8)
{
 struct octeon_soft_command *VAR_9;
 struct oct_intrmod_resp *VAR_10;
 int VAR_11;
 struct octeon_device *VAR_12 = VAR_7->oct_dev;


 VAR_9 = (struct octeon_soft_command *)
  FUNC_5(VAR_12,
       0,
       sizeof(struct oct_intrmod_resp), 0);

 if (!VAR_9)
  return -VAR_2;

 VAR_10 = (struct oct_intrmod_resp *)VAR_9->virtrptr;
 FUNC_4(VAR_10, 0, sizeof(struct oct_intrmod_resp));

 VAR_9->iq_no = VAR_7->linfo.txpciq[0].s.q_no;

 FUNC_7(VAR_12, VAR_9, VAR_5,
        VAR_6, 0, 0, 0);

 FUNC_2(&VAR_9->complete);
 VAR_9->sc_status = VAR_4;

 VAR_11 = FUNC_8(VAR_12, VAR_9);
 if (VAR_11 == VAR_3) {
  FUNC_6(VAR_12, VAR_9);
  return -VAR_0;
 }




 VAR_11 = FUNC_10(VAR_12, VAR_9, 0);
 if (VAR_11)
  return -VAR_1;

 if (VAR_10->status) {
  FUNC_1(&VAR_12->pci_dev->dev,
   "Get interrupt moderation parameters failed\n");
  FUNC_0(VAR_9->caller_is_done, 1);
  return -VAR_1;
 }

 FUNC_9((u64 *)&VAR_10->intrmod,
       (sizeof(struct oct_intrmod_cfg)) / 8);
 FUNC_3(VAR_8, &VAR_10->intrmod, sizeof(struct oct_intrmod_cfg));
 FUNC_0(VAR_9->caller_is_done, 1);

 return 0;
}
