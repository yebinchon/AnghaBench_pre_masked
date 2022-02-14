
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct bpf_verifier_env {scalar_t__ id_gen; struct bpf_map** used_maps; } ;
struct bpf_reg_state {int type; scalar_t__ id; int off; struct bpf_map* map_ptr; } ;
struct bpf_map {int dummy; } ;
struct bpf_insn_aux_data {size_t map_index; int map_off; } ;
struct bpf_insn {scalar_t__ off; size_t dst_reg; scalar_t__ src_reg; scalar_t__ imm; int code; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bpf_reg_state*,int) ;
 int FUNC_2 (struct bpf_verifier_env*,size_t,int ) ;
 struct bpf_insn_aux_data* FUNC_3 (struct bpf_verifier_env*) ;
 struct bpf_reg_state* FUNC_4 (struct bpf_verifier_env*) ;
 scalar_t__ FUNC_5 (struct bpf_map*) ;
 int FUNC_6 (struct bpf_verifier_env*,struct bpf_reg_state*,size_t) ;
 int FUNC_7 (struct bpf_verifier_env*,char*) ;

__attribute__((used)) static int FUNC_8(struct bpf_verifier_env *VAR_8, struct bpf_insn *VAR_9)
{
 struct bpf_insn_aux_data *VAR_10 = FUNC_3(VAR_8);
 struct bpf_reg_state *VAR_11 = FUNC_4(VAR_8);
 struct bpf_map *VAR_12;
 int VAR_13;

 if (FUNC_0(VAR_9->code) != VAR_0) {
  FUNC_7(VAR_8, "invalid BPF_LD_IMM insn\n");
  return -VAR_5;
 }
 if (VAR_9->off != 0) {
  FUNC_7(VAR_8, "BPF_LD_IMM64 uses reserved fields\n");
  return -VAR_5;
 }

 VAR_13 = FUNC_2(VAR_8, VAR_9->dst_reg, VAR_4);
 if (VAR_13)
  return VAR_13;

 if (VAR_9->src_reg == 0) {
  u64 VAR_14 = ((u64)(VAR_9 + 1)->imm << 32) | (u32)VAR_9->imm;

  VAR_11[VAR_9->dst_reg].type = VAR_7;
  FUNC_1(&VAR_11[VAR_9->dst_reg], VAR_14);
  return 0;
 }

 VAR_12 = VAR_8->used_maps[VAR_10->map_index];
 FUNC_6(VAR_8, VAR_11, VAR_9->dst_reg);
 VAR_11[VAR_9->dst_reg].map_ptr = VAR_12;

 if (VAR_9->src_reg == VAR_2) {
  VAR_11[VAR_9->dst_reg].type = VAR_6;
  VAR_11[VAR_9->dst_reg].off = VAR_10->map_off;
  if (FUNC_5(VAR_12))
   VAR_11[VAR_9->dst_reg].id = ++VAR_8->id_gen;
 } else if (VAR_9->src_reg == VAR_1) {
  VAR_11[VAR_9->dst_reg].type = VAR_3;
 } else {
  FUNC_7(VAR_8, "bpf verifier is misconfigured\n");
  return -VAR_5;
 }

 return 0;
}
