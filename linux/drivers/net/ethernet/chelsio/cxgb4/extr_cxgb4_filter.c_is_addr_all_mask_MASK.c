
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct in_addr {int s_addr; } ;
struct in6_addr {int* s6_addr32; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(u8 *VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_0) {
  struct in_addr *VAR_4;

  VAR_4 = (struct in_addr *)VAR_2;
  if (VAR_4->s_addr == 0xffffffff)
   return 1;
 } else if (VAR_3 == VAR_1) {
  struct in6_addr *VAR_5;

  VAR_5 = (struct in6_addr *)VAR_2;
  if (VAR_5->s6_addr32[0] == 0xffffffff &&
      VAR_5->s6_addr32[1] == 0xffffffff &&
      VAR_5->s6_addr32[2] == 0xffffffff &&
      VAR_5->s6_addr32[3] == 0xffffffff)
   return 1;
 }
 return 0;
}
