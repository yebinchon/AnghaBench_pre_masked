
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_scsi_req_filter {scalar_t__ port_handle; scalar_t__ tmf_scope; scalar_t__ lun_handle; } ;
struct zfcp_fsf_req {int * data; TYPE_2__* qtcb; } ;
struct scsi_cmnd {int dummy; } ;
struct TYPE_3__ {scalar_t__ fsf_command; scalar_t__ port_handle; scalar_t__ lun_handle; } ;
struct TYPE_4__ {TYPE_1__ header; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct scsi_cmnd*,struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_1 (struct zfcp_fsf_req*) ;

__attribute__((used)) static void FUNC_2(struct zfcp_fsf_req *VAR_2, void *VAR_3)
{
 struct zfcp_scsi_req_filter *VAR_4 =
  (struct zfcp_scsi_req_filter *)VAR_3;


 if (VAR_2->data == ((void*)0) ||
     FUNC_1(VAR_2) ||
     VAR_2->qtcb->header.fsf_command != VAR_1)
  return;


 if (VAR_2->qtcb->header.port_handle != VAR_4->port_handle)
  return;

 if (VAR_4->tmf_scope == VAR_0 &&
     VAR_2->qtcb->header.lun_handle != VAR_4->lun_handle)
  return;

 FUNC_0((struct scsi_cmnd *)VAR_2->data, VAR_2);
 VAR_2->data = ((void*)0);
}
