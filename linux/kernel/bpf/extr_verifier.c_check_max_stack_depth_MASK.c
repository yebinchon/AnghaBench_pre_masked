
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_verifier_env {TYPE_1__* prog; struct bpf_subprog_info* subprog_info; } ;
struct bpf_subprog_info {int start; int stack_depth; } ;
struct bpf_insn {int code; scalar_t__ src_reg; int imm; } ;
struct TYPE_2__ {struct bpf_insn* insnsi; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct bpf_verifier_env*,int) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_8 ;
 int FUNC_4 (struct bpf_verifier_env*,char*,int,...) ;

__attribute__((used)) static int FUNC_5(struct bpf_verifier_env *VAR_9)
{
 int VAR_10 = 0, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0, VAR_14;
 struct bpf_subprog_info *VAR_15 = VAR_9->subprog_info;
 struct bpf_insn *VAR_16 = VAR_9->prog->insnsi;
 int VAR_17[VAR_7];
 int VAR_18[VAR_7];

process_func:



 VAR_10 += FUNC_3(FUNC_2(VAR_8, VAR_15[VAR_12].stack_depth, 1), 32);
 if (VAR_10 > VAR_6) {
  FUNC_4(VAR_9, "combined stack size of %d calls is %d. Too large\n",
   VAR_11 + 1, VAR_10);
  return -VAR_4;
 }
continue_func:
 VAR_14 = VAR_15[VAR_12 + 1].start;
 for (; VAR_13 < VAR_14; VAR_13++) {
  if (VAR_16[VAR_13].code != (VAR_1 | VAR_0))
   continue;
  if (VAR_16[VAR_13].src_reg != VAR_2)
   continue;

  VAR_17[VAR_11] = VAR_13 + 1;
  VAR_18[VAR_11] = VAR_12;


  VAR_13 = VAR_13 + VAR_16[VAR_13].imm + 1;
  VAR_12 = FUNC_1(VAR_9, VAR_13);
  if (VAR_12 < 0) {
   FUNC_0(1, "verifier bug. No program starts at insn %d\n",
      VAR_13);
   return -VAR_5;
  }
  VAR_11++;
  if (VAR_11 >= VAR_7) {
   FUNC_4(VAR_9, "the call stack of %d frames is too deep !\n",
    VAR_11);
   return -VAR_3;
  }
  goto process_func;
 }



 if (VAR_11 == 0)
  return 0;
 VAR_10 -= FUNC_3(FUNC_2(VAR_8, VAR_15[VAR_12].stack_depth, 1), 32);
 VAR_11--;
 VAR_13 = VAR_17[VAR_11];
 VAR_12 = VAR_18[VAR_11];
 goto continue_func;
}
