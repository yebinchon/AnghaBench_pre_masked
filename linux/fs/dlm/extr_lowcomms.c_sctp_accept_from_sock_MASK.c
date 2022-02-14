
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr_storage {int dummy; } ;
struct sctp_prim {int ssp_addr; } ;
struct connection {int nodeid; int sock_mutex; int rwork; int flags; void* rx_action; struct connection* othercon; scalar_t__ sock; int swork; int writequeue_lock; int writequeue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct socket*,struct connection*) ;
 int FUNC_3 (int *,int*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (scalar_t__,struct socket**,int ) ;
 int FUNC_5 (struct socket*,int ,int ,char*,int*) ;
 struct connection* FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *,int ,int*) ;
 int FUNC_9 (struct sctp_prim*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 struct connection* FUNC_14 (int,int ) ;
 int FUNC_15 (char*,int ,unsigned char*,int) ;
 int FUNC_16 (char*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_17 (int ,int *) ;
 void* VAR_14 ;
 int VAR_15 ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (struct socket*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,int *) ;

__attribute__((used)) static int FUNC_22(struct connection *VAR_16)
{

 struct sctp_prim VAR_17;
 int VAR_18;
 int VAR_19, VAR_20;
 int VAR_21;
 struct connection *VAR_22;
 struct connection *VAR_23;
 struct socket *VAR_24;

 FUNC_11(&VAR_10);
 if (!VAR_11) {
  FUNC_13(&VAR_10);
  return -1;
 }
 FUNC_13(&VAR_10);

 FUNC_12(&VAR_16->sock_mutex, 0);

 VAR_20 = FUNC_4(VAR_16->sock, &VAR_24, VAR_7);
 if (VAR_20 < 0)
  goto accept_err;

 FUNC_9(&VAR_17, 0, sizeof(struct sctp_prim));
 VAR_19 = sizeof(struct sctp_prim);

 VAR_20 = FUNC_5(VAR_24, VAR_6, VAR_8,
    (char *)&VAR_17, &VAR_19);
 if (VAR_20 < 0) {
  FUNC_7("getsockopt/sctp_primary_addr failed: %d", VAR_20);
  goto accept_err;
 }

 FUNC_8(&VAR_17.ssp_addr, 0, &VAR_21);
 VAR_20 = FUNC_3(&VAR_17.ssp_addr, &VAR_18);
 if (VAR_20) {
  unsigned char *VAR_25 = (unsigned char *)&VAR_17.ssp_addr;

  FUNC_7("reject connect from unknown addr");
  FUNC_15("ss: ", VAR_2,
         VAR_25, sizeof(struct sockaddr_storage));
  goto accept_err;
 }

 VAR_22 = FUNC_14(VAR_18, VAR_5);
 if (!VAR_22) {
  VAR_20 = -VAR_4;
  goto accept_err;
 }

 FUNC_12(&VAR_22->sock_mutex, 1);

 if (VAR_22->sock) {
  struct connection *VAR_26 = VAR_22->othercon;

  if (!VAR_26) {
   VAR_26 = FUNC_6(VAR_9, VAR_5);
   if (!VAR_26) {
    FUNC_7("failed to allocate incoming socket");
    FUNC_13(&VAR_22->sock_mutex);
    VAR_20 = -VAR_4;
    goto accept_err;
   }
   VAR_26->nodeid = VAR_18;
   VAR_26->rx_action = VAR_14;
   FUNC_10(&VAR_26->sock_mutex);
   FUNC_0(&VAR_26->writequeue);
   FUNC_20(&VAR_26->writequeue_lock);
   FUNC_1(&VAR_26->swork, VAR_13);
   FUNC_1(&VAR_26->rwork, VAR_12);
   FUNC_18(VAR_0, &VAR_26->flags);
  }
  FUNC_12(&VAR_26->sock_mutex, 2);
  if (!VAR_26->sock) {
   VAR_22->othercon = VAR_26;
   FUNC_2(VAR_24, VAR_26);
   VAR_23 = VAR_26;
   FUNC_13(&VAR_26->sock_mutex);
  } else {
   FUNC_16("Extra connection from node %d attempted\n", VAR_18);
   VAR_20 = -VAR_3;
   FUNC_13(&VAR_26->sock_mutex);
   FUNC_13(&VAR_22->sock_mutex);
   goto accept_err;
  }
 } else {
  VAR_22->rx_action = VAR_14;
  FUNC_2(VAR_24, VAR_22);
  VAR_23 = VAR_22;
 }

 FUNC_7("connected to %d", VAR_18);

 FUNC_13(&VAR_22->sock_mutex);






 if (!FUNC_21(VAR_1, &VAR_23->flags))
  FUNC_17(VAR_15, &VAR_23->rwork);
 FUNC_13(&VAR_16->sock_mutex);

 return 0;

accept_err:
 FUNC_13(&VAR_16->sock_mutex);
 if (VAR_24)
  FUNC_19(VAR_24);
 if (VAR_20 != -VAR_3)
  FUNC_7("error accepting connection from node: %d", VAR_20);

 return VAR_20;
}
