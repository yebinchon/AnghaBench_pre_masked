
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct seq_file {int dummy; } ;
struct btf_type {int dummy; } ;
struct btf_enum {int val; int name_off; } ;
struct btf {int dummy; } ;


 int FUNC_0 (struct btf const*,int ) ;
 struct btf_enum* FUNC_1 (struct btf_type const*) ;
 size_t FUNC_2 (struct btf_type const*) ;
 int FUNC_3 (struct seq_file*,char*,int) ;

__attribute__((used)) static void FUNC_4(const struct btf *VAR_0, const struct btf_type *VAR_1,
         u32 VAR_2, void *VAR_3, u8 VAR_4,
         struct seq_file *VAR_5)
{
 const struct btf_enum *VAR_6 = FUNC_1(VAR_1);
 u32 VAR_7, VAR_8 = FUNC_2(VAR_1);
 int VAR_9 = *(int *)VAR_3;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  if (VAR_9 == VAR_6[VAR_7].val) {
   FUNC_3(VAR_5, "%s",
       FUNC_0(VAR_0,
       VAR_6[VAR_7].name_off));
   return;
  }
 }

 FUNC_3(VAR_5, "%d", VAR_9);
}
