
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0)
{
 int VAR_1 = VAR_0 >> 6;
 int VAR_2 = 1;

 switch (VAR_1)
 {
 case 1:
  VAR_2 = 4; break;
 case 2:
  VAR_2 = 16; break;
 case 3:
  VAR_2 = 64; break;
 case 0:
 default:
  break;
 }

 return (VAR_0 & 0x3f) * VAR_2;
}
