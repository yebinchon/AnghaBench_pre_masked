
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_verifier_env {int dummy; } ;
struct btf_type {int dummy; } ;
struct btf_member {int offset; } ;
struct TYPE_2__ {int (* check_member ) (struct btf_verifier_env*,struct btf_type const*,struct btf_member const*,struct btf_type const*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct btf_type const*) ;
 int FUNC_2 (struct btf_verifier_env*,struct btf_type const*,struct btf_member const*,char*) ;
 int FUNC_3 (struct btf_verifier_env*,struct btf_type const*,struct btf_member const*,struct btf_type const*) ;

__attribute__((used)) static int FUNC_4(struct btf_verifier_env *VAR_1,
       const struct btf_type *VAR_2,
       const struct btf_member *VAR_3,
       const struct btf_type *VAR_4)
{
 if (FUNC_0(VAR_3->offset)) {
  FUNC_2(VAR_1, VAR_2, VAR_3,
     "Invalid member bitfield_size");
  return -VAR_0;
 }




 return FUNC_1(VAR_4)->check_member(VAR_1, VAR_2,
             VAR_3,
             VAR_4);
}
