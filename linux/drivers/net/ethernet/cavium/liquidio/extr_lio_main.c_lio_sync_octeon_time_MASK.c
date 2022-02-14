
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


typedef int u64 ;
struct work_struct {int dummy; } ;
struct timespec64 {int tv_nsec; int tv_sec; } ;
struct octeon_soft_command {int caller_is_done; int sc_status; int complete; int iq_no; scalar_t__ virtdptr; } ;
struct octeon_device {TYPE_4__* pci_dev; } ;
struct lio_time {int nsec; int sec; } ;
struct TYPE_11__ {int work; } ;
struct TYPE_12__ {TYPE_5__ wk; int wq; } ;
struct TYPE_9__ {TYPE_2__* txpciq; } ;
struct lio {TYPE_6__ sync_octeon_time_wq; TYPE_3__ linfo; struct octeon_device* oct_dev; } ;
struct cavium_wk {scalar_t__ ctxptr; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_7__ {int q_no; } ;
struct TYPE_8__ {TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct timespec64*) ;
 int FUNC_4 (int ) ;
 struct octeon_soft_command* FUNC_5 (struct octeon_device*,int,int,int ) ;
 int FUNC_6 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_7 (struct octeon_device*,struct octeon_soft_command*,int ,int ,int ,int ,int ) ;
 int FUNC_8 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_11(struct work_struct *VAR_5)
{
 struct cavium_wk *VAR_6 = (struct cavium_wk *)VAR_5;
 struct lio *VAR_7 = (struct lio *)VAR_6->ctxptr;
 struct octeon_device *VAR_8 = VAR_7->oct_dev;
 struct octeon_soft_command *VAR_9;
 struct timespec64 VAR_10;
 struct lio_time *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_5(VAR_8, sizeof(struct lio_time), 16, 0);
 if (!VAR_9) {
  FUNC_1(&VAR_8->pci_dev->dev,
   "Failed to sync time to octeon: soft command allocation failed\n");
  return;
 }

 VAR_11 = (struct lio_time *)VAR_9->virtdptr;


 FUNC_3(&VAR_10);
 VAR_11->sec = VAR_10.tv_sec;
 VAR_11->nsec = VAR_10.tv_nsec;
 FUNC_9((u64 *)VAR_11, (sizeof(struct lio_time)) / 8);

 VAR_9->iq_no = VAR_7->linfo.txpciq[0].s.q_no;
 FUNC_7(VAR_8, VAR_9, VAR_3,
        VAR_4, 0, 0, 0);

 FUNC_2(&VAR_9->complete);
 VAR_9->sc_status = VAR_2;

 VAR_12 = FUNC_8(VAR_8, VAR_9);
 if (VAR_12 == VAR_0) {
  FUNC_1(&VAR_8->pci_dev->dev,
   "Failed to sync time to octeon: failed to send soft command\n");
  FUNC_6(VAR_8, VAR_9);
 } else {
  FUNC_0(VAR_9->caller_is_done, 1);
 }

 FUNC_10(VAR_7->sync_octeon_time_wq.wq,
      &VAR_7->sync_octeon_time_wq.wk.work,
      FUNC_4(VAR_1));
}
