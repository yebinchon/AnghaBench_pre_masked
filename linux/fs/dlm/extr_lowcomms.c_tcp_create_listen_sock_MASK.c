
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {TYPE_2__* ops; TYPE_1__* sk; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct connection {int * sock; int connect_action; int rx_action; } ;
typedef int one ;
struct TYPE_8__ {int ci_tcp_port; } ;
struct TYPE_7__ {scalar_t__ ss_family; } ;
struct TYPE_6__ {int (* bind ) (struct socket*,struct sockaddr*,int) ;int (* listen ) (struct socket*,int) ;} ;
struct TYPE_5__ {int sk_callback_lock; struct connection* sk_user_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;
 TYPE_3__** VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct socket*,int ,int ,char*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct sockaddr_storage*,int,int*) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (int *,scalar_t__,int ,int ,struct socket**) ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*,struct sockaddr*,int) ;
 int FUNC_7 (struct socket*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct socket *FUNC_10(struct connection *VAR_13,
          struct sockaddr_storage *VAR_14)
{
 struct socket *VAR_15 = ((void*)0);
 int VAR_16 = 0;
 int VAR_17 = 1;
 int VAR_18;

 if (VAR_9[0]->ss_family == VAR_0)
  VAR_18 = sizeof(struct sockaddr_in);
 else
  VAR_18 = sizeof(struct sockaddr_in6);


 VAR_16 = FUNC_4(&VAR_10, VAR_9[0]->ss_family,
      VAR_2, VAR_1, &VAR_15);
 if (VAR_16 < 0) {
  FUNC_1("Can't create listening comms socket");
  goto create_out;
 }


 FUNC_0(VAR_15, VAR_4, VAR_7, (char *)&VAR_17,
     sizeof(VAR_17));

 VAR_16 = FUNC_0(VAR_15, VAR_3, VAR_6,
       (char *)&VAR_17, sizeof(VAR_17));

 if (VAR_16 < 0) {
  FUNC_1("Failed to set SO_REUSEADDR on socket: %d", VAR_16);
 }
 FUNC_8(&VAR_15->sk->sk_callback_lock);
 VAR_15->sk->sk_user_data = VAR_13;
 FUNC_3(VAR_15);
 VAR_13->rx_action = VAR_11;
 VAR_13->connect_action = VAR_12;
 FUNC_9(&VAR_15->sk->sk_callback_lock);


 FUNC_2(VAR_14, VAR_8.ci_tcp_port, &VAR_18);
 VAR_16 = VAR_15->ops->bind(VAR_15, (struct sockaddr *) VAR_14, VAR_18);
 if (VAR_16 < 0) {
  FUNC_1("Can't bind to port %d", VAR_8.ci_tcp_port);
  FUNC_5(VAR_15);
  VAR_15 = ((void*)0);
  VAR_13->sock = ((void*)0);
  goto create_out;
 }
 VAR_16 = FUNC_0(VAR_15, VAR_3, VAR_5,
     (char *)&VAR_17, sizeof(VAR_17));
 if (VAR_16 < 0) {
  FUNC_1("Set keepalive failed: %d", VAR_16);
 }

 VAR_16 = VAR_15->ops->listen(VAR_15, 5);
 if (VAR_16 < 0) {
  FUNC_1("Can't listen on port %d", VAR_8.ci_tcp_port);
  FUNC_5(VAR_15);
  VAR_15 = ((void*)0);
  goto create_out;
 }

create_out:
 return VAR_15;
}
