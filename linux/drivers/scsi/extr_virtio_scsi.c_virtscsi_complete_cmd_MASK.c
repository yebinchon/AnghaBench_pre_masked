
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtio_scsi_cmd_resp {int response; scalar_t__ sense_len; int sense; scalar_t__ resid; int status; } ;
struct TYPE_3__ {struct virtio_scsi_cmd_resp cmd; } ;
struct virtio_scsi_cmd {TYPE_1__ resp; struct scsi_cmnd* sc; } ;
struct virtio_scsi {int vdev; } ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;scalar_t__ sense_buffer; int result; TYPE_2__* device; } ;
struct TYPE_4__ {int sdev_gendev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,struct scsi_cmnd*,int,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,struct scsi_cmnd*,char*,int) ;
 int FUNC_5 (struct scsi_cmnd*,int ) ;
 int FUNC_6 (struct scsi_cmnd*,int ) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 int VAR_12 ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (struct scsi_cmnd*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct virtio_scsi *VAR_13, void *VAR_14)
{
 struct virtio_scsi_cmd *VAR_15 = VAR_14;
 struct scsi_cmnd *VAR_16 = VAR_15->sc;
 struct virtio_scsi_cmd_resp *VAR_17 = &VAR_15->resp.cmd;

 FUNC_1(&VAR_16->device->sdev_gendev,
  "cmd %p response %u status %#02x sense_len %u\n",
  VAR_16, VAR_17->response, VAR_17->status, VAR_17->sense_len);

 VAR_16->result = VAR_17->status;
 FUNC_9(VAR_16, FUNC_8(VAR_13->vdev, VAR_17->resid));
 switch (VAR_17->response) {
 case 132:
  FUNC_6(VAR_16, VAR_5);
  break;
 case 131:
  FUNC_6(VAR_16, VAR_3);
  break;
 case 137:
  FUNC_6(VAR_16, VAR_0);
  break;
 case 136:
  FUNC_6(VAR_16, VAR_1);
  break;
 case 130:
  FUNC_6(VAR_16, VAR_6);
  break;
 case 135:
  FUNC_6(VAR_16, VAR_2);
  break;
 case 128:
  FUNC_6(VAR_16, VAR_8);
  break;
 case 129:
  FUNC_6(VAR_16, VAR_7);
  break;
 case 133:
  FUNC_6(VAR_16, VAR_4);
  break;
 default:
  FUNC_4(VAR_10, VAR_16, "Unknown response %d",
       VAR_17->response);

 case 134:
  FUNC_6(VAR_16, VAR_3);
  break;
 }

 FUNC_0(FUNC_8(VAR_13->vdev, VAR_17->sense_len) >
  VAR_11);
 if (VAR_16->sense_buffer) {
  FUNC_2(VAR_16->sense_buffer, VAR_17->sense,
         FUNC_3(VAR_12,
        FUNC_8(VAR_13->vdev, VAR_17->sense_len),
        VAR_11));
  if (VAR_17->sense_len)
   FUNC_5(VAR_16, VAR_9);
 }

 VAR_16->scsi_done(VAR_16);
}
