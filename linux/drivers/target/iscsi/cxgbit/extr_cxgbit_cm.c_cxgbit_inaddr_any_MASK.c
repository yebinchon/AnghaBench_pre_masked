
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct in6_addr {int dummy; } ;
struct TYPE_3__ {struct sockaddr_storage local_addr; } ;
struct cxgbit_np {TYPE_1__ com; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct in6_addr const*) ;

__attribute__((used)) static bool FUNC_2(struct cxgbit_np *VAR_4)
{
 struct sockaddr_storage *VAR_5 = &VAR_4->com.local_addr;
 int VAR_6 = VAR_5->ss_family;
 int VAR_7;

 if (VAR_6 == VAR_0) {
  struct sockaddr_in *VAR_8;

  VAR_8 = (struct sockaddr_in *)VAR_5;
  if (VAR_8->sin_addr.s_addr == FUNC_0(VAR_2))
   return 1;
 } else if (VAR_6 == VAR_1) {
  struct sockaddr_in6 *VAR_9;

  VAR_9 = (struct sockaddr_in6 *)VAR_5;
  VAR_7 = FUNC_1((const struct in6_addr *)
    &VAR_9->sin6_addr);
  if (VAR_7 == VAR_3)
   return 1;
 }
 return 0;
}
