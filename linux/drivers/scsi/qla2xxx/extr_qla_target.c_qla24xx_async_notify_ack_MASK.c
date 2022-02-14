
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct imm_ntfy_from_isp {int dummy; } ;
struct TYPE_13__ {struct imm_ntfy_from_isp* ntfy; } ;
struct TYPE_14__ {TYPE_1__ nack; } ;
struct TYPE_15__ {TYPE_2__ u; int timeout; } ;
struct TYPE_16__ {TYPE_3__ iocb_cmd; } ;
struct TYPE_17__ {int type; char* name; int (* free ) (TYPE_5__*) ;int handle; int done; TYPE_4__ u; } ;
typedef TYPE_5__ srb_t ;
typedef int scsi_qla_host_t ;
struct TYPE_18__ {int flags; int port_name; int fw_login_state; int deleted; } ;
typedef TYPE_6__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (int ,int *,int,char*,char*,int ,int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (int *,TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_5__*,scalar_t__) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;

int FUNC_6(scsi_qla_host_t *VAR_10, fc_port_t *VAR_11,
 struct imm_ntfy_from_isp *VAR_12, int VAR_13)
{
 int VAR_14 = VAR_5;
 srb_t *VAR_15;
 char *VAR_16 = ((void*)0);

 VAR_11->flags |= VAR_3;
 switch (VAR_13) {
 case 129:
  VAR_11->fw_login_state = VAR_1;
  VAR_16 = "PLOGI";
  break;
 case 128:
  VAR_11->fw_login_state = VAR_2;
  VAR_11->deleted = 0;
  VAR_16 = "PRLI";
  break;
 case 130:
  VAR_11->fw_login_state = VAR_0;
  VAR_16 = "LOGO";
  break;
 }

 VAR_15 = FUNC_2(VAR_10, VAR_11, VAR_4);
 if (!VAR_15)
  goto done;

 VAR_15->type = VAR_13;
 VAR_15->name = "nack";

 VAR_15->u.iocb_cmd.timeout = VAR_8;
 FUNC_3(VAR_15, FUNC_1(VAR_10)+2);

 VAR_15->u.iocb_cmd.u.nack.ntfy = VAR_12;
 VAR_15->done = VAR_9;

 FUNC_0(VAR_7, VAR_10, 0x20f4,
     "Async-%s %8phC hndl %x %s\n",
     VAR_15->name, VAR_11->port_name, VAR_15->handle, VAR_16);

 VAR_14 = FUNC_4(VAR_15);
 if (VAR_14 != VAR_6)
  goto done_free_sp;

 return VAR_14;

done_free_sp:
 VAR_15->free(VAR_15);
done:
 VAR_11->flags &= ~VAR_3;
 return VAR_14;
}
