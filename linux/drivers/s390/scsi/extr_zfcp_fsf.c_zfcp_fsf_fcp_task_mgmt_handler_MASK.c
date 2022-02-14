
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zfcp_fsf_req {int status; TYPE_4__* qtcb; struct scsi_device* data; } ;
struct scsi_device {int dummy; } ;
struct fcp_resp_with_ext {int dummy; } ;
struct fcp_resp_rsp_info {scalar_t__ rsp_code; } ;
struct TYPE_5__ {struct fcp_resp_with_ext iu; } ;
struct TYPE_6__ {TYPE_1__ fcp_rsp; } ;
struct TYPE_7__ {TYPE_2__ io; } ;
struct TYPE_8__ {TYPE_3__ bottom; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zfcp_fsf_req*,struct scsi_device*) ;

__attribute__((used)) static void FUNC_1(struct zfcp_fsf_req *VAR_3)
{
 struct scsi_device *VAR_4 = VAR_3->data;
 struct fcp_resp_with_ext *VAR_5;
 struct fcp_resp_rsp_info *VAR_6;

 FUNC_0(VAR_3, VAR_4);

 VAR_5 = &VAR_3->qtcb->bottom.io.fcp_rsp.iu;
 VAR_6 = (struct fcp_resp_rsp_info *) &VAR_5[1];

 if ((VAR_6->rsp_code != VAR_0) ||
      (VAR_3->status & VAR_1))
  VAR_3->status |= VAR_2;
}
