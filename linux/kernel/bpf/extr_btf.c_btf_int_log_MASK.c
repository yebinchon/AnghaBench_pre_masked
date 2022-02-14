
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_verifier_env {int dummy; } ;
struct btf_type {int size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct btf_type const*) ;
 int FUNC_5 (struct btf_verifier_env*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct btf_verifier_env *VAR_0,
   const struct btf_type *VAR_1)
{
 int VAR_2 = FUNC_4(VAR_1);

 FUNC_5(VAR_0,
    "size=%u bits_offset=%u nr_bits=%u encoding=%s",
    VAR_1->size, FUNC_2(VAR_2),
    FUNC_0(VAR_2),
    FUNC_3(FUNC_1(VAR_2)));
}
