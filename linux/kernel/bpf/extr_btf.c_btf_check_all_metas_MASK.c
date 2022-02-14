
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_verifier_env {int log_type_id; struct btf* btf; } ;
struct btf_type {int dummy; } ;
struct btf_header {int type_off; int type_len; } ;
struct btf {void* nohdr_data; struct btf_header hdr; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct btf_verifier_env*,struct btf_type*) ;
 scalar_t__ FUNC_1 (struct btf_verifier_env*,struct btf_type*,int) ;

__attribute__((used)) static int FUNC_2(struct btf_verifier_env *VAR_0)
{
 struct btf *VAR_1 = VAR_0->btf;
 struct btf_header *VAR_2;
 void *VAR_3, *VAR_4;

 VAR_2 = &VAR_1->hdr;
 VAR_3 = VAR_1->nohdr_data + VAR_2->type_off;
 VAR_4 = VAR_3 + VAR_2->type_len;

 VAR_0->log_type_id = 1;
 while (VAR_3 < VAR_4) {
  struct btf_type *VAR_5 = VAR_3;
  s32 VAR_6;

  VAR_6 = FUNC_1(VAR_0, VAR_5, VAR_4 - VAR_3);
  if (VAR_6 < 0)
   return VAR_6;

  FUNC_0(VAR_0, VAR_5);
  VAR_3 += VAR_6;
  VAR_0->log_type_id++;
 }

 return 0;
}
