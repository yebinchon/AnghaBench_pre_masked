
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_8__ {int* in_mb; } ;
struct TYPE_9__ {TYPE_2__ mbx; } ;
struct srb_iocb {TYPE_3__ u; } ;
struct req_que {int dummy; } ;
struct mbx_24xx_entry {int* mb; } ;
struct TYPE_7__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_10__ {int (* done ) (TYPE_4__*,int) ;TYPE_1__ u; } ;
typedef TYPE_4__ srb_t ;
typedef int scsi_qla_host_t ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int ,int ) ;
 TYPE_4__* FUNC_3 (int *,char const*,struct req_que*,struct mbx_24xx_entry*) ;
 int FUNC_4 (TYPE_4__*,int) ;

__attribute__((used)) static void
FUNC_5(scsi_qla_host_t *VAR_1, struct req_que *VAR_2,
    struct mbx_24xx_entry *VAR_3)
{
 const char VAR_4[] = "MBX-IOCB2";
 srb_t *VAR_5;
 struct srb_iocb *VAR_6;
 u16 VAR_7, VAR_8;
 int VAR_9;

 VAR_5 = FUNC_3(VAR_1, VAR_4, VAR_2, VAR_3);
 if (!VAR_5)
  return;

 VAR_6 = &VAR_5->u.iocb_cmd;
 VAR_7 = FUNC_2(FUNC_0(VAR_3->mb), FUNC_0(VAR_5->u.iocb_cmd.u.mbx.in_mb));

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  VAR_6->u.mbx.in_mb[VAR_8] = FUNC_1(VAR_3->mb[VAR_8]);

 VAR_9 = (VAR_6->u.mbx.in_mb[0] & VAR_0);

 VAR_5->done(VAR_5, VAR_9);
}
