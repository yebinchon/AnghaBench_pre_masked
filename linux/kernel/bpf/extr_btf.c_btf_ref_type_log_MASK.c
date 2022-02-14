
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_verifier_env {int dummy; } ;
struct btf_type {int type; } ;


 int FUNC_0 (struct btf_verifier_env*,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct btf_verifier_env *VAR_0,
        const struct btf_type *VAR_1)
{
 FUNC_0(VAR_0, "type_id=%u", VAR_1->type);
}
