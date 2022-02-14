
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct srb {int flags; TYPE_1__* cmd; scalar_t__ iocb_cnt; } ;
struct scsi_qla_host {int iocb_cnt; int host; } ;
struct scsi_cmnd {int dummy; } ;
struct TYPE_2__ {unsigned char* host_scribble; } ;


 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct scsi_cmnd* FUNC_1 (int ,int ) ;

struct srb *FUNC_2(struct scsi_qla_host *VAR_2,
    uint32_t VAR_3)
{
 struct srb *VAR_4 = ((void*)0);
 struct scsi_cmnd *VAR_5 = ((void*)0);

 VAR_5 = FUNC_1(VAR_2->host, VAR_3);
 if (!VAR_5)
  return VAR_4;

 VAR_4 = (struct srb *)FUNC_0(VAR_5);
 if (!VAR_4)
  return VAR_4;


 if (VAR_4->flags & VAR_1) {
  VAR_2->iocb_cnt -= VAR_4->iocb_cnt;
  if (VAR_4->cmd)
   VAR_4->cmd->host_scribble =
    (unsigned char *)(unsigned long) VAR_0;
 }
 return VAR_4;
}
