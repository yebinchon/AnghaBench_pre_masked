
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;



__attribute__((used)) static bool FUNC_0(u32 VAR_0)
{
 u16 VAR_1, VAR_2;




 VAR_1 = (VAR_0 >> 16) & 0xFFFF;
 VAR_2 = VAR_0 & 0xFFFF;

 return VAR_1 && VAR_2 ? 0 : 1;
}
