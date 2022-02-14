
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; int sin6_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct TYPE_5__ {scalar_t__ ss_family; } ;
struct TCP_Server_Info {TYPE_2__ srcaddr; struct socket* ssocket; } ;
struct TYPE_4__ {int (* bind ) (struct socket*,struct sockaddr*,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int *,int) ;
 int FUNC_1 (struct socket*,struct sockaddr*,int) ;

__attribute__((used)) static int
FUNC_2(struct TCP_Server_Info *VAR_3)
{
 int VAR_4 = 0;
 if (VAR_3->srcaddr.ss_family != VAR_1) {

  struct socket *VAR_5 = VAR_3->ssocket;
  VAR_4 = VAR_5->ops->bind(VAR_5,
           (struct sockaddr *) &VAR_3->srcaddr,
           sizeof(VAR_3->srcaddr));
  if (VAR_4 < 0) {
   struct sockaddr_in *VAR_6;
   struct sockaddr_in6 *VAR_7;
   VAR_6 = (struct sockaddr_in *)&VAR_3->srcaddr;
   VAR_7 = (struct sockaddr_in6 *)&VAR_3->srcaddr;
   if (VAR_7->sin6_family == VAR_0)
    FUNC_0(VAR_2, "Failed to bind to: %pI6c, error: %d\n",
      &VAR_7->sin6_addr, VAR_4);
   else
    FUNC_0(VAR_2, "Failed to bind to: %pI4, error: %d\n",
      &VAR_6->sin_addr.s_addr, VAR_4);
  }
 }
 return VAR_4;
}
