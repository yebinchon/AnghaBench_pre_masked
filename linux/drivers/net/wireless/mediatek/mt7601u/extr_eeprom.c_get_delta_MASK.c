
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int s8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static s8
FUNC_2(u8 VAR_0)
{
 s8 VAR_1;

 if (!FUNC_1(VAR_0) || !(VAR_0 & FUNC_0(7)))
  return 0;

 VAR_1 = VAR_0 & 0x1f;
 if (VAR_1 > 8)
  VAR_1 = 8;
 if (VAR_0 & FUNC_0(6))
  VAR_1 = -VAR_1;

 return VAR_1;
}
