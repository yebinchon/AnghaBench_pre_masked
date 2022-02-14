
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;





 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool
FUNC_2(struct sockaddr *VAR_0, struct sockaddr *VAR_1)
{
 switch (VAR_0->sa_family) {
 case 128:
  return (VAR_1->sa_family == 128);
 case 130: {
  struct sockaddr_in *VAR_2 = (struct sockaddr_in *)VAR_0;
  struct sockaddr_in *VAR_3 = (struct sockaddr_in *)VAR_1;
  return (VAR_2->sin_addr.s_addr == VAR_3->sin_addr.s_addr);
 }
 case 129: {
  struct sockaddr_in6 *VAR_4 = (struct sockaddr_in6 *)VAR_0;
  struct sockaddr_in6 *VAR_5 = (struct sockaddr_in6 *)VAR_1;
  return FUNC_1(&VAR_4->sin6_addr, &VAR_5->sin6_addr);
 }
 default:
  FUNC_0(1);
  return 0;
 }
}
