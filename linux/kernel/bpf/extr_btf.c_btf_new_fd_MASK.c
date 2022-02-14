
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int btf_log_size; int btf_log_buf; int btf_log_level; int btf_size; int btf; } ;
struct btf {int dummy; } ;


 scalar_t__ FUNC_0 (struct btf*) ;
 int FUNC_1 (struct btf*) ;
 int FUNC_2 (struct btf*) ;
 int FUNC_3 (struct btf*) ;
 int FUNC_4 (struct btf*) ;
 struct btf* FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct btf*) ;
 int FUNC_7 (int ) ;

int FUNC_8(const union bpf_attr *VAR_0)
{
 struct btf *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_5(FUNC_7(VAR_0->btf),
   VAR_0->btf_size, VAR_0->btf_log_level,
   FUNC_7(VAR_0->btf_log_buf),
   VAR_0->btf_log_size);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2) {
  FUNC_4(VAR_1);
  return VAR_2;
 }







 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 < 0)
  FUNC_6(VAR_1);

 return VAR_2;
}
