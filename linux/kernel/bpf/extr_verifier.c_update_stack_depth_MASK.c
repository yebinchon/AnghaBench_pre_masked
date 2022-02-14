
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct bpf_verifier_env {TYPE_1__* subprog_info; } ;
struct bpf_func_state {size_t subprogno; } ;
struct TYPE_2__ {int stack_depth; } ;



__attribute__((used)) static int FUNC_0(struct bpf_verifier_env *VAR_0,
         const struct bpf_func_state *VAR_1,
         int VAR_2)
{
 u16 VAR_3 = VAR_0->subprog_info[VAR_1->subprogno].stack_depth;

 if (VAR_3 >= -VAR_2)
  return 0;


 VAR_0->subprog_info[VAR_1->subprogno].stack_depth = -VAR_2;
 return 0;
}
