
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct btf_verifier_env {struct btf* btf; } ;
struct btf_type {int dummy; } ;
struct btf_member {int type; } ;
struct btf {int dummy; } ;
struct TYPE_2__ {int (* check_member ) (struct btf_verifier_env*,struct btf_type const*,struct btf_member*,struct btf_type const*) ;} ;


 int VAR_0 ;
 struct btf_type* FUNC_0 (struct btf*,int *,int *) ;
 TYPE_1__* FUNC_1 (struct btf_type const*) ;
 int FUNC_2 (struct btf_verifier_env*,struct btf_type const*,struct btf_member const*,char*) ;
 int FUNC_3 (struct btf_verifier_env*,struct btf_type const*,struct btf_member*,struct btf_type const*) ;

__attribute__((used)) static int FUNC_4(struct btf_verifier_env *VAR_1,
         const struct btf_type *VAR_2,
         const struct btf_member *VAR_3,
         const struct btf_type *VAR_4)
{
 const struct btf_type *VAR_5;
 u32 VAR_6 = VAR_3->type;
 struct btf_member VAR_7;
 struct btf *VAR_8 = VAR_1->btf;

 VAR_5 = FUNC_0(VAR_8, &VAR_6, ((void*)0));
 if (!VAR_5) {
  FUNC_2(VAR_1, VAR_2, VAR_3,
     "Invalid member");
  return -VAR_0;
 }

 VAR_7 = *VAR_3;
 VAR_7.type = VAR_6;

 return FUNC_1(VAR_5)->check_member(VAR_1, VAR_2,
        &VAR_7,
        VAR_5);
}
