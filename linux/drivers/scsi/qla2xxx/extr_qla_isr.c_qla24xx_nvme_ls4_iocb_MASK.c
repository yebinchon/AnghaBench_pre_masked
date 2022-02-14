
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct scsi_qla_host {int dummy; } ;
struct req_que {int dummy; } ;
struct pt_ls4_request {int status; } ;
struct TYPE_4__ {int (* done ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ srb_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct scsi_qla_host*,char const*,struct req_que*,struct pt_ls4_request*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

void FUNC_3(struct scsi_qla_host *VAR_0,
    struct pt_ls4_request *VAR_1, struct req_que *VAR_2)
{
 srb_t *VAR_3;
 const char VAR_4[] = "LS4_IOCB";
 uint16_t VAR_5;

 VAR_3 = FUNC_1(VAR_0, VAR_4, VAR_2, VAR_1);
 if (!VAR_3)
  return;

 VAR_5 = FUNC_0(VAR_1->status);
 VAR_3->done(VAR_3, VAR_5);
}
