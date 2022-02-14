
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_verifier_state {int curframe; struct bpf_func_state** frame; } ;
struct TYPE_2__ {int level; } ;
struct bpf_verifier_env {TYPE_1__ log; struct bpf_verifier_state* cur_state; } ;
struct bpf_insn {int imm; } ;
struct bpf_func_state {int * regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_0 (struct bpf_verifier_env*,int ,int ) ;
 int FUNC_1 (struct bpf_verifier_env*,int) ;
 int FUNC_2 (struct bpf_verifier_env*,struct bpf_func_state*,int,int,int) ;
 struct bpf_func_state* FUNC_3 (int,int ) ;
 int FUNC_4 (struct bpf_verifier_env*,int *,int ) ;
 int FUNC_5 (struct bpf_verifier_env*,struct bpf_func_state*) ;
 int FUNC_6 (struct bpf_func_state*,struct bpf_func_state*) ;
 int FUNC_7 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_8(struct bpf_verifier_env *VAR_11, struct bpf_insn *VAR_12,
      int *VAR_13)
{
 struct bpf_verifier_state *VAR_14 = VAR_11->cur_state;
 struct bpf_func_state *VAR_15, *VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;

 if (VAR_14->curframe + 1 >= VAR_9) {
  FUNC_7(VAR_11, "the call stack of %d frames is too deep\n",
   VAR_14->curframe + 2);
  return -VAR_5;
 }

 VAR_20 = *VAR_13 + VAR_12->imm;
 VAR_19 = FUNC_1(VAR_11, VAR_20 + 1);
 if (VAR_19 < 0) {
  FUNC_7(VAR_11, "verifier bug. No program starts at insn %d\n",
   VAR_20 + 1);
  return -VAR_6;
 }

 VAR_15 = VAR_14->frame[VAR_14->curframe];
 if (VAR_14->frame[VAR_14->curframe + 1]) {
  FUNC_7(VAR_11, "verifier bug. Frame %d already allocated\n",
   VAR_14->curframe + 1);
  return -VAR_6;
 }

 VAR_16 = FUNC_3(sizeof(*VAR_16), VAR_8);
 if (!VAR_16)
  return -VAR_7;
 VAR_14->frame[VAR_14->curframe + 1] = VAR_16;





 FUNC_2(VAR_11, VAR_16,

   *VAR_13 ,
   VAR_14->curframe + 1 ,
   VAR_19 );


 VAR_18 = FUNC_6(VAR_16, VAR_15);
 if (VAR_18)
  return VAR_18;




 for (VAR_17 = VAR_1; VAR_17 <= VAR_2; VAR_17++)
  VAR_16->regs[VAR_17] = VAR_15->regs[VAR_17];


 for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++) {
  FUNC_4(VAR_11, VAR_15->regs, VAR_10[VAR_17]);
  FUNC_0(VAR_11, VAR_10[VAR_17], VAR_4);
 }


 VAR_14->curframe++;


 *VAR_13 = VAR_20;

 if (VAR_11->log.level & VAR_0) {
  FUNC_7(VAR_11, "caller:\n");
  FUNC_5(VAR_11, VAR_15);
  FUNC_7(VAR_11, "callee:\n");
  FUNC_5(VAR_11, VAR_16);
 }
 return 0;
}
