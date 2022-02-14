
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_verifier_env {int dummy; } ;
struct btf_type {int dummy; } ;
struct btf_array {int nelems; int index_type; int type; } ;


 struct btf_array* FUNC_0 (struct btf_type const*) ;
 int FUNC_1 (struct btf_verifier_env*,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct btf_verifier_env *VAR_0,
     const struct btf_type *VAR_1)
{
 const struct btf_array *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_0, "type_id=%u index_type_id=%u nr_elems=%u",
    VAR_2->type, VAR_2->index_type, VAR_2->nelems);
}
