
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct seq_file {int dummy; } ;
struct btf_type {int dummy; } ;
struct btf {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (void*,scalar_t__,scalar_t__,struct seq_file*) ;
 int FUNC_5 (struct btf_type const*) ;

__attribute__((used)) static void FUNC_6(const struct btf *VAR_0,
      const struct btf_type *VAR_1,
      void *VAR_2, u8 VAR_3,
      struct seq_file *VAR_4)
{
 u32 VAR_5 = FUNC_5(VAR_1);
 u8 VAR_6 = FUNC_2(VAR_5);
 u8 VAR_7;





 VAR_7 = VAR_3 + FUNC_3(VAR_5);
 VAR_2 += FUNC_1(VAR_7);
 VAR_3 = FUNC_0(VAR_7);
 FUNC_4(VAR_2, VAR_3, VAR_6, VAR_4);
}
