
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
typedef int tn_buf ;
struct nfp_prog {struct nfp_app_bpf* bpf; } ;
struct TYPE_15__ {int mask; int value; } ;
struct bpf_reg_state {int type; TYPE_7__ var_off; } ;
struct TYPE_16__ {struct bpf_reg_state reg; } ;
struct TYPE_9__ {int imm; } ;
struct nfp_insn_meta {int func_id; TYPE_8__ arg2; struct bpf_reg_state arg1; TYPE_1__ insn; } ;
struct TYPE_11__ {int perf_event_output; int map_delete; int map_update; int map_lookup; } ;
struct TYPE_10__ {int flags; int off_max; } ;
struct nfp_app_bpf {TYPE_6__* app; TYPE_3__ helpers; int pseudo_random; int adjust_tail; TYPE_2__ adjust_head; } ;
struct bpf_verifier_env {int dummy; } ;
struct TYPE_14__ {TYPE_5__* pf; } ;
struct TYPE_13__ {TYPE_4__* pdev; } ;
struct TYPE_12__ {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct bpf_reg_state* FUNC_1 (struct bpf_verifier_env*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,struct bpf_verifier_env*,struct nfp_insn_meta*,int ,struct bpf_reg_state const*) ;
 int FUNC_4 (struct bpf_verifier_env*) ;
 int FUNC_5 (char*,struct bpf_verifier_env*,struct bpf_reg_state const*,TYPE_8__*) ;
 int FUNC_6 (struct nfp_app_bpf*,struct nfp_prog*,struct nfp_insn_meta*,struct bpf_reg_state const*) ;
 int FUNC_7 (struct bpf_verifier_env*,char*,...) ;
 int FUNC_8 (char*,int,TYPE_7__) ;

__attribute__((used)) static int
FUNC_9(struct nfp_prog *VAR_17,
     struct bpf_verifier_env *VAR_18,
     struct nfp_insn_meta *VAR_19)
{
 const struct bpf_reg_state *VAR_20 = FUNC_1(VAR_18) + VAR_2;
 const struct bpf_reg_state *VAR_21 = FUNC_1(VAR_18) + VAR_3;
 const struct bpf_reg_state *VAR_22 = FUNC_1(VAR_18) + VAR_4;
 struct nfp_app_bpf *VAR_23 = VAR_17->bpf;
 u32 VAR_24 = VAR_19->insn.imm;

 switch (VAR_24) {
 case 129:
  if (!VAR_23->adjust_head.off_max) {
   FUNC_7(VAR_18, "adjust_head not supported by FW\n");
   return -VAR_7;
  }
  if (!(VAR_23->adjust_head.flags & VAR_8)) {
   FUNC_7(VAR_18, "adjust_head: FW requires shifting metadata, not supported by the driver\n");
   return -VAR_7;
  }

  FUNC_6(VAR_23, VAR_17, VAR_19, VAR_21);
  break;

 case 128:
  if (!VAR_23->adjust_tail) {
   FUNC_7(VAR_18, "adjust_tail not supported by FW\n");
   return -VAR_7;
  }
  break;

 case 132:
  if (!FUNC_3("map_lookup", VAR_18, VAR_19,
      VAR_23->helpers.map_lookup, VAR_20) ||
      !FUNC_5("map_lookup", VAR_18, VAR_21,
       VAR_19->func_id ? &VAR_19->arg2 : ((void*)0)))
   return -VAR_7;
  break;

 case 131:
  if (!FUNC_3("map_update", VAR_18, VAR_19,
      VAR_23->helpers.map_update, VAR_20) ||
      !FUNC_5("map_update", VAR_18, VAR_21,
       VAR_19->func_id ? &VAR_19->arg2 : ((void*)0)) ||
      !FUNC_5("map_update", VAR_18, VAR_22, ((void*)0)) ||
      !FUNC_4(VAR_18))
   return -VAR_7;
  break;

 case 133:
  if (!FUNC_3("map_delete", VAR_18, VAR_19,
      VAR_23->helpers.map_delete, VAR_20) ||
      !FUNC_5("map_delete", VAR_18, VAR_21,
       VAR_19->func_id ? &VAR_19->arg2 : ((void*)0)))
   return -VAR_7;
  break;

 case 134:
  if (VAR_23->pseudo_random)
   break;
  FUNC_7(VAR_18, "bpf_get_prandom_u32(): FW doesn't support random number generation\n");
  return -VAR_7;

 case 130:
  FUNC_0(VAR_11 != VAR_16 ||
        VAR_9 != VAR_13 ||
        VAR_12 != VAR_15 ||
        VAR_10 != VAR_14);

  if (!VAR_23->helpers.perf_event_output) {
   FUNC_7(VAR_18, "event_output: not supported by FW\n");
   return -VAR_7;
  }




  if (VAR_22->var_off.mask & VAR_1 ||
      (VAR_22->var_off.value & VAR_1) !=
      VAR_0) {
   char VAR_25[48];

   FUNC_8(VAR_25, sizeof(VAR_25), VAR_22->var_off);
   FUNC_7(VAR_18, "event_output: must use BPF_F_CURRENT_CPU, var_off: %s\n",
    VAR_25);
   return -VAR_7;
  }




  VAR_20 = FUNC_1(VAR_18) + VAR_5;

  if (VAR_20->type != VAR_16 &&
      VAR_20->type != VAR_15 &&
      VAR_20->type != VAR_13 &&
      VAR_20->type != VAR_14) {
   FUNC_7(VAR_18, "event_output: unsupported ptr type: %d\n",
    VAR_20->type);
   return -VAR_7;
  }

  if (VAR_20->type == VAR_15 &&
      !FUNC_5("event_output", VAR_18, VAR_20, ((void*)0)))
   return -VAR_7;
  FUNC_2(&VAR_17->bpf->app->pf->pdev->dev,
         "bpf: note: return codes and behavior of bpf_event_output() helper differs for offloaded programs!\n");
  FUNC_7(VAR_18, "warning: return codes and behavior of event_output helper differ for offload!\n");

  if (!VAR_19->func_id)
   break;

  if (VAR_20->type != VAR_19->arg1.type) {
   FUNC_7(VAR_18, "event_output: ptr type changed: %d %d\n",
    VAR_19->arg1.type, VAR_20->type);
   return -VAR_6;
  }
  break;

 default:
  FUNC_7(VAR_18, "unsupported function id: %d\n", VAR_24);
  return -VAR_7;
 }

 VAR_19->func_id = VAR_24;
 VAR_19->arg1 = *VAR_20;
 VAR_19->arg2.reg = *VAR_21;

 return 0;
}
