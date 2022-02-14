
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u32 ;
struct qedi_ctx {int dbg_ctx; } ;
struct TYPE_17__ {int ctrl_flags; } ;
struct TYPE_15__ {char* byte; } ;
struct TYPE_14__ {char* byte; } ;
struct TYPE_16__ {TYPE_2__ chap_password; TYPE_1__ chap_name; } ;
struct nvm_iscsi_block {TYPE_11__* target; TYPE_4__ generic; TYPE_3__ initiator; int id; } ;
typedef int ssize_t ;
typedef enum qedi_nvm_tgts { ____Placeholder_qedi_nvm_tgts } qedi_nvm_tgts ;
struct TYPE_22__ {int byte; } ;
struct TYPE_21__ {int byte; } ;
struct TYPE_20__ {char* byte; } ;
struct TYPE_19__ {char* byte; } ;
struct TYPE_18__ {char* byte; } ;
struct TYPE_12__ {int* value; } ;
struct TYPE_13__ {int ctrl_flags; TYPE_10__ lun; int generic_cont0; TYPE_9__ ipv4_addr; TYPE_8__ ipv6_addr; TYPE_7__ target_name; TYPE_6__ chap_password; TYPE_5__ chap_name; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int ,char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 struct nvm_iscsi_block* FUNC_2 (struct qedi_ctx*) ;
 int FUNC_3 (char*,int,char*,...) ;
 int FUNC_4 (char*,char*,char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct qedi_ctx *VAR_12, int VAR_13,
   char *VAR_14, enum qedi_nvm_tgts VAR_15)
{
 int VAR_16 = 1;
 u32 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 struct nvm_iscsi_block *VAR_22;
 char *VAR_23, *VAR_24;
 char *VAR_25, *VAR_26;

 VAR_22 = FUNC_2(VAR_12);
 if (!VAR_22)
  goto exit_show_tgt_info;

 FUNC_1(&VAR_12->dbg_ctx, VAR_10,
    "Port:%d, tgt_idx:%d\n",
    FUNC_0(VAR_22->id, VAR_2), VAR_15);

 VAR_17 = VAR_22->target[VAR_15].ctrl_flags &
       VAR_8;

 if (!VAR_17) {
  FUNC_1(&VAR_12->dbg_ctx, VAR_10,
     "Target disabled\n");
  goto exit_show_tgt_info;
 }

 VAR_18 = VAR_22->generic.ctrl_flags &
    VAR_6;
 VAR_21 = VAR_18 ? VAR_1 : VAR_0;
 VAR_19 = VAR_22->generic.ctrl_flags &
    VAR_4;
 VAR_23 = VAR_19 ? VAR_22->initiator.chap_name.byte : ((void*)0);
 VAR_24 = VAR_19 ? VAR_22->initiator.chap_password.byte : ((void*)0);

 VAR_20 = VAR_22->generic.ctrl_flags &
    VAR_5;
 VAR_25 = VAR_20 ? VAR_22->target[VAR_15].chap_name.byte : ((void*)0);
 VAR_26 = VAR_20 ? VAR_22->target[VAR_15].chap_password.byte : ((void*)0);

 switch (VAR_13) {
 case 132:
  VAR_16 = FUNC_4(VAR_14, "%.*s\n", VAR_7,
        VAR_22->target[VAR_15].target_name.byte);
  break;
 case 134:
  if (VAR_18)
   VAR_16 = FUNC_3(VAR_14, VAR_21, "%pI6\n",
          VAR_22->target[VAR_15].ipv6_addr.byte);
  else
   VAR_16 = FUNC_3(VAR_14, VAR_21, "%pI4\n",
          VAR_22->target[VAR_15].ipv4_addr.byte);
  break;
 case 130:
  VAR_16 = FUNC_3(VAR_14, 12, "%d\n",
         FUNC_0(VAR_22->target[VAR_15].generic_cont0,
      VAR_9));
  break;
 case 133:
  VAR_16 = FUNC_3(VAR_14, 22, "%.*d\n",
         VAR_22->target[VAR_15].lun.value[1],
         VAR_22->target[VAR_15].lun.value[0]);
  break;
 case 137:
  VAR_16 = FUNC_4(VAR_14, "%.*s\n", VAR_3,
        VAR_23);
  break;
 case 136:
  VAR_16 = FUNC_4(VAR_14, "%.*s\n", VAR_3,
        VAR_24);
  break;
 case 129:
  VAR_16 = FUNC_4(VAR_14, "%.*s\n", VAR_3,
        VAR_25);
  break;
 case 128:
  VAR_16 = FUNC_4(VAR_14, "%.*s\n", VAR_3,
        VAR_26);
  break;
 case 135:
  VAR_16 = FUNC_3(VAR_14, 3, "%hhd\n", VAR_11);
  break;
 case 131:
  VAR_16 = FUNC_3(VAR_14, 3, "0\n");
  break;
 default:
  VAR_16 = 0;
  break;
 }

exit_show_tgt_info:
 return VAR_16;
}
