
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_19__ {int cmd_rsp_len; } ;
struct atto_vda_cfg_rsp {int fw_release; int fw_build; int vda_version; } ;
struct TYPE_26__ {int length; int dev_index; int scan_generation; } ;
struct TYPE_25__ {int file_size; } ;
struct TYPE_20__ {TYPE_13__ cli_rsp; struct atto_vda_cfg_rsp cfg_rsp; TYPE_5__ mgt_rsp; TYPE_4__ flash_rsp; } ;
struct esas2r_request {TYPE_14__ func_rsp; TYPE_10__* vrq; int req_stat; scalar_t__ interrupt_cx; } ;
struct esas2r_adapter {int dummy; } ;
struct atto_vda_cfg_init {int dummy; } ;
struct TYPE_29__ {int fw_release; int fw_version; int fw_build; void* vda_version; } ;
struct TYPE_21__ {TYPE_8__ init; } ;
struct atto_ioctl_vda_cfg_cmd {TYPE_15__ data; int data_length; int cfg_func; } ;
struct TYPE_17__ {void* cmd_rsp_len; } ;
struct TYPE_28__ {int data; void* data_length; int dev_index; int scan_generation; } ;
struct TYPE_22__ {void* file_size; } ;
struct TYPE_23__ {TYPE_1__ file; } ;
struct TYPE_24__ {TYPE_2__ data; int sub_func; } ;
struct TYPE_18__ {TYPE_11__ cli; struct atto_ioctl_vda_cfg_cmd cfg; TYPE_7__ mgt; TYPE_3__ flash; } ;
struct atto_ioctl_vda {int function; TYPE_12__ cmd; int data_length; int vda_status; } ;
typedef int buf ;
struct TYPE_30__ {int sub_func; } ;
struct TYPE_27__ {int mgt_func; } ;
struct TYPE_16__ {TYPE_9__ cfg; TYPE_6__ mgt; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 char FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_3 (int) ;
 int FUNC_4 (int ,TYPE_15__*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (char*,int,char*,int,int) ;

__attribute__((used)) static void FUNC_10(struct esas2r_adapter *VAR_3,
          struct esas2r_request *VAR_4)
{
 struct atto_ioctl_vda *VAR_5 = (struct atto_ioctl_vda *)VAR_4->interrupt_cx;

 VAR_5->vda_status = VAR_4->req_stat;

 switch (VAR_5->function) {
 case 129:

  if (VAR_5->cmd.flash.sub_func == VAR_1
      || VAR_5->cmd.flash.sub_func == VAR_2)
   VAR_5->cmd.flash.data.file.file_size =
    FUNC_7(VAR_4->func_rsp.flash_rsp.file_size);

  break;

 case 128:

  VAR_5->cmd.mgt.scan_generation =
   VAR_4->func_rsp.mgt_rsp.scan_generation;
  VAR_5->cmd.mgt.dev_index = FUNC_6(
   VAR_4->func_rsp.mgt_rsp.dev_index);

  if (VAR_5->data_length == 0)
   VAR_5->cmd.mgt.data_length =
    FUNC_7(VAR_4->func_rsp.mgt_rsp.length);

  FUNC_5(VAR_4->vrq->mgt.mgt_func, &VAR_5->cmd.mgt.data);
  break;

 case 131:

  if (VAR_5->cmd.cfg.cfg_func == VAR_0) {
   struct atto_ioctl_vda_cfg_cmd *VAR_6 = &VAR_5->cmd.cfg;
   struct atto_vda_cfg_rsp *VAR_7 = &VAR_4->func_rsp.cfg_rsp;
   char VAR_8[sizeof(VAR_6->data.init.fw_release) + 1];

   VAR_6->data_length =
    FUNC_3(sizeof(struct atto_vda_cfg_init));
   VAR_6->data.init.vda_version =
    FUNC_7(VAR_7->vda_version);
   VAR_6->data.init.fw_build = VAR_7->fw_build;

   FUNC_9(VAR_8, sizeof(VAR_8), "%1.1u.%2.2u",
     (int)FUNC_1(FUNC_6(VAR_7->fw_release)),
     (int)FUNC_0(FUNC_6(VAR_7->fw_release)));

   FUNC_8(&VAR_6->data.init.fw_release, VAR_8,
          sizeof(VAR_6->data.init.fw_release));

   if (FUNC_2(FUNC_1(VAR_6->data.init.fw_build)) == 'A')
    VAR_6->data.init.fw_version =
     VAR_6->data.init.fw_build;
   else
    VAR_6->data.init.fw_version =
     VAR_6->data.init.fw_release;
  } else {
   FUNC_4(VAR_4->vrq->cfg.sub_func,
          &VAR_5->cmd.cfg.data);
  }

  break;

 case 130:

  VAR_5->cmd.cli.cmd_rsp_len =
   FUNC_7(VAR_4->func_rsp.cli_rsp.cmd_rsp_len);
  break;

 default:

  break;
 }
}
