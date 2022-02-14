
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;
struct bpf_map {int btf_value_type_id; int btf; scalar_t__ btf_key_type_id; } ;


 void* FUNC_0 (struct bpf_map*,void*) ;
 int FUNC_1 (int ,int ,void*,struct seq_file*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct seq_file*,char*,int ) ;
 int FUNC_5 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_6(struct bpf_map *VAR_0, void *VAR_1,
        struct seq_file *VAR_2)
{
 void *VAR_3;

 FUNC_2();

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_3) {
  FUNC_3();
  return;
 }

 if (VAR_0->btf_key_type_id)
  FUNC_4(VAR_2, "%u: ", *(u32 *)VAR_1);
 FUNC_1(VAR_0->btf, VAR_0->btf_value_type_id, VAR_3, VAR_2);
 FUNC_5(VAR_2, "\n");

 FUNC_3();
}
