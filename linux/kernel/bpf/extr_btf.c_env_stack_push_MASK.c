
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct resolve_vertex {size_t type_id; scalar_t__ next_member; struct btf_type const* t; } ;
struct btf_verifier_env {scalar_t__ top_stack; scalar_t__* visit_states; scalar_t__ resolve_mode; struct resolve_vertex* stack; } ;
struct btf_type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct btf_type const*) ;
 scalar_t__ FUNC_1 (struct btf_type const*) ;
 scalar_t__ FUNC_2 (struct btf_type const*) ;

__attribute__((used)) static int FUNC_3(struct btf_verifier_env *VAR_8,
     const struct btf_type *VAR_9, u32 VAR_10)
{
 struct resolve_vertex *VAR_11;

 if (VAR_8->top_stack == VAR_2)
  return -VAR_0;

 if (VAR_8->visit_states[VAR_10] != VAR_3)
  return -VAR_1;

 VAR_8->visit_states[VAR_10] = VAR_7;

 VAR_11 = &VAR_8->stack[VAR_8->top_stack++];
 VAR_11->t = VAR_9;
 VAR_11->type_id = VAR_10;
 VAR_11->next_member = 0;

 if (VAR_8->resolve_mode == VAR_6) {
  if (FUNC_1(VAR_9))
   VAR_8->resolve_mode = VAR_4;
  else if (FUNC_2(VAR_9) || FUNC_0(VAR_9))
   VAR_8->resolve_mode = VAR_5;
 }

 return 0;
}
