
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tv ;
struct timeval {int tv_sec; int tv_usec; } ;
struct socket {TYPE_1__* ops; } ;
struct sockaddr_storage {int tv_sec; int tv_usec; } ;
struct sockaddr {int dummy; } ;
struct connection {scalar_t__ nodeid; void (* connect_action ) (struct connection*) ;int sock_mutex; int retries; int * sock; int rx_action; } ;
typedef int one ;
typedef int daddr ;
struct TYPE_6__ {int ci_tcp_port; } ;
struct TYPE_5__ {int ss_family; } ;
struct TYPE_4__ {int (* connect ) (struct socket*,struct sockaddr*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct socket*,struct connection*) ;
 TYPE_3__ VAR_13 ;
 TYPE_2__** VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct socket*,int ,int ,char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct connection*) ;
 int FUNC_4 (struct timeval*,int ,int*) ;
 int FUNC_5 (struct timeval*,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__,struct timeval*,int *,int) ;
 int VAR_16 ;
 scalar_t__ FUNC_10 (struct connection*,int ) ;
 int FUNC_11 (int *,int ,int ,int ,struct socket**) ;
 int FUNC_12 (struct socket*) ;
 int FUNC_13 (struct socket*,struct sockaddr*,int,int ) ;

__attribute__((used)) static void FUNC_14(struct connection *VAR_17)
{
 struct sockaddr_storage VAR_18;
 int VAR_19 = 1;
 int VAR_20;
 int VAR_21;
 struct socket *VAR_22;
 struct timeval VAR_23 = { .tv_sec = 5, .tv_usec = 0 };

 if (VAR_17->nodeid == 0) {
  FUNC_2("attempt to connect sock 0 foiled");
  return;
 }

 FUNC_7(&VAR_17->sock_mutex);


 if (VAR_17->retries++ > VAR_7)
  goto out;

 if (VAR_17->sock) {
  FUNC_2("node %d already connected.", VAR_17->nodeid);
  goto out;
 }

 FUNC_5(&VAR_18, 0, sizeof(VAR_18));
 VAR_20 = FUNC_9(VAR_17->nodeid, &VAR_18, ((void*)0), 1);
 if (VAR_20 < 0) {
  FUNC_2("no address for nodeid %d", VAR_17->nodeid);
  goto out;
 }


 VAR_20 = FUNC_11(&VAR_15, VAR_14[0]->ss_family,
      VAR_9, VAR_6, &VAR_22);
 if (VAR_20 < 0)
  goto socket_err;

 VAR_17->rx_action = VAR_16;
 VAR_17->connect_action = FUNC_14;
 FUNC_0(VAR_22, VAR_17);


 if (FUNC_10(VAR_17, 0))
  goto bind_err;

 FUNC_4(&VAR_18, VAR_13.ci_tcp_port, &VAR_21);

 FUNC_2("connecting to %d", VAR_17->nodeid);


 FUNC_1(VAR_22, VAR_10, VAR_8, (char *)&VAR_19,
     sizeof(VAR_19));






 FUNC_1(VAR_22, VAR_11, VAR_12, (char *)&VAR_23,
     sizeof(VAR_23));
 VAR_20 = VAR_22->ops->connect(VAR_22, (struct sockaddr *)&VAR_18, VAR_21,
       0);
 FUNC_5(&VAR_23, 0, sizeof(VAR_23));
 FUNC_1(VAR_22, VAR_11, VAR_12, (char *)&VAR_23,
     sizeof(VAR_23));

 if (VAR_20 == -VAR_1)
  VAR_20 = 0;
 if (VAR_20 == 0)
  goto out;

bind_err:
 VAR_17->sock = ((void*)0);
 FUNC_12(VAR_22);

socket_err:




 if (VAR_20 != -VAR_0 &&
     VAR_20 != -VAR_4 &&
     VAR_20 != -VAR_3 &&
     VAR_20 != -VAR_2 &&
     VAR_20 != -VAR_5) {
  FUNC_2("connect %d try %d error %d", VAR_17->nodeid,
     VAR_17->retries, VAR_20);
  FUNC_8(&VAR_17->sock_mutex);
  FUNC_6(1000);
  FUNC_3(VAR_17);
  return;
 }

out:
 FUNC_8(&VAR_17->sock_mutex);
}
