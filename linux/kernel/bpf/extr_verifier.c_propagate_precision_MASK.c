
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bpf_verifier_state {size_t curframe; struct bpf_func_state** frame; } ;
struct TYPE_4__ {int level; } ;
struct bpf_verifier_env {TYPE_2__ log; } ;
struct bpf_reg_state {scalar_t__ type; int precise; } ;
struct bpf_func_state {int allocated_stack; TYPE_1__* stack; struct bpf_reg_state* regs; } ;
struct TYPE_3__ {scalar_t__* slot_type; struct bpf_reg_state spilled_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct bpf_verifier_env*,int) ;
 int FUNC_1 (struct bpf_verifier_env*,int) ;
 int FUNC_2 (struct bpf_verifier_env*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct bpf_verifier_env *VAR_5,
          const struct bpf_verifier_state *VAR_6)
{
 struct bpf_reg_state *VAR_7;
 struct bpf_func_state *VAR_8;
 int VAR_9, VAR_10 = 0;

 VAR_8 = VAR_6->frame[VAR_6->curframe];
 VAR_7 = VAR_8->regs;
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++, VAR_7++) {
  if (VAR_7->type != VAR_3 ||
      !VAR_7->precise)
   continue;
  if (VAR_5->log.level & VAR_0)
   FUNC_2(VAR_5, "propagating r%d\n", VAR_9);
  VAR_10 = FUNC_0(VAR_5, VAR_9);
  if (VAR_10 < 0)
   return VAR_10;
 }

 for (VAR_9 = 0; VAR_9 < VAR_8->allocated_stack / VAR_2; VAR_9++) {
  if (VAR_8->stack[VAR_9].slot_type[0] != VAR_4)
   continue;
  VAR_7 = &VAR_8->stack[VAR_9].spilled_ptr;
  if (VAR_7->type != VAR_3 ||
      !VAR_7->precise)
   continue;
  if (VAR_5->log.level & VAR_0)
   FUNC_2(VAR_5, "propagating fp%d\n",
    (-VAR_9 - 1) * VAR_2);
  VAR_10 = FUNC_1(VAR_5, VAR_9);
  if (VAR_10 < 0)
   return VAR_10;
 }
 return 0;
}
