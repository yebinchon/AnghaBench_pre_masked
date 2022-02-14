
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct fd {int dummy; } ;
struct bpf_verifier_env {int used_map_cnt; TYPE_2__* prog; struct bpf_map** used_maps; struct bpf_insn_aux_data* insn_aux_data; } ;
struct bpf_map {int value_size; TYPE_1__* ops; } ;
struct bpf_insn_aux_data {int map_index; scalar_t__ map_off; } ;
struct bpf_insn {int code; scalar_t__ imm; scalar_t__ dst_reg; scalar_t__ src_reg; scalar_t__ off; } ;
struct TYPE_6__ {int len; struct bpf_insn* insnsi; } ;
struct TYPE_5__ {int (* map_direct_value_addr ) (struct bpf_map*,int*,scalar_t__) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (struct bpf_map*) ;
 int VAR_13 ;
 int FUNC_3 (struct bpf_map*) ;
 struct bpf_map* FUNC_4 (struct fd) ;
 scalar_t__ FUNC_5 (TYPE_2__*,struct bpf_map*) ;
 struct bpf_map* FUNC_6 (struct bpf_map*,int) ;
 scalar_t__ FUNC_7 (struct bpf_map*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct bpf_verifier_env*,struct bpf_map*,TYPE_2__*) ;
 struct fd FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct fd) ;
 int FUNC_13 (struct bpf_map*,int*,scalar_t__) ;
 int FUNC_14 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_15(struct bpf_verifier_env *VAR_14)
{
 struct bpf_insn *VAR_15 = VAR_14->prog->insnsi;
 int VAR_16 = VAR_14->prog->len;
 int VAR_17, VAR_18, VAR_19;

 VAR_19 = FUNC_9(VAR_14->prog);
 if (VAR_19)
  return VAR_19;

 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++, VAR_15++) {
  if (FUNC_0(VAR_15->code) == VAR_3 &&
      (FUNC_1(VAR_15->code) != VAR_5 || VAR_15->imm != 0)) {
   FUNC_14(VAR_14, "BPF_LDX uses reserved fields\n");
   return -VAR_12;
  }

  if (FUNC_0(VAR_15->code) == VAR_8 &&
      ((FUNC_1(VAR_15->code) != VAR_5 &&
        FUNC_1(VAR_15->code) != VAR_9) || VAR_15->imm != 0)) {
   FUNC_14(VAR_14, "BPF_STX uses reserved fields\n");
   return -VAR_12;
  }

  if (VAR_15[0].code == (VAR_2 | VAR_1 | VAR_0)) {
   struct bpf_insn_aux_data *VAR_20;
   struct bpf_map *VAR_21;
   struct fd VAR_22;
   u64 VAR_23;

   if (VAR_17 == VAR_16 - 1 || VAR_15[1].code != 0 ||
       VAR_15[1].dst_reg != 0 || VAR_15[1].src_reg != 0 ||
       VAR_15[1].off != 0) {
    FUNC_14(VAR_14, "invalid bpf_ld_imm64 insn\n");
    return -VAR_12;
   }

   if (VAR_15[0].src_reg == 0)

    goto next_insn;




   if ((VAR_15[0].src_reg != VAR_6 &&
        VAR_15[0].src_reg != VAR_7) ||
       (VAR_15[0].src_reg == VAR_6 &&
        VAR_15[1].imm != 0)) {
    FUNC_14(VAR_14,
     "unrecognized bpf_ld_imm64 insn\n");
    return -VAR_12;
   }

   VAR_22 = FUNC_11(VAR_15[0].imm);
   VAR_21 = FUNC_4(VAR_22);
   if (FUNC_2(VAR_21)) {
    FUNC_14(VAR_14, "fd %d is not pointing to valid bpf_map\n",
     VAR_15[0].imm);
    return FUNC_3(VAR_21);
   }

   VAR_19 = FUNC_10(VAR_14, VAR_21, VAR_14->prog);
   if (VAR_19) {
    FUNC_12(VAR_22);
    return VAR_19;
   }

   VAR_20 = &VAR_14->insn_aux_data[VAR_17];
   if (VAR_15->src_reg == VAR_6) {
    VAR_23 = (unsigned long)VAR_21;
   } else {
    u32 VAR_24 = VAR_15[1].imm;

    if (VAR_24 >= VAR_4) {
     FUNC_14(VAR_14, "direct value offset of %u is not allowed\n", VAR_24);
     FUNC_12(VAR_22);
     return -VAR_12;
    }

    if (!VAR_21->ops->map_direct_value_addr) {
     FUNC_14(VAR_14, "no direct value access support for this map type\n");
     FUNC_12(VAR_22);
     return -VAR_12;
    }

    VAR_19 = VAR_21->ops->map_direct_value_addr(VAR_21, &VAR_23, VAR_24);
    if (VAR_19) {
     FUNC_14(VAR_14, "invalid access to map value pointer, value_size=%u off=%u\n",
      VAR_21->value_size, VAR_24);
     FUNC_12(VAR_22);
     return VAR_19;
    }

    VAR_20->map_off = VAR_24;
    VAR_23 += VAR_24;
   }

   VAR_15[0].imm = (u32)VAR_23;
   VAR_15[1].imm = VAR_23 >> 32;


   for (VAR_18 = 0; VAR_18 < VAR_14->used_map_cnt; VAR_18++) {
    if (VAR_14->used_maps[VAR_18] == VAR_21) {
     VAR_20->map_index = VAR_18;
     FUNC_12(VAR_22);
     goto next_insn;
    }
   }

   if (VAR_14->used_map_cnt >= VAR_13) {
    FUNC_12(VAR_22);
    return -VAR_10;
   }






   VAR_21 = FUNC_6(VAR_21, 0);
   if (FUNC_2(VAR_21)) {
    FUNC_12(VAR_22);
    return FUNC_3(VAR_21);
   }

   VAR_20->map_index = VAR_14->used_map_cnt;
   VAR_14->used_maps[VAR_14->used_map_cnt++] = VAR_21;

   if (FUNC_7(VAR_21) &&
       FUNC_5(VAR_14->prog, VAR_21)) {
    FUNC_14(VAR_14, "only one cgroup storage of each type is allowed\n");
    FUNC_12(VAR_22);
    return -VAR_11;
   }

   FUNC_12(VAR_22);
next_insn:
   VAR_15++;
   VAR_17++;
   continue;
  }


  if (!FUNC_8(VAR_15->code)) {
   FUNC_14(VAR_14, "unknown opcode %02x\n", VAR_15->code);
   return -VAR_12;
  }
 }





 return 0;
}
