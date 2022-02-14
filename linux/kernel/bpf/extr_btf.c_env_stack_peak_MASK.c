
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resolve_vertex {int dummy; } ;
struct btf_verifier_env {int top_stack; struct resolve_vertex const* stack; } ;



__attribute__((used)) static const struct resolve_vertex *FUNC_0(struct btf_verifier_env *VAR_0)
{
 return VAR_0->top_stack ? &VAR_0->stack[VAR_0->top_stack - 1] : ((void*)0);
}
