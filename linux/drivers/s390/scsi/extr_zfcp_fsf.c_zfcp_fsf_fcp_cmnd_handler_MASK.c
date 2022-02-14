
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


struct zfcp_fsf_req {int status; TYPE_6__* adapter; TYPE_5__* qtcb; struct scsi_cmnd* data; } ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;int * host_scribble; int device; } ;
struct fcp_resp_with_ext {int dummy; } ;
struct TYPE_12__ {int abort_lock; } ;
struct TYPE_8__ {struct fcp_resp_with_ext iu; } ;
struct TYPE_9__ {TYPE_2__ fcp_rsp; } ;
struct TYPE_10__ {TYPE_3__ io; } ;
struct TYPE_7__ {int fsf_status; } ;
struct TYPE_11__ {TYPE_4__ bottom; TYPE_1__ header; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;



 int VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct scsi_cmnd*,int ) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct scsi_cmnd*,struct zfcp_fsf_req*) ;
 int FUNC_7 (struct fcp_resp_with_ext*,struct scsi_cmnd*) ;
 int FUNC_8 (struct zfcp_fsf_req*,int ) ;
 int FUNC_9 (struct zfcp_fsf_req*,struct scsi_cmnd*) ;
 int FUNC_10 (struct scsi_cmnd*,int) ;

__attribute__((used)) static void FUNC_11(struct zfcp_fsf_req *VAR_4)
{
 struct scsi_cmnd *VAR_5;
 struct fcp_resp_with_ext *VAR_6;
 unsigned long VAR_7;

 FUNC_1(&VAR_4->adapter->abort_lock, VAR_7);

 VAR_5 = VAR_4->data;
 if (FUNC_5(!VAR_5)) {
  FUNC_2(&VAR_4->adapter->abort_lock, VAR_7);
  return;
 }

 FUNC_8(VAR_4, VAR_5->device);

 if (FUNC_5(VAR_4->status & VAR_3)) {
  FUNC_3(VAR_5, VAR_1);
  goto skip_fsfstatus;
 }

 switch (VAR_4->qtcb->header.fsf_status) {
 case 130:
 case 129:
  FUNC_3(VAR_5, VAR_0);
  goto skip_fsfstatus;
 case 131:
  FUNC_10(VAR_5, 0x1);
  goto skip_fsfstatus;
 case 132:
  FUNC_10(VAR_5, 0x2);
  goto skip_fsfstatus;
 case 128:
  FUNC_10(VAR_5, 0x3);
  goto skip_fsfstatus;
 }
 FUNC_0(sizeof(struct fcp_resp_with_ext) > VAR_2);
 VAR_6 = &VAR_4->qtcb->bottom.io.fcp_rsp.iu;
 FUNC_7(VAR_6, VAR_5);

skip_fsfstatus:
 FUNC_9(VAR_4, VAR_5);
 FUNC_6(VAR_5, VAR_4);

 VAR_5->host_scribble = ((void*)0);
 (VAR_5->scsi_done) (VAR_5);






 FUNC_2(&VAR_4->adapter->abort_lock, VAR_7);
}
