
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;

__attribute__((used)) static u16 FUNC_0(u8 *VAR_1)
{
 u16 VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = VAR_2 << 1;
  if (VAR_1[VAR_3] == 0xff)
   VAR_2 |= 1;
 }
 return VAR_2;
}
