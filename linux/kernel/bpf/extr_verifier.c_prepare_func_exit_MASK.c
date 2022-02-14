
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_verifier_state {size_t curframe; struct bpf_func_state** frame; } ;
struct TYPE_2__ {int level; } ;
struct bpf_verifier_env {TYPE_1__ log; struct bpf_verifier_state* cur_state; } ;
struct bpf_reg_state {scalar_t__ type; } ;
struct bpf_func_state {int callsite; struct bpf_reg_state* regs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bpf_func_state*) ;
 int FUNC_1 (struct bpf_verifier_env*,struct bpf_func_state*) ;
 int FUNC_2 (struct bpf_func_state*,struct bpf_func_state*) ;
 int FUNC_3 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct bpf_verifier_env *VAR_4, int *VAR_5)
{
 struct bpf_verifier_state *VAR_6 = VAR_4->cur_state;
 struct bpf_func_state *VAR_7, *VAR_8;
 struct bpf_reg_state *VAR_9;
 int VAR_10;

 VAR_8 = VAR_6->frame[VAR_6->curframe];
 VAR_9 = &VAR_8->regs[VAR_1];
 if (VAR_9->type == VAR_3) {






  FUNC_3(VAR_4, "cannot return stack pointer to the caller\n");
  return -VAR_2;
 }

 VAR_6->curframe--;
 VAR_7 = VAR_6->frame[VAR_6->curframe];

 VAR_7->regs[VAR_1] = *VAR_9;


 VAR_10 = FUNC_2(VAR_7, VAR_8);
 if (VAR_10)
  return VAR_10;

 *VAR_5 = VAR_8->callsite + 1;
 if (VAR_4->log.level & VAR_0) {
  FUNC_3(VAR_4, "returning from callee:\n");
  FUNC_1(VAR_4, VAR_8);
  FUNC_3(VAR_4, "to caller at %d:\n", *VAR_5);
  FUNC_1(VAR_4, VAR_7);
 }

 FUNC_0(VAR_8);
 VAR_6->frame[VAR_6->curframe + 1] = ((void*)0);
 return 0;
}
