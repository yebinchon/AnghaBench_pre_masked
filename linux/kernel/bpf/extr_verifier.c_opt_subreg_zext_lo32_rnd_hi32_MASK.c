
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int prog_flags; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct bpf_verifier_env {struct bpf_insn_aux_data* insn_aux_data; struct bpf_prog* prog; } ;
struct bpf_prog {int len; struct bpf_insn* insnsi; } ;
struct bpf_insn_aux_data {scalar_t__ ptr_type; int zext_dst; } ;
struct bpf_insn {scalar_t__ code; int dst_reg; int src_reg; int imm; } ;


 struct bpf_insn FUNC_0 (int ,int ,int) ;
 struct bpf_insn FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct bpf_insn FUNC_4 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 () ;
 struct bpf_prog* FUNC_6 (struct bpf_verifier_env*,int,struct bpf_insn*,int) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct bpf_insn*) ;
 scalar_t__ FUNC_9 (struct bpf_verifier_env*,struct bpf_insn*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_10(struct bpf_verifier_env *VAR_11,
      const union bpf_attr *VAR_12)
{
 struct bpf_insn *VAR_13, VAR_14[2], VAR_15[4];
 struct bpf_insn_aux_data *VAR_16 = VAR_11->insn_aux_data;
 int VAR_17, VAR_18, VAR_19 = 0, VAR_20 = VAR_11->prog->len;
 struct bpf_insn *VAR_21 = VAR_11->prog->insnsi;
 struct bpf_prog *VAR_22;
 bool VAR_23;

 VAR_23 = VAR_12->prog_flags & VAR_0;
 VAR_14[1] = FUNC_4(0);
 VAR_15[1] = FUNC_0(VAR_5, VAR_7, 0);
 VAR_15[2] = FUNC_0(VAR_4, VAR_7, 32);
 VAR_15[3] = FUNC_1(VAR_6, 0, VAR_7);
 for (VAR_17 = 0; VAR_17 < VAR_20; VAR_17++) {
  int VAR_24 = VAR_17 + VAR_19;
  struct bpf_insn VAR_25;

  VAR_25 = VAR_21[VAR_24];
  if (!VAR_16[VAR_24].zext_dst) {
   u8 VAR_26, VAR_27;
   u32 VAR_28;

   if (!VAR_23)
    continue;

   VAR_26 = VAR_25.code;
   VAR_27 = FUNC_2(VAR_26);
   if (FUNC_8(&VAR_25))
    continue;





   if (FUNC_9(VAR_11, &VAR_25, VAR_25.dst_reg, ((void*)0), VAR_8)) {
    if (VAR_27 == VAR_2 &&
        FUNC_3(VAR_26) == VAR_1)
     VAR_17++;
    continue;
   }


   if (VAR_27 == VAR_3 &&
       VAR_16[VAR_24].ptr_type == VAR_10)
    continue;

   VAR_28 = FUNC_7();
   VAR_15[0] = VAR_25;
   VAR_15[1].imm = VAR_28;
   VAR_15[3].dst_reg = VAR_25.dst_reg;
   VAR_13 = VAR_15;
   VAR_18 = 4;
   goto apply_patch_buffer;
  }

  if (!FUNC_5())
   continue;

  VAR_14[0] = VAR_25;
  VAR_14[1].dst_reg = VAR_25.dst_reg;
  VAR_14[1].src_reg = VAR_25.dst_reg;
  VAR_13 = VAR_14;
  VAR_18 = 2;
apply_patch_buffer:
  VAR_22 = FUNC_6(VAR_11, VAR_24, VAR_13, VAR_18);
  if (!VAR_22)
   return -VAR_9;
  VAR_11->prog = VAR_22;
  VAR_21 = VAR_22->insnsi;
  VAR_16 = VAR_11->insn_aux_data;
  VAR_19 += VAR_18 - 1;
 }

 return 0;
}
