
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 if (VAR_3 & VAR_1) {
  VAR_4 = (VAR_2 / 4) % 6;
 } else {
  VAR_4 = ((VAR_2 + 2) / 4) % 6;
 }

 return ((VAR_4 << 8) | VAR_0);
}
