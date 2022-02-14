
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct btf_type {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct btf_type const*) ;

__attribute__((used)) static bool FUNC_5(const struct btf_type *VAR_0)
{
 u8 VAR_1, VAR_2;
 u32 VAR_3;

 VAR_3 = FUNC_4(VAR_0);
 VAR_1 = FUNC_2(VAR_3);
 VAR_2 = FUNC_1(VAR_1);
 if (FUNC_0(VAR_1) ||
     FUNC_3(VAR_3) ||
     (VAR_2 != sizeof(u8) && VAR_2 != sizeof(u16) &&
      VAR_2 != sizeof(u32) && VAR_2 != sizeof(u64) &&
      VAR_2 != (2 * sizeof(u64)))) {
  return 0;
 }

 return 1;
}
