
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct zfcp_scsi_dev {TYPE_5__* port; int lun_handle; int status; } ;
struct zfcp_qdio {int req_q_lock; TYPE_3__* adapter; } ;
struct zfcp_fsf_req {TYPE_8__* qtcb; int handler; struct scsi_device* data; int qdio_req; } ;
struct scsi_device {int dummy; } ;
struct scsi_cmnd {scalar_t__ host_scribble; struct scsi_device* device; } ;
struct TYPE_14__ {scalar_t__ req_handle; } ;
struct TYPE_15__ {TYPE_6__ support; } ;
struct TYPE_12__ {int port_handle; int lun_handle; } ;
struct TYPE_16__ {TYPE_7__ bottom; TYPE_4__ header; } ;
struct TYPE_13__ {int handle; TYPE_1__* adapter; } ;
struct TYPE_10__ {int scsi_abort; } ;
struct TYPE_11__ {TYPE_2__ pool; } ;
struct TYPE_9__ {struct zfcp_qdio* qdio; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 struct zfcp_scsi_dev* FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_4 ;
 struct zfcp_fsf_req* FUNC_6 (struct zfcp_qdio*,int ,int ,int ) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 int FUNC_9 (struct zfcp_fsf_req*,int ) ;
 scalar_t__ FUNC_10 (struct zfcp_qdio*) ;
 int FUNC_11 (struct zfcp_qdio*,int *) ;

struct zfcp_fsf_req *FUNC_12(struct scsi_cmnd *VAR_5)
{
 struct zfcp_fsf_req *VAR_6 = ((void*)0);
 struct scsi_device *VAR_7 = VAR_5->device;
 struct zfcp_scsi_dev *VAR_8 = FUNC_2(VAR_7);
 struct zfcp_qdio *VAR_9 = VAR_8->port->adapter->qdio;
 unsigned long VAR_10 = (unsigned long) VAR_5->host_scribble;

 FUNC_3(&VAR_9->req_q_lock);
 if (FUNC_10(VAR_9))
  goto out;
 VAR_6 = FUNC_6(VAR_9, VAR_0,
      VAR_1,
      VAR_9->adapter->pool.scsi_abort);
 if (FUNC_0(VAR_6)) {
  VAR_6 = ((void*)0);
  goto out;
 }

 if (FUNC_5(!(FUNC_1(&VAR_8->status) &
         VAR_3)))
  goto out_error_free;

 FUNC_11(VAR_9, &VAR_6->qdio_req);

 VAR_6->data = VAR_7;
 VAR_6->handler = VAR_4;
 VAR_6->qtcb->header.lun_handle = VAR_8->lun_handle;
 VAR_6->qtcb->header.port_handle = VAR_8->port->handle;
 VAR_6->qtcb->bottom.support.req_handle = (u64) VAR_10;

 FUNC_9(VAR_6, VAR_2);
 if (!FUNC_8(VAR_6)) {

  goto out;
 }

out_error_free:
 FUNC_7(VAR_6);
 VAR_6 = ((void*)0);
out:
 FUNC_4(&VAR_9->req_q_lock);
 return VAR_6;
}
