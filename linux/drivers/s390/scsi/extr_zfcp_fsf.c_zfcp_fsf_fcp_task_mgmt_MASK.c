
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct zfcp_scsi_dev {TYPE_5__* port; int lun_handle; int status; } ;
struct zfcp_qdio {int req_q_lock; TYPE_3__* adapter; } ;
struct zfcp_fsf_req {TYPE_9__* qtcb; int qdio_req; int handler; struct scsi_device* data; } ;
struct scsi_device {int dummy; } ;
struct fcp_cmnd {int dummy; } ;
struct TYPE_15__ {struct fcp_cmnd iu; } ;
struct TYPE_16__ {TYPE_6__ fcp_cmnd; int fcp_cmnd_length; int service_class; int data_direction; } ;
struct TYPE_17__ {TYPE_7__ io; } ;
struct TYPE_13__ {int port_handle; int lun_handle; } ;
struct TYPE_18__ {TYPE_8__ bottom; TYPE_4__ header; } ;
struct TYPE_14__ {int handle; TYPE_1__* adapter; } ;
struct TYPE_11__ {int scsi_req; } ;
struct TYPE_12__ {TYPE_2__ pool; } ;
struct TYPE_10__ {struct zfcp_qdio* qdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 struct zfcp_scsi_dev* FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct fcp_cmnd*,struct scsi_device*,int ) ;
 int VAR_7 ;
 struct zfcp_fsf_req* FUNC_7 (struct zfcp_qdio*,int ,int ,int ) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 int FUNC_9 (struct zfcp_fsf_req*) ;
 int FUNC_10 (struct zfcp_fsf_req*,int ) ;
 scalar_t__ FUNC_11 (struct zfcp_qdio*) ;
 int FUNC_12 (struct zfcp_qdio*,int *) ;

struct zfcp_fsf_req *FUNC_13(struct scsi_device *VAR_8,
         u8 VAR_9)
{
 struct zfcp_fsf_req *VAR_10 = ((void*)0);
 struct fcp_cmnd *VAR_11;
 struct zfcp_scsi_dev *VAR_12 = FUNC_2(VAR_8);
 struct zfcp_qdio *VAR_13 = VAR_12->port->adapter->qdio;

 if (FUNC_5(!(FUNC_1(&VAR_12->status) &
         VAR_6)))
  return ((void*)0);

 FUNC_3(&VAR_13->req_q_lock);
 if (FUNC_11(VAR_13))
  goto out;

 VAR_10 = FUNC_7(VAR_13, VAR_3,
      VAR_4,
      VAR_13->adapter->pool.scsi_req);

 if (FUNC_0(VAR_10)) {
  VAR_10 = ((void*)0);
  goto out;
 }

 VAR_10->data = VAR_8;

 VAR_10->handler = VAR_7;
 VAR_10->qtcb->header.lun_handle = VAR_12->lun_handle;
 VAR_10->qtcb->header.port_handle = VAR_12->port->handle;
 VAR_10->qtcb->bottom.io.data_direction = VAR_2;
 VAR_10->qtcb->bottom.io.service_class = VAR_1;
 VAR_10->qtcb->bottom.io.fcp_cmnd_length = VAR_0;

 FUNC_12(VAR_13, &VAR_10->qdio_req);

 VAR_11 = &VAR_10->qtcb->bottom.io.fcp_cmnd.iu;
 FUNC_6(VAR_11, VAR_8, VAR_9);

 FUNC_10(VAR_10, VAR_5);
 if (!FUNC_9(VAR_10)) {

  goto out;
 }

 FUNC_8(VAR_10);
 VAR_10 = ((void*)0);
out:
 FUNC_4(&VAR_13->req_q_lock);
 return VAR_10;
}
