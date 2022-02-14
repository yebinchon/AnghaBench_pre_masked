
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


typedef int u8 ;
struct zfcp_scsi_dev {TYPE_3__* port; int lun_handle; int status; } ;
struct zfcp_qdio {int req_q_lock; int req_q_full; int req_q_free; } ;
struct zfcp_fsf_req {int qdio_req; TYPE_6__* qtcb; int handler; struct scsi_cmnd* data; int status; scalar_t__ req_id; } ;
struct TYPE_7__ {int scsi_req; } ;
struct zfcp_adapter {struct zfcp_qdio* qdio; TYPE_1__ pool; } ;
struct scsi_device {int sector_size; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; unsigned char* host_scribble; struct scsi_device* device; } ;
struct fcp_cmnd {int dummy; } ;
struct TYPE_10__ {struct fcp_cmnd iu; } ;
struct fsf_qtcb_bottom_io {int ref_tag_value; int prot_data_length; TYPE_4__ fcp_cmnd; int data_direction; int data_block_length; int fcp_cmnd_length; int service_class; } ;
struct TYPE_11__ {struct fsf_qtcb_bottom_io io; } ;
struct TYPE_8__ {int port_handle; int lun_handle; } ;
struct TYPE_12__ {TYPE_5__ bottom; TYPE_2__ header; } ;
struct TYPE_9__ {int handle; struct zfcp_adapter* adapter; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct zfcp_fsf_req*) ;
 int FUNC_2 (struct zfcp_fsf_req*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_6 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 struct zfcp_scsi_dev* FUNC_10 (struct scsi_device*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (struct zfcp_adapter*) ;
 int FUNC_15 (struct fcp_cmnd*,struct scsi_cmnd*) ;
 int VAR_12 ;
 struct zfcp_fsf_req* FUNC_16 (struct zfcp_qdio*,int ,int ,int ) ;
 int FUNC_17 (struct zfcp_fsf_req*) ;
 int FUNC_18 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_19 (struct scsi_cmnd*,int *) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct zfcp_qdio*,int *,int ) ;
 int FUNC_22 (struct zfcp_qdio*,int *,scalar_t__) ;
 int FUNC_23 (struct zfcp_qdio*,int *) ;
 int FUNC_24 (struct zfcp_qdio*,int *) ;

int FUNC_25(struct scsi_cmnd *VAR_13)
{
 struct zfcp_fsf_req *VAR_14;
 struct fcp_cmnd *VAR_15;
 u8 VAR_16 = VAR_7;
 int VAR_17 = -VAR_2;
 struct scsi_device *VAR_18 = VAR_13->device;
 struct zfcp_scsi_dev *VAR_19 = FUNC_10(VAR_18);
 struct zfcp_adapter *VAR_20 = VAR_19->port->adapter;
 struct zfcp_qdio *VAR_21 = VAR_20->qdio;
 struct fsf_qtcb_bottom_io *VAR_22;
 unsigned long VAR_23;

 if (FUNC_13(!(FUNC_4(&VAR_19->status) &
         VAR_10)))
  return -VAR_1;

 FUNC_11(&VAR_21->req_q_lock, VAR_23);
 if (FUNC_4(&VAR_21->req_q_free) <= 0) {
  FUNC_3(&VAR_21->req_q_full);
  goto out;
 }

 if (VAR_13->sc_data_direction == VAR_0)
  VAR_16 = VAR_8;

 VAR_14 = FUNC_16(VAR_21, VAR_6,
      VAR_16, VAR_20->pool.scsi_req);

 if (FUNC_1(VAR_14)) {
  VAR_17 = FUNC_2(VAR_14);
  goto out;
 }

 VAR_13->host_scribble = (unsigned char *) VAR_14->req_id;

 VAR_22 = &VAR_14->qtcb->bottom.io;
 VAR_14->status |= VAR_11;
 VAR_14->data = VAR_13;
 VAR_14->handler = VAR_12;
 VAR_14->qtcb->header.lun_handle = VAR_19->lun_handle;
 VAR_14->qtcb->header.port_handle = VAR_19->port->handle;
 VAR_22->service_class = VAR_4;
 VAR_22->fcp_cmnd_length = VAR_3;

 if (FUNC_6(VAR_13) != VAR_9) {
  VAR_22->data_block_length = VAR_13->device->sector_size;
  VAR_22->ref_tag_value = FUNC_5(VAR_13) & 0xFFFFFFFF;
 }

 if (FUNC_19(VAR_13, &VAR_22->data_direction))
  goto failed_scsi_cmnd;

 FUNC_0(sizeof(struct fcp_cmnd) > VAR_5);
 VAR_15 = &VAR_14->qtcb->bottom.io.fcp_cmnd.iu;
 FUNC_15(VAR_15, VAR_13);

 if ((FUNC_6(VAR_13) != VAR_9) &&
     FUNC_7(VAR_13)) {
  FUNC_22(VAR_21, &VAR_14->qdio_req,
           FUNC_7(VAR_13));
  VAR_17 = FUNC_21(VAR_21, &VAR_14->qdio_req,
       FUNC_8(VAR_13));
  if (VAR_17)
   goto failed_scsi_cmnd;
  VAR_22->prot_data_length = FUNC_20(
      FUNC_8(VAR_13));
 }

 VAR_17 = FUNC_21(VAR_21, &VAR_14->qdio_req,
      FUNC_9(VAR_13));
 if (FUNC_13(VAR_17))
  goto failed_scsi_cmnd;

 FUNC_23(VAR_20->qdio, &VAR_14->qdio_req);
 if (FUNC_14(VAR_20))
  FUNC_24(VAR_21, &VAR_14->qdio_req);

 VAR_17 = FUNC_18(VAR_14);
 if (FUNC_13(VAR_17))
  goto failed_scsi_cmnd;


 goto out;

failed_scsi_cmnd:
 FUNC_17(VAR_14);
 VAR_13->host_scribble = ((void*)0);
out:
 FUNC_12(&VAR_21->req_q_lock, VAR_23);
 return VAR_17;
}
