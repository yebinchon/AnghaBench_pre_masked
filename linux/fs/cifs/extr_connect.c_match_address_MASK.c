
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_scope_id; int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct TCP_Server_Info {int srcaddr; int dstaddr; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct sockaddr*,struct sockaddr*) ;

__attribute__((used)) static bool
FUNC_3(struct TCP_Server_Info *VAR_0, struct sockaddr *VAR_1,
       struct sockaddr *VAR_2)
{
 switch (VAR_1->sa_family) {
 case 129: {
  struct sockaddr_in *VAR_3 = (struct sockaddr_in *)VAR_1;
  struct sockaddr_in *VAR_4 =
     (struct sockaddr_in *)&VAR_0->dstaddr;

  if (VAR_3->sin_addr.s_addr != VAR_4->sin_addr.s_addr)
   return 0;
  break;
 }
 case 128: {
  struct sockaddr_in6 *VAR_5 = (struct sockaddr_in6 *)VAR_1;
  struct sockaddr_in6 *VAR_6 =
     (struct sockaddr_in6 *)&VAR_0->dstaddr;

  if (!FUNC_1(&VAR_5->sin6_addr,
         &VAR_6->sin6_addr))
   return 0;
  if (VAR_5->sin6_scope_id != VAR_6->sin6_scope_id)
   return 0;
  break;
 }
 default:
  FUNC_0(1);
  return 0;
 }

 if (!FUNC_2(VAR_2, (struct sockaddr *)&VAR_0->srcaddr))
  return 0;

 return 1;
}
