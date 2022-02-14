
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct in6_addr*) ;

__attribute__((used)) static int FUNC_3(struct sockaddr *VAR_2)
{
 switch (VAR_2->sa_family) {
 case 129: {
  struct sockaddr_in *VAR_3 = (struct sockaddr_in *)VAR_2;
  return VAR_3->sin_addr.s_addr != FUNC_1(VAR_0);
 }
 case 128: {
  struct in6_addr *VAR_4 = &((struct sockaddr_in6 *)VAR_2)->sin6_addr;
  return !FUNC_2(VAR_4);
 }
 }

 FUNC_0(VAR_1, "NFS: Invalid IP address specified\n");
 return 0;
}
