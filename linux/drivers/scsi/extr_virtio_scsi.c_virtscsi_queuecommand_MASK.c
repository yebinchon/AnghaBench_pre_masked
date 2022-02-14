
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


struct virtio_scsi_vq {int vq_lock; } ;
struct TYPE_9__ {int response; } ;
struct TYPE_10__ {TYPE_3__ cmd; } ;
struct TYPE_12__ {int cdb; } ;
struct TYPE_11__ {int cdb; } ;
struct TYPE_8__ {TYPE_6__ cmd; TYPE_5__ cmd_pi; } ;
struct virtio_scsi_cmd {TYPE_4__ resp; TYPE_2__ req; struct scsi_cmnd* sc; } ;
struct virtio_scsi {int vdev; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; int flags; int cmd_len; int * cmnd; TYPE_1__* device; } ;
struct Scsi_Host {scalar_t__ sg_tablesize; } ;
struct TYPE_7__ {int sdev_gendev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,struct scsi_cmnd*,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 struct virtio_scsi_cmd* FUNC_3 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_4 (struct scsi_cmnd*) ;
 struct virtio_scsi* FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,TYPE_6__*,struct scsi_cmnd*) ;
 int FUNC_10 (int ,TYPE_5__*,struct scsi_cmnd*) ;
 int FUNC_11 (struct virtio_scsi_vq*,struct virtio_scsi_cmd*,int,int,int) ;
 int FUNC_12 (struct virtio_scsi*,struct virtio_scsi_cmd*) ;
 struct virtio_scsi_vq* FUNC_13 (struct virtio_scsi*,struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_14(struct Scsi_Host *VAR_7,
     struct scsi_cmnd *VAR_8)
{
 struct virtio_scsi *VAR_9 = FUNC_5(VAR_7);
 struct virtio_scsi_vq *VAR_10 = FUNC_13(VAR_9, VAR_8);
 struct virtio_scsi_cmd *VAR_11 = FUNC_3(VAR_8);
 bool VAR_12;
 unsigned long VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_0(FUNC_4(VAR_8) > VAR_7->sg_tablesize);


 FUNC_0(VAR_8->sc_data_direction == VAR_0);

 FUNC_1(&VAR_8->device->sdev_gendev,
  "cmd %p CDB: %#02x\n", VAR_8, VAR_8->cmnd[0]);

 VAR_11->sc = VAR_8;

 FUNC_0(VAR_8->cmd_len > VAR_4);
 {
  FUNC_9(VAR_9->vdev, &VAR_11->req.cmd, VAR_8);
  FUNC_2(VAR_11->req.cmd.cdb, VAR_8->cmnd, VAR_8->cmd_len);
  VAR_14 = sizeof(VAR_11->req.cmd);
 }

 VAR_12 = (VAR_8->flags & VAR_2) != 0;
 VAR_15 = FUNC_11(VAR_10, VAR_11, VAR_14, sizeof(VAR_11->resp.cmd), VAR_12);
 if (VAR_15 == -VAR_1) {
  VAR_11->resp.cmd.response = VAR_6;
  FUNC_6(&VAR_10->vq_lock, VAR_13);
  FUNC_12(VAR_9, VAR_11);
  FUNC_7(&VAR_10->vq_lock, VAR_13);
 } else if (VAR_15 != 0) {
  return VAR_3;
 }
 return 0;
}
