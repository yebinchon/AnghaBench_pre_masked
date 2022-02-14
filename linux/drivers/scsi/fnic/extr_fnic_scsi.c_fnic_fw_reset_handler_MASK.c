
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vnic_wq_copy {int dummy; } ;
struct TYPE_6__ {int fw_resets; } ;
struct TYPE_5__ {int active_fw_reqs; int max_fw_reqs; } ;
struct TYPE_7__ {TYPE_2__ reset_stats; TYPE_1__ fw_stats; } ;
struct fnic {scalar_t__* wq_copy_desc_low; TYPE_4__* lport; TYPE_3__ fnic_stats; int * wq_copy_lock; int in_flight; int tx_queue; int frame_queue; struct vnic_wq_copy* wq_copy; } ;
struct TYPE_8__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct fnic*,int ) ;
 int FUNC_6 (struct vnic_wq_copy*,int ) ;
 int FUNC_7 (struct fnic*,int ) ;
 int FUNC_8 (struct fnic*,struct vnic_wq_copy*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 scalar_t__ FUNC_14 (struct vnic_wq_copy*) ;

int FUNC_15(struct fnic *VAR_4)
{
 struct vnic_wq_copy *VAR_5 = &VAR_4->wq_copy[0];
 int VAR_6 = 0;
 unsigned long VAR_7;


 FUNC_7(VAR_4, VAR_1);

 FUNC_11(&VAR_4->frame_queue);
 FUNC_11(&VAR_4->tx_queue);


 while (FUNC_4(&VAR_4->in_flight))
  FUNC_10(FUNC_9(1));

 FUNC_12(&VAR_4->wq_copy_lock[0], VAR_7);

 if (FUNC_14(VAR_5) <= VAR_4->wq_copy_desc_low[0])
  FUNC_8(VAR_4, VAR_5);

 if (!FUNC_14(VAR_5))
  VAR_6 = -VAR_0;
 else {
  FUNC_6(VAR_5, VAR_3);
  FUNC_1(&VAR_4->fnic_stats.fw_stats.active_fw_reqs);
  if (FUNC_2(&VAR_4->fnic_stats.fw_stats.active_fw_reqs) >
     FUNC_2(&VAR_4->fnic_stats.fw_stats.max_fw_reqs))
   FUNC_3(&VAR_4->fnic_stats.fw_stats.max_fw_reqs,
    FUNC_2(
      &VAR_4->fnic_stats.fw_stats.active_fw_reqs));
 }

 FUNC_13(&VAR_4->wq_copy_lock[0], VAR_7);

 if (!VAR_6) {
  FUNC_1(&VAR_4->fnic_stats.reset_stats.fw_resets);
  FUNC_0(VAR_2, VAR_4->lport->host,
         "Issued fw reset\n");
 } else {
  FUNC_5(VAR_4, VAR_1);
  FUNC_0(VAR_2, VAR_4->lport->host,
         "Failed to issue fw reset\n");
 }

 return VAR_6;
}
