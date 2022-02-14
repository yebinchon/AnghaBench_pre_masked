
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u8 FUNC_2(u16 VAR_0)
{
 if (FUNC_0(!FUNC_1(VAR_0)))
  return 0xff;

 if (VAR_0 <= 14)
  return VAR_0 - 1;
 if (VAR_0 <= 64)
  return (VAR_0 + 20) / 4;
 if (VAR_0 <= 140)
  return (VAR_0 - 12) / 4;
 return (VAR_0 - 13) / 4;
}
