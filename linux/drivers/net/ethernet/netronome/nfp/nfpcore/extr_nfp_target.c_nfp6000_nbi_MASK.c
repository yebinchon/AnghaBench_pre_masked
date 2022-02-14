
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(u32 VAR_0, u64 VAR_1)
{
 u64 VAR_2 = VAR_1 & 0x3fFFFF;

 if (VAR_2 < (1 << 20))
  return FUNC_0(VAR_0);
 if (VAR_2 < (2 << 20))
  return FUNC_2(VAR_0);
 if (VAR_2 < (3 << 20))
  return FUNC_3(VAR_0);
 return FUNC_1(VAR_0);
}
