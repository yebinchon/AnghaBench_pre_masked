
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_verifier_env {int dummy; } ;
struct btf_type {int size; } ;


 int FUNC_0 (struct btf_type const*) ;
 int FUNC_1 (struct btf_verifier_env*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct btf_verifier_env *VAR_0,
    const struct btf_type *VAR_1)
{
 FUNC_1(VAR_0, "size=%u vlen=%u", VAR_1->size, FUNC_0(VAR_1));
}
