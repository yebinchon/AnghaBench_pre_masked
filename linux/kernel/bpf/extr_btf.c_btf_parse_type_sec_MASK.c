
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct btf_verifier_env {TYPE_1__* btf; } ;
struct btf_header {int type_off; int type_len; } ;
struct TYPE_2__ {struct btf_header hdr; } ;


 int VAR_0 ;
 int FUNC_0 (struct btf_verifier_env*) ;
 int FUNC_1 (struct btf_verifier_env*) ;
 int FUNC_2 (struct btf_verifier_env*,char*) ;

__attribute__((used)) static int FUNC_3(struct btf_verifier_env *VAR_1)
{
 const struct btf_header *VAR_2 = &VAR_1->btf->hdr;
 int VAR_3;


 if (VAR_2->type_off & (sizeof(u32) - 1)) {
  FUNC_2(VAR_1, "Unaligned type_off");
  return -VAR_0;
 }

 if (!VAR_2->type_len) {
  FUNC_2(VAR_1, "No type found");
  return -VAR_0;
 }

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_1);
}
