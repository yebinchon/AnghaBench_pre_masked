
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iphdr {int tos; } ;



u8 FUNC_0(u8 *VAR_0, u32 VAR_1)
{
 struct iphdr *VAR_2 = (struct iphdr *) VAR_0;
 u8 VAR_3;
 VAR_3 = VAR_2->tos >> 5;
 VAR_3 &= 0x7;

 if ((VAR_1 & 0x7) > VAR_3)
  return (u8) VAR_1 & 0x7;
 else
  return VAR_3;
}
