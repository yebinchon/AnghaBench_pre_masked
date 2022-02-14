
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


struct vnic_wq_copy {int dummy; } ;
struct scsi_lun {int scsi_lun; } ;
struct scsi_cmnd {TYPE_3__* request; TYPE_2__* device; } ;
struct misc_stats {int devrst_cpwq_alloc_failures; } ;
struct fnic_io_req {int port_id; } ;
struct TYPE_11__ {int active_fw_reqs; int max_fw_reqs; } ;
struct TYPE_12__ {TYPE_5__ fw_stats; struct misc_stats misc_stats; } ;
struct TYPE_10__ {int ed_tov; int ra_tov; } ;
struct fnic {scalar_t__* wq_copy_desc_low; int in_flight; int * wq_copy_lock; TYPE_6__ fnic_stats; TYPE_4__ config; TYPE_1__* lport; struct vnic_wq_copy* wq_copy; } ;
struct Scsi_Host {int * host_lock; } ;
struct TYPE_9__ {int tag; } ;
struct TYPE_8__ {int lun; } ;
struct TYPE_7__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct Scsi_Host*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct fnic*,int ) ;
 int FUNC_7 (struct vnic_wq_copy*,int,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (struct fnic*,struct vnic_wq_copy*) ;
 int FUNC_9 (int ,struct scsi_lun*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct vnic_wq_copy*) ;

__attribute__((used)) static inline int FUNC_14(struct fnic *VAR_7,
           struct scsi_cmnd *VAR_8,
           struct fnic_io_req *VAR_9)
{
 struct vnic_wq_copy *VAR_10 = &VAR_7->wq_copy[0];
 struct Scsi_Host *VAR_11 = VAR_7->lport->host;
 struct misc_stats *VAR_12 = &VAR_7->fnic_stats.misc_stats;
 struct scsi_lun VAR_13;
 int VAR_14 = 0;
 unsigned long VAR_15;

 FUNC_10(VAR_11->host_lock, VAR_15);
 if (FUNC_12(FUNC_6(VAR_7,
      VAR_3))) {
  FUNC_11(VAR_11->host_lock, VAR_15);
  return VAR_1;
 } else
  FUNC_5(&VAR_7->in_flight);
 FUNC_11(VAR_11->host_lock, VAR_15);

 FUNC_10(&VAR_7->wq_copy_lock[0], VAR_15);

 if (FUNC_13(VAR_10) <= VAR_7->wq_copy_desc_low[0])
  FUNC_8(VAR_7, VAR_10);

 if (!FUNC_13(VAR_10)) {
  FUNC_0(VAR_5, VAR_7->lport->host,
     "queue_dr_io_req failure - no descriptors\n");
  FUNC_1(&VAR_12->devrst_cpwq_alloc_failures);
  VAR_14 = -VAR_0;
  goto lr_io_req_end;
 }


 FUNC_9(VAR_8->device->lun, &VAR_13);

 FUNC_7(VAR_10, VAR_8->request->tag | VAR_4,
         0, VAR_2, VAR_6,
         VAR_13.scsi_lun, VAR_9->port_id,
         VAR_7->config.ra_tov, VAR_7->config.ed_tov);

 FUNC_1(&VAR_7->fnic_stats.fw_stats.active_fw_reqs);
 if (FUNC_2(&VAR_7->fnic_stats.fw_stats.active_fw_reqs) >
    FUNC_2(&VAR_7->fnic_stats.fw_stats.max_fw_reqs))
  FUNC_3(&VAR_7->fnic_stats.fw_stats.max_fw_reqs,
    FUNC_2(&VAR_7->fnic_stats.fw_stats.active_fw_reqs));

lr_io_req_end:
 FUNC_11(&VAR_7->wq_copy_lock[0], VAR_15);
 FUNC_4(&VAR_7->in_flight);

 return VAR_14;
}
