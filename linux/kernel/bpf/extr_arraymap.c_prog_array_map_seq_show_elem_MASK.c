
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;
struct bpf_map {int btf_value_type_id; int btf; } ;


 void* FUNC_0 (void*) ;
 void** FUNC_1 (struct bpf_map*,void*) ;
 int FUNC_2 (int ,int ,int *,struct seq_file*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct seq_file*,char*,int ) ;
 int FUNC_7 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_8(struct bpf_map *VAR_0, void *VAR_1,
      struct seq_file *VAR_2)
{
 void **VAR_3, *VAR_4;
 u32 VAR_5;

 FUNC_4();

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3) {
  VAR_4 = FUNC_0(*VAR_3);
  if (VAR_4) {
   FUNC_6(VAR_2, "%u: ", *(u32 *)VAR_1);
   VAR_5 = FUNC_3(VAR_4);
   FUNC_2(VAR_0->btf, VAR_0->btf_value_type_id,
       &VAR_5, VAR_2);
   FUNC_7(VAR_2, "\n");
  }
 }

 FUNC_5();
}
