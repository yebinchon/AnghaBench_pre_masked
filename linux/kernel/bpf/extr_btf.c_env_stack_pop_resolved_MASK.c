
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct btf_verifier_env {size_t top_stack; int * visit_states; struct btf* btf; TYPE_1__* stack; } ;
struct btf {size_t* resolved_sizes; size_t* resolved_ids; } ;
struct TYPE_2__ {size_t type_id; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct btf_verifier_env *VAR_1,
       u32 VAR_2,
       u32 VAR_3)
{
 u32 VAR_4 = VAR_1->stack[--(VAR_1->top_stack)].type_id;
 struct btf *VAR_5 = VAR_1->btf;

 VAR_5->resolved_sizes[VAR_4] = VAR_3;
 VAR_5->resolved_ids[VAR_4] = VAR_2;
 VAR_1->visit_states[VAR_4] = VAR_0;
}
