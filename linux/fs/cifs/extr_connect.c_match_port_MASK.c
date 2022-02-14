
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {scalar_t__ sin6_port; } ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct sockaddr {int sa_family; } ;
struct TCP_Server_Info {int dstaddr; scalar_t__ rdma; } ;
typedef scalar_t__ __be16 ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(struct TCP_Server_Info *VAR_2, struct sockaddr *VAR_3)
{
 __be16 VAR_4, *VAR_5;


 if (VAR_2->rdma)
  return 1;

 switch (VAR_3->sa_family) {
 case 129:
  VAR_5 = &((struct sockaddr_in *) &VAR_2->dstaddr)->sin_port;
  VAR_4 = ((struct sockaddr_in *) VAR_3)->sin_port;
  break;
 case 128:
  VAR_5 = &((struct sockaddr_in6 *) &VAR_2->dstaddr)->sin6_port;
  VAR_4 = ((struct sockaddr_in6 *) VAR_3)->sin6_port;
  break;
 default:
  FUNC_0(1);
  return 0;
 }

 if (!VAR_4) {
  VAR_4 = FUNC_1(VAR_0);
  if (VAR_4 == *VAR_5)
   return 1;

  VAR_4 = FUNC_1(VAR_1);
 }

 return VAR_4 == *VAR_5;
}
