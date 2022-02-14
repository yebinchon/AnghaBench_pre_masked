
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ qpairs_req_created; } ;
struct scsi_qla_host {TYPE_1__ flags; } ;
struct req_que {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_qla_host*,struct req_que*) ;
 int FUNC_1 (struct scsi_qla_host*,struct req_que*) ;

int
FUNC_2(struct scsi_qla_host *VAR_3, struct req_que *VAR_4)
{
 int VAR_5 = VAR_2;

 if (VAR_4 && VAR_3->flags.qpairs_req_created) {
  VAR_4->options |= VAR_0;
  VAR_5 = FUNC_1(VAR_3, VAR_4);
  if (VAR_5 != VAR_2)
   return VAR_1;

  FUNC_0(VAR_3, VAR_4);
 }

 return VAR_5;
}
