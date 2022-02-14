
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resolve_vertex {int t; } ;
struct btf_verifier_env {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct btf_verifier_env*,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct btf_verifier_env *VAR_1,
     const struct resolve_vertex *VAR_2)
{
 FUNC_0(VAR_1, VAR_2->t, "Unsupported resolve");
 return -VAR_0;
}
