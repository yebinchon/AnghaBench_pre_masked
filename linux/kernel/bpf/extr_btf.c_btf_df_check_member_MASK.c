
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_verifier_env {int dummy; } ;
struct btf_type {int dummy; } ;
struct btf_member {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct btf_verifier_env*,struct btf_type const*,char*) ;

__attribute__((used)) static int FUNC_1(struct btf_verifier_env *VAR_1,
          const struct btf_type *VAR_2,
          const struct btf_member *VAR_3,
          const struct btf_type *VAR_4)
{
 FUNC_0(VAR_1, VAR_2,
          "Unsupported check_member");
 return -VAR_0;
}
