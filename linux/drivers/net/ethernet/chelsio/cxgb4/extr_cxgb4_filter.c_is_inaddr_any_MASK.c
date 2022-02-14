
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct in_addr {scalar_t__ s_addr; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct in6_addr const*) ;

__attribute__((used)) static bool FUNC_2(u8 *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_5 == VAR_0) {
  struct in_addr *VAR_7;

  VAR_7 = (struct in_addr *)VAR_4;
  if (VAR_7->s_addr == FUNC_0(VAR_2))
   return 1;
 } else if (VAR_5 == VAR_1) {
  struct in6_addr *VAR_8;

  VAR_8 = (struct in6_addr *)VAR_4;
  VAR_6 = FUNC_1((const struct in6_addr *)
        &VAR_8);
  if (VAR_6 == VAR_3)
   return 1;
 }
 return 0;
}
