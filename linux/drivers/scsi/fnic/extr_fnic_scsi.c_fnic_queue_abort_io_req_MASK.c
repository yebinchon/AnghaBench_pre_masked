
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vnic_wq_copy {int dummy; } ;
struct misc_stats {int abts_cpwq_alloc_failures; } ;
struct fnic_io_req {int port_id; } ;
struct TYPE_7__ {int active_fw_reqs; int max_fw_reqs; } ;
struct TYPE_8__ {TYPE_3__ fw_stats; struct misc_stats misc_stats; } ;
struct TYPE_6__ {int ed_tov; int ra_tov; } ;
struct fnic {scalar_t__* wq_copy_desc_low; int in_flight; int * wq_copy_lock; TYPE_4__ fnic_stats; TYPE_2__ config; TYPE_1__* lport; struct vnic_wq_copy* wq_copy; } ;
struct Scsi_Host {int * host_lock; } ;
struct TYPE_5__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct Scsi_Host*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct fnic*,int ) ;
 int FUNC_7 (struct vnic_wq_copy*,int,int ,int ,int,int *,int ,int ,int ) ;
 int FUNC_8 (struct fnic*,struct vnic_wq_copy*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct vnic_wq_copy*) ;

__attribute__((used)) static inline int FUNC_13(struct fnic *VAR_3, int VAR_4,
       u32 VAR_5, u8 *VAR_6,
       struct fnic_io_req *VAR_7)
{
 struct vnic_wq_copy *VAR_8 = &VAR_3->wq_copy[0];
 struct Scsi_Host *VAR_9 = VAR_3->lport->host;
 struct misc_stats *VAR_10 = &VAR_3->fnic_stats.misc_stats;
 unsigned long VAR_11;

 FUNC_9(VAR_9->host_lock, VAR_11);
 if (FUNC_11(FUNC_6(VAR_3,
      VAR_0))) {
  FUNC_10(VAR_9->host_lock, VAR_11);
  return 1;
 } else
  FUNC_5(&VAR_3->in_flight);
 FUNC_10(VAR_9->host_lock, VAR_11);

 FUNC_9(&VAR_3->wq_copy_lock[0], VAR_11);

 if (FUNC_12(VAR_8) <= VAR_3->wq_copy_desc_low[0])
  FUNC_8(VAR_3, VAR_8);

 if (!FUNC_12(VAR_8)) {
  FUNC_10(&VAR_3->wq_copy_lock[0], VAR_11);
  FUNC_4(&VAR_3->in_flight);
  FUNC_0(VAR_2, VAR_3->lport->host,
   "fnic_queue_abort_io_req: failure: no descriptors\n");
  FUNC_1(&VAR_10->abts_cpwq_alloc_failures);
  return 1;
 }
 FUNC_7(VAR_8, VAR_4 | VAR_1,
         0, VAR_5, VAR_4, VAR_6, VAR_7->port_id,
         VAR_3->config.ra_tov, VAR_3->config.ed_tov);

 FUNC_1(&VAR_3->fnic_stats.fw_stats.active_fw_reqs);
 if (FUNC_2(&VAR_3->fnic_stats.fw_stats.active_fw_reqs) >
    FUNC_2(&VAR_3->fnic_stats.fw_stats.max_fw_reqs))
  FUNC_3(&VAR_3->fnic_stats.fw_stats.max_fw_reqs,
    FUNC_2(&VAR_3->fnic_stats.fw_stats.active_fw_reqs));

 FUNC_10(&VAR_3->wq_copy_lock[0], VAR_11);
 FUNC_4(&VAR_3->in_flight);

 return 0;
}
