
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct connection {int nodeid; int sock_mutex; int rwork; int flags; void* rx_action; struct connection* othercon; scalar_t__ sock; int swork; int writequeue_lock; int writequeue; } ;
typedef int peeraddr ;
struct TYPE_2__ {int (* getname ) (struct socket*,struct sockaddr*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_8 ;
 int FUNC_2 (struct socket*,struct connection*) ;
 scalar_t__ FUNC_3 (struct sockaddr_storage*,int*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (scalar_t__,struct socket**,int ) ;
 struct connection* FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct sockaddr_storage*,int ,int*) ;
 int FUNC_8 (struct sockaddr_storage*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 struct connection* FUNC_13 (int,int ) ;
 int FUNC_14 (char*,int ,unsigned char*,int) ;
 int FUNC_15 (char*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_16 (int ,int *) ;
 void* VAR_14 ;
 int VAR_15 ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (struct socket*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct socket*,struct sockaddr*,int) ;
 int FUNC_21 (int ,int *) ;

__attribute__((used)) static int FUNC_22(struct connection *VAR_16)
{
 int VAR_17;
 struct sockaddr_storage VAR_18;
 struct socket *VAR_19;
 int VAR_20;
 int VAR_21;
 struct connection *VAR_22;
 struct connection *VAR_23;

 FUNC_10(&VAR_10);
 if (!VAR_11) {
  FUNC_12(&VAR_10);
  return -1;
 }
 FUNC_12(&VAR_10);

 FUNC_11(&VAR_16->sock_mutex, 0);

 if (!VAR_16->sock) {
  FUNC_12(&VAR_16->sock_mutex);
  return -VAR_6;
 }

 VAR_17 = FUNC_4(VAR_16->sock, &VAR_19, VAR_8);
 if (VAR_17 < 0)
  goto accept_err;


 FUNC_8(&VAR_18, 0, sizeof(VAR_18));
 VAR_20 = VAR_19->ops->getname(VAR_19, (struct sockaddr *)&VAR_18, 2);
 if (VAR_20 < 0) {
  VAR_17 = -VAR_4;
  goto accept_err;
 }


 FUNC_7(&VAR_18, 0, &VAR_20);
 if (FUNC_3(&VAR_18, &VAR_21)) {
  unsigned char *VAR_24=(unsigned char *)&VAR_18;
  FUNC_6("connect from non cluster node");
  FUNC_14("ss: ", VAR_2,
         VAR_24, sizeof(struct sockaddr_storage));
  FUNC_18(VAR_19);
  FUNC_12(&VAR_16->sock_mutex);
  return -1;
 }

 FUNC_6("got connection from %d", VAR_21);






 VAR_22 = FUNC_13(VAR_21, VAR_7);
 if (!VAR_22) {
  VAR_17 = -VAR_5;
  goto accept_err;
 }
 FUNC_11(&VAR_22->sock_mutex, 1);
 if (VAR_22->sock) {
  struct connection *VAR_25 = VAR_22->othercon;

  if (!VAR_25) {
   VAR_25 = FUNC_5(VAR_9, VAR_7);
   if (!VAR_25) {
    FUNC_6("failed to allocate incoming socket");
    FUNC_12(&VAR_22->sock_mutex);
    VAR_17 = -VAR_5;
    goto accept_err;
   }
   VAR_25->nodeid = VAR_21;
   VAR_25->rx_action = VAR_14;
   FUNC_9(&VAR_25->sock_mutex);
   FUNC_0(&VAR_25->writequeue);
   FUNC_19(&VAR_25->writequeue_lock);
   FUNC_1(&VAR_25->swork, VAR_13);
   FUNC_1(&VAR_25->rwork, VAR_12);
   FUNC_17(VAR_0, &VAR_25->flags);
  }
  FUNC_11(&VAR_25->sock_mutex, 2);
  if (!VAR_25->sock) {
   VAR_22->othercon = VAR_25;
   FUNC_2(VAR_19, VAR_25);
   VAR_23 = VAR_25;
   FUNC_12(&VAR_25->sock_mutex);
  }
  else {
   FUNC_15("Extra connection from node %d attempted\n", VAR_21);
   VAR_17 = -VAR_3;
   FUNC_12(&VAR_25->sock_mutex);
   FUNC_12(&VAR_22->sock_mutex);
   goto accept_err;
  }
 }
 else {
  VAR_22->rx_action = VAR_14;



  FUNC_2(VAR_19, VAR_22);
  VAR_23 = VAR_22;
 }

 FUNC_12(&VAR_22->sock_mutex);






 if (!FUNC_21(VAR_1, &VAR_23->flags))
  FUNC_16(VAR_15, &VAR_23->rwork);
 FUNC_12(&VAR_16->sock_mutex);

 return 0;

accept_err:
 FUNC_12(&VAR_16->sock_mutex);
 if (VAR_19)
  FUNC_18(VAR_19);

 if (VAR_17 != -VAR_3)
  FUNC_6("error accepting connection from node: %d", VAR_17);
 return VAR_17;
}
