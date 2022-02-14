
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct TYPE_3__ {int in6_u; } ;
struct sockaddr_in6 {int sin6_port; TYPE_1__ sin6_addr; } ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_2__ sin_addr; } ;
struct iscsi_np {int np_network_transport; int np_sockaddr; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int ) ;

bool FUNC_2(
 struct sockaddr_storage *VAR_1,
 struct iscsi_np *VAR_2,
 int VAR_3)
{
 struct sockaddr_in *VAR_4, *VAR_5;
 struct sockaddr_in6 *VAR_6, *VAR_7;
 bool VAR_8 = 0;
 u16 VAR_9, VAR_10;

 if (VAR_1->ss_family == VAR_0) {
  VAR_6 = (struct sockaddr_in6 *)VAR_1;
  VAR_7 = (struct sockaddr_in6 *)&VAR_2->np_sockaddr;

  if (!FUNC_0(&VAR_6->sin6_addr.in6_u,
       &VAR_7->sin6_addr.in6_u,
       sizeof(struct in6_addr)))
   VAR_8 = 1;

  VAR_9 = FUNC_1(VAR_6->sin6_port);
  VAR_10 = FUNC_1(VAR_7->sin6_port);
 } else {
  VAR_4 = (struct sockaddr_in *)VAR_1;
  VAR_5 = (struct sockaddr_in *)&VAR_2->np_sockaddr;

  if (VAR_4->sin_addr.s_addr == VAR_5->sin_addr.s_addr)
   VAR_8 = 1;

  VAR_9 = FUNC_1(VAR_4->sin_port);
  VAR_10 = FUNC_1(VAR_5->sin_port);
 }

 if (VAR_8 && (VAR_10 == VAR_9) &&
     (VAR_2->np_network_transport == VAR_3))
  return 1;

 return 0;
}
