
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(u8 VAR_0)
{
 unsigned VAR_1;
 unsigned VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < 7; VAR_1++)
  VAR_2 += (VAR_0 & (1 << VAR_1)) ? 1 : 0;
 return VAR_0 | ((VAR_2 & 1) ? 0 : 0x80);
}
