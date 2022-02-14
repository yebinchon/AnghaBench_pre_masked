
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_verifier_state {int curframe; struct bpf_func_state** frame; } ;
struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {int dummy; } ;
struct bpf_func_state {int allocated_stack; TYPE_1__* stack; struct bpf_reg_state* regs; } ;
struct TYPE_2__ {struct bpf_reg_state spilled_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char*,int,int) ;
 int FUNC_2 (struct bpf_verifier_env*,struct bpf_reg_state*) ;
 int FUNC_3 (struct bpf_verifier_env*,struct bpf_reg_state*,struct bpf_reg_state*) ;

__attribute__((used)) static int FUNC_4(struct bpf_verifier_env *VAR_6,
         const struct bpf_verifier_state *VAR_7,
         struct bpf_verifier_state *VAR_8)
{
 struct bpf_reg_state *VAR_9, *VAR_10;
 struct bpf_func_state *VAR_11, *VAR_12;
 int VAR_13, VAR_14, VAR_15 = 0;

 if (VAR_8->curframe != VAR_7->curframe) {
  FUNC_1(1, "propagate_live: parent frame %d current frame %d\n",
       VAR_8->curframe, VAR_7->curframe);
  return -VAR_3;
 }

 FUNC_0(VAR_1 + 1 != VAR_4);
 for (VAR_14 = 0; VAR_14 <= VAR_7->curframe; VAR_14++) {
  VAR_12 = VAR_8->frame[VAR_14];
  VAR_11 = VAR_7->frame[VAR_14];
  VAR_10 = VAR_12->regs;
  VAR_9 = VAR_11->regs;

  for (VAR_13 = VAR_14 < VAR_7->curframe ? VAR_0 : 0; VAR_13 < VAR_1; VAR_13++) {
   VAR_15 = FUNC_3(VAR_6, &VAR_9[VAR_13],
           &VAR_10[VAR_13]);
   if (VAR_15 < 0)
    return VAR_15;
   if (VAR_15 == VAR_5)
    FUNC_2(VAR_6, &VAR_10[VAR_13]);
  }


  for (VAR_13 = 0; VAR_13 < VAR_11->allocated_stack / VAR_2 &&
       VAR_13 < VAR_12->allocated_stack / VAR_2; VAR_13++) {
   VAR_10 = &VAR_12->stack[VAR_13].spilled_ptr;
   VAR_9 = &VAR_11->stack[VAR_13].spilled_ptr;
   VAR_15 = FUNC_3(VAR_6, VAR_9,
           VAR_10);
   if (VAR_15 < 0)
    return VAR_15;
  }
 }
 return 0;
}
