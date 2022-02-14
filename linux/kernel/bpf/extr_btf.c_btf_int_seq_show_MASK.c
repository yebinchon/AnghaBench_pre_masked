
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct seq_file {int dummy; } ;
struct btf_type {int dummy; } ;
struct btf {int dummy; } ;
typedef int s8 ;
typedef int s64 ;
typedef int s32 ;
typedef int s16 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (struct seq_file*,void*) ;
 int FUNC_5 (struct btf const*,struct btf_type const*,void*,int,struct seq_file*) ;
 int FUNC_6 (struct btf_type const*) ;
 int FUNC_7 (struct seq_file*,char*,int) ;

__attribute__((used)) static void FUNC_8(const struct btf *VAR_1, const struct btf_type *VAR_2,
        u32 VAR_3, void *VAR_4, u8 VAR_5,
        struct seq_file *VAR_6)
{
 u32 VAR_7 = FUNC_6(VAR_2);
 u8 VAR_8 = FUNC_2(VAR_7);
 bool VAR_9 = VAR_8 & VAR_0;
 u8 VAR_10 = FUNC_1(VAR_7);

 if (VAR_5 || FUNC_3(VAR_7) ||
     FUNC_0(VAR_10)) {
  FUNC_5(VAR_1, VAR_2, VAR_4, VAR_5, VAR_6);
  return;
 }

 switch (VAR_10) {
 case 128:
  FUNC_4(VAR_6, VAR_4);
  break;
 case 64:
  if (VAR_9)
   FUNC_7(VAR_6, "%lld", *(s64 *)VAR_4);
  else
   FUNC_7(VAR_6, "%llu", *(u64 *)VAR_4);
  break;
 case 32:
  if (VAR_9)
   FUNC_7(VAR_6, "%d", *(s32 *)VAR_4);
  else
   FUNC_7(VAR_6, "%u", *(u32 *)VAR_4);
  break;
 case 16:
  if (VAR_9)
   FUNC_7(VAR_6, "%d", *(s16 *)VAR_4);
  else
   FUNC_7(VAR_6, "%u", *(u16 *)VAR_4);
  break;
 case 8:
  if (VAR_9)
   FUNC_7(VAR_6, "%d", *(s8 *)VAR_4);
  else
   FUNC_7(VAR_6, "%u", *(u8 *)VAR_4);
  break;
 default:
  FUNC_5(VAR_1, VAR_2, VAR_4, VAR_5, VAR_6);
 }
}
