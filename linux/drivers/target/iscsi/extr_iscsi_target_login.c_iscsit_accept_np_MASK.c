
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {TYPE_2__* ops; } ;
struct TYPE_6__ {struct sockaddr_in6* s6_addr32; } ;
struct sockaddr_in6 {TYPE_3__ sin6_addr; int sin_addr; int sin6_port; int sin_port; void* sin_family; } ;
struct sockaddr_in {TYPE_3__ sin6_addr; int sin_addr; int sin6_port; int sin_port; void* sin_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {scalar_t__ ss_family; } ;
struct iscsi_np {TYPE_1__ np_sockaddr; struct socket* np_socket; } ;
struct iscsi_conn {scalar_t__ login_family; int local_sockaddr; struct socket* sock; int login_sockaddr; } ;
typedef int sock_in6 ;
typedef int sock_in ;
struct TYPE_5__ {int (* getname ) (struct socket*,struct sockaddr*,int) ;} ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct socket*,struct socket**,int ) ;
 int FUNC_2 (int *,struct sockaddr_in6*,int) ;
 int FUNC_3 (struct sockaddr_in6*,int ,int) ;
 int FUNC_4 (struct socket*,struct sockaddr*,int) ;
 int FUNC_5 (struct socket*,struct sockaddr*,int) ;
 int FUNC_6 (struct socket*,struct sockaddr*,int) ;
 int FUNC_7 (struct socket*,struct sockaddr*,int) ;

int FUNC_8(struct iscsi_np *VAR_2, struct iscsi_conn *VAR_3)
{
 struct socket *VAR_4, *VAR_5 = VAR_2->np_socket;
 struct sockaddr_in VAR_6;
 struct sockaddr_in6 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5, &VAR_4, 0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_3->sock = VAR_4;
 VAR_3->login_family = VAR_2->np_sockaddr.ss_family;

 if (VAR_2->np_sockaddr.ss_family == VAR_1) {
  FUNC_3(&VAR_7, 0, sizeof(struct sockaddr_in6));

  VAR_8 = VAR_3->sock->ops->getname(VAR_3->sock,
    (struct sockaddr *)&VAR_7, 1);
  if (VAR_8 >= 0) {
   if (!FUNC_0(&VAR_7)) {
    FUNC_2(&VAR_3->login_sockaddr, &VAR_7, sizeof(VAR_7));
   } else {

    VAR_6.sin_family = VAR_0;
    VAR_6.sin_port = VAR_7;
    FUNC_2(&VAR_6.sin_addr, &VAR_7[3], 4);
    FUNC_2(&VAR_3->login_sockaddr, &VAR_6, sizeof(VAR_6));
   }
  }

  VAR_8 = VAR_3->sock->ops->getname(VAR_3->sock,
    (struct sockaddr *)&VAR_7, 0);
  if (VAR_8 >= 0) {
   if (!FUNC_0(&VAR_7)) {
    FUNC_2(&VAR_3->local_sockaddr, &VAR_7, sizeof(VAR_7));
   } else {

    VAR_6.sin_family = VAR_0;
    VAR_6.sin_port = VAR_7;
    FUNC_2(&VAR_6.sin_addr, &VAR_7[3], 4);
    FUNC_2(&VAR_3->local_sockaddr, &VAR_6, sizeof(VAR_6));
   }
  }
 } else {
  FUNC_3(&VAR_6, 0, sizeof(struct sockaddr_in));

  VAR_8 = VAR_3->sock->ops->getname(VAR_3->sock,
    (struct sockaddr *)&VAR_6, 1);
  if (VAR_8 >= 0)
   FUNC_2(&VAR_3->login_sockaddr, &VAR_6, sizeof(VAR_6));

  VAR_8 = VAR_3->sock->ops->getname(VAR_3->sock,
    (struct sockaddr *)&VAR_6, 0);
  if (VAR_8 >= 0)
   FUNC_2(&VAR_3->local_sockaddr, &VAR_6, sizeof(VAR_6));
 }

 return 0;
}
