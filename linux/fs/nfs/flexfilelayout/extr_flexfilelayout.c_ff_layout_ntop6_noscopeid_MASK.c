
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {struct in6_addr const* s6_addr32; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct sockaddr {int dummy; } ;


 scalar_t__ FUNC_0 (struct in6_addr const*) ;
 scalar_t__ FUNC_1 (struct in6_addr const*) ;
 scalar_t__ FUNC_2 (struct in6_addr const*) ;
 size_t FUNC_3 (char*,int const,char*,...) ;

__attribute__((used)) static size_t
FUNC_4(const struct sockaddr *VAR_0, char *VAR_1,
     const int VAR_2)
{
 const struct sockaddr_in6 *VAR_3 = (struct sockaddr_in6 *)VAR_0;
 const struct in6_addr *VAR_4 = &VAR_3->sin6_addr;






 if (FUNC_0(VAR_4))
  return FUNC_3(VAR_1, VAR_2, "::");






 if (FUNC_1(VAR_4))
  return FUNC_3(VAR_1, VAR_2, "::1");







 if (FUNC_2(VAR_4))
  return FUNC_3(VAR_1, VAR_2, "::ffff:%pI4",
     &VAR_4->s6_addr32[3]);




 return FUNC_3(VAR_1, VAR_2, "%pI6c", VAR_4);
}
