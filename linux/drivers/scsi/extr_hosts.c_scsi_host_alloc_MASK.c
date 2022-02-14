
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct scsi_host_template {scalar_t__ supported_mode; int dma_boundary; scalar_t__ virt_boundary_mask; scalar_t__ max_segment_size; scalar_t__ max_sectors; scalar_t__ max_host_blocked; int eh_host_reset_handler; int no_write_same; scalar_t__ unchecked_isa_dma; int cmd_per_lun; int sg_prot_tablesize; int sg_tablesize; int can_queue; int this_id; } ;
struct TYPE_3__ {int groups; int * class; struct TYPE_3__* parent; int * type; int * bus; } ;
struct Scsi_Host {int host_no; int dma_channel; int max_id; int max_lun; int max_cmd_len; int eh_deadline; scalar_t__ active_mode; int dma_boundary; int ehandler; struct scsi_host_template* hostt; int tmf_work_q; TYPE_1__ shost_dev; TYPE_1__ shost_gendev; scalar_t__ virt_boundary_mask; scalar_t__ max_segment_size; scalar_t__ max_sectors; scalar_t__ max_host_blocked; int no_write_same; scalar_t__ unchecked_isa_dma; int cmd_per_lun; int sg_prot_tablesize; int sg_tablesize; int can_queue; int this_id; int * transportt; scalar_t__ max_channel; int scan_mutex; int host_wait; int starved_list; int eh_cmd_q; int __targets; int __devices; int shost_state; int * host_lock; int default_lock; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (char*,int,int,int) ;
 int VAR_13 ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_14 ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (int ,struct Scsi_Host*,char*,int) ;
 int FUNC_11 (int ) ;
 struct Scsi_Host* FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_14 (struct scsi_host_template*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_15 (int ,struct Scsi_Host*,char*,...) ;
 int FUNC_16 (int *) ;

struct Scsi_Host *FUNC_17(struct scsi_host_template *VAR_21, int VAR_22)
{
 struct Scsi_Host *VAR_23;
 gfp_t VAR_24 = VAR_1;
 int VAR_25;

 if (VAR_21->unchecked_isa_dma && VAR_22)
  VAR_24 |= VAR_12;

 VAR_23 = FUNC_12(sizeof(struct Scsi_Host) + VAR_22, VAR_24);
 if (!VAR_23)
  return ((void*)0);

 VAR_23->host_lock = &VAR_23->default_lock;
 FUNC_16(VAR_23->host_lock);
 VAR_23->shost_state = VAR_9;
 FUNC_0(&VAR_23->__devices);
 FUNC_0(&VAR_23->__targets);
 FUNC_0(&VAR_23->eh_cmd_q);
 FUNC_0(&VAR_23->starved_list);
 FUNC_8(&VAR_23->host_wait);
 FUNC_13(&VAR_23->scan_mutex);

 VAR_25 = FUNC_6(&VAR_14, 0, 0, VAR_1);
 if (VAR_25 < 0)
  goto fail_kfree;
 VAR_23->host_no = VAR_25;

 VAR_23->dma_channel = 0xff;


 VAR_23->max_channel = 0;
 VAR_23->max_id = 8;
 VAR_23->max_lun = 8;


 VAR_23->transportt = &VAR_13;







 VAR_23->max_cmd_len = 12;
 VAR_23->hostt = VAR_21;
 VAR_23->this_id = VAR_21->this_id;
 VAR_23->can_queue = VAR_21->can_queue;
 VAR_23->sg_tablesize = VAR_21->sg_tablesize;
 VAR_23->sg_prot_tablesize = VAR_21->sg_prot_tablesize;
 VAR_23->cmd_per_lun = VAR_21->cmd_per_lun;
 VAR_23->unchecked_isa_dma = VAR_21->unchecked_isa_dma;
 VAR_23->no_write_same = VAR_21->no_write_same;

 if (VAR_20 == -1 || !VAR_21->eh_host_reset_handler)
  VAR_23->eh_deadline = -1;
 else if ((ulong) VAR_20 * VAR_2 > VAR_3) {
  FUNC_15(VAR_4, VAR_23,
        "eh_deadline %u too large, setting to %u\n",
        VAR_20, VAR_3 / VAR_2);
  VAR_23->eh_deadline = VAR_3;
 } else
  VAR_23->eh_deadline = VAR_20 * VAR_2;

 if (VAR_21->supported_mode == VAR_6)

  VAR_23->active_mode = VAR_5;
 else
  VAR_23->active_mode = VAR_21->supported_mode;

 if (VAR_21->max_host_blocked)
  VAR_23->max_host_blocked = VAR_21->max_host_blocked;
 else
  VAR_23->max_host_blocked = VAR_7;





 if (VAR_21->max_sectors)
  VAR_23->max_sectors = VAR_21->max_sectors;
 else
  VAR_23->max_sectors = VAR_8;

 if (VAR_21->max_segment_size)
  VAR_23->max_segment_size = VAR_21->max_segment_size;
 else
  VAR_23->max_segment_size = VAR_0;




 if (VAR_21->dma_boundary)
  VAR_23->dma_boundary = VAR_21->dma_boundary;
 else
  VAR_23->dma_boundary = 0xffffffff;

 if (VAR_21->virt_boundary_mask)
  VAR_23->virt_boundary_mask = VAR_21->virt_boundary_mask;

 FUNC_5(&VAR_23->shost_gendev);
 FUNC_4(&VAR_23->shost_gendev, "host%d", VAR_23->host_no);
 VAR_23->shost_gendev.bus = &VAR_15;
 VAR_23->shost_gendev.type = &VAR_17;

 FUNC_5(&VAR_23->shost_dev);
 VAR_23->shost_dev.parent = &VAR_23->shost_gendev;
 VAR_23->shost_dev.class = &VAR_19;
 FUNC_4(&VAR_23->shost_dev, "host%d", VAR_23->host_no);
 VAR_23->shost_dev.groups = VAR_18;

 VAR_23->ehandler = FUNC_10(VAR_16, VAR_23,
   "scsi_eh_%d", VAR_23->host_no);
 if (FUNC_1(VAR_23->ehandler)) {
  FUNC_15(VAR_4, VAR_23,
   "error handler thread failed to spawn, error = %ld\n",
   FUNC_2(VAR_23->ehandler));
  goto fail_index_remove;
 }

 VAR_23->tmf_work_q = FUNC_3("scsi_tmf_%d",
         VAR_11 | VAR_10,
        1, VAR_23->host_no);
 if (!VAR_23->tmf_work_q) {
  FUNC_15(VAR_4, VAR_23,
        "failed to create tmf workq\n");
  goto fail_kthread;
 }
 FUNC_14(VAR_23->hostt);
 return VAR_23;

 fail_kthread:
 FUNC_11(VAR_23->ehandler);
 fail_index_remove:
 FUNC_7(&VAR_14, VAR_23->host_no);
 fail_kfree:
 FUNC_9(VAR_23);
 return ((void*)0);
}
