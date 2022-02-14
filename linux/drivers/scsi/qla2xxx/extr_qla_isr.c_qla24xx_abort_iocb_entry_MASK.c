
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int comp_status; } ;
struct TYPE_9__ {TYPE_2__ abt; } ;
struct srb_iocb {TYPE_3__ u; } ;
struct req_que {int dummy; } ;
struct abort_entry_24xx {int nport_handle; } ;
struct TYPE_7__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_10__ {int (* done ) (TYPE_4__*,int ) ;TYPE_1__ u; } ;
typedef TYPE_4__ srb_t ;
typedef int scsi_qla_host_t ;


 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int *,char const*,struct req_que*,struct abort_entry_24xx*) ;
 int FUNC_2 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_3(scsi_qla_host_t *VAR_0, struct req_que *VAR_1,
 struct abort_entry_24xx *VAR_2)
{
 const char VAR_3[] = "ABT_IOCB";
 srb_t *VAR_4;
 struct srb_iocb *VAR_5;

 VAR_4 = FUNC_1(VAR_0, VAR_3, VAR_1, VAR_2);
 if (!VAR_4)
  return;

 VAR_5 = &VAR_4->u.iocb_cmd;
 VAR_5->u.abt.comp_status = FUNC_0(VAR_2->nport_handle);
 VAR_4->done(VAR_4, 0);
}
