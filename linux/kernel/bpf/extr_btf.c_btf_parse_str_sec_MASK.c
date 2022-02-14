
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_verifier_env {struct btf* btf; } ;
struct btf_header {int str_off; int str_len; } ;
struct btf {char* nohdr_data; char const* data; int data_size; char const* strings; struct btf_header hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btf_verifier_env*,char*) ;

__attribute__((used)) static int FUNC_1(struct btf_verifier_env *VAR_2)
{
 const struct btf_header *VAR_3;
 struct btf *VAR_4 = VAR_2->btf;
 const char *VAR_5, *VAR_6;

 VAR_3 = &VAR_4->hdr;
 VAR_5 = VAR_4->nohdr_data + VAR_3->str_off;
 VAR_6 = VAR_5 + VAR_3->str_len;

 if (VAR_6 != VAR_4->data + VAR_4->data_size) {
  FUNC_0(VAR_2, "String section is not at the end");
  return -VAR_1;
 }

 if (!VAR_3->str_len || VAR_3->str_len - 1 > VAR_0 ||
     VAR_5[0] || VAR_6[-1]) {
  FUNC_0(VAR_2, "Invalid string section");
  return -VAR_1;
 }

 VAR_4->strings = VAR_5;

 return 0;
}
