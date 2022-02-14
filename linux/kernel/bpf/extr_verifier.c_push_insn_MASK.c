
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* insn_stack; int* insn_state; int cur_stack; } ;
struct bpf_verifier_env {scalar_t__ allow_ptr_leaks; TYPE_2__ cfg; TYPE_1__* prog; } ;
struct TYPE_3__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bpf_verifier_env*,int) ;
 int FUNC_1 (struct bpf_verifier_env*,char*,...) ;
 int FUNC_2 (struct bpf_verifier_env*,int,char*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_7, int VAR_8, int VAR_9, struct bpf_verifier_env *VAR_10,
       bool VAR_11)
{
 int *VAR_12 = VAR_10->cfg.insn_stack;
 int *VAR_13 = VAR_10->cfg.insn_state;

 if (VAR_9 == VAR_6 && VAR_13[VAR_7] >= (VAR_1 | VAR_6))
  return 0;

 if (VAR_9 == VAR_0 && VAR_13[VAR_7] >= (VAR_1 | VAR_0))
  return 0;

 if (VAR_8 < 0 || VAR_8 >= VAR_10->prog->len) {
  FUNC_2(VAR_10, VAR_7, "%d: ", VAR_7);
  FUNC_1(VAR_10, "jump out of range from insn %d to %d\n", VAR_7, VAR_8);
  return -VAR_4;
 }

 if (VAR_9 == VAR_0)

  FUNC_0(VAR_10, VAR_8);

 if (VAR_13[VAR_8] == 0) {

  VAR_13[VAR_7] = VAR_1 | VAR_9;
  VAR_13[VAR_8] = VAR_1;
  if (VAR_10->cfg.cur_stack >= VAR_10->prog->len)
   return -VAR_2;
  VAR_12[VAR_10->cfg.cur_stack++] = VAR_8;
  return 1;
 } else if ((VAR_13[VAR_8] & 0xF0) == VAR_1) {
  if (VAR_11 && VAR_10->allow_ptr_leaks)
   return 0;
  FUNC_2(VAR_10, VAR_7, "%d: ", VAR_7);
  FUNC_2(VAR_10, VAR_8, "%d: ", VAR_8);
  FUNC_1(VAR_10, "back-edge from insn %d to %d\n", VAR_7, VAR_8);
  return -VAR_4;
 } else if (VAR_13[VAR_8] == VAR_5) {

  VAR_13[VAR_7] = VAR_1 | VAR_9;
 } else {
  FUNC_1(VAR_10, "insn state internal bug\n");
  return -VAR_3;
 }
 return 0;
}
