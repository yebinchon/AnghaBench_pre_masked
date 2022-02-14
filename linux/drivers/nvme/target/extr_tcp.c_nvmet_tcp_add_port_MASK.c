
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_13__ {int ss_family; } ;
struct nvmet_tcp_port {int last_cpu; TYPE_3__* sock; TYPE_5__ addr; int data_ready; struct nvmet_port* nport; int accept_work; } ;
struct TYPE_11__ {int adrfam; int portid; int trsvcid; int traddr; } ;
struct nvmet_port {scalar_t__ inline_data_size; TYPE_2__ disc_addr; struct nvmet_tcp_port* priv; } ;
typedef int opt ;
typedef int __kernel_sa_family_t ;
struct TYPE_12__ {TYPE_1__* sk; } ;
struct TYPE_10__ {int sk_data_ready; struct nvmet_tcp_port* sk_user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int ,int ,int ,TYPE_5__*) ;
 int VAR_11 ;
 int FUNC_2 (TYPE_3__*,struct sockaddr*,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int ,int ,char*,int) ;
 int FUNC_5 (struct nvmet_tcp_port*) ;
 struct nvmet_tcp_port* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,int ,TYPE_5__*) ;
 int FUNC_10 (int ,int ,int ,TYPE_3__**) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_12(struct nvmet_port *VAR_14)
{
 struct nvmet_tcp_port *VAR_15;
 __kernel_sa_family_t VAR_16;
 int VAR_17, VAR_18;

 VAR_15 = FUNC_6(sizeof(*VAR_15), VAR_4);
 if (!VAR_15)
  return -VAR_3;

 switch (VAR_14->disc_addr.adrfam) {
 case 129:
  VAR_16 = VAR_0;
  break;
 case 128:
  VAR_16 = VAR_1;
  break;
 default:
  FUNC_8("address family %d not supported\n",
    VAR_14->disc_addr.adrfam);
  VAR_18 = -VAR_2;
  goto err_port;
 }

 VAR_18 = FUNC_1(&VAR_11, VAR_16, VAR_14->disc_addr.traddr,
   VAR_14->disc_addr.trsvcid, &VAR_15->addr);
 if (VAR_18) {
  FUNC_8("malformed ip/port passed: %s:%s\n",
   VAR_14->disc_addr.traddr, VAR_14->disc_addr.trsvcid);
  goto err_port;
 }

 VAR_15->nport = VAR_14;
 VAR_15->last_cpu = -1;
 FUNC_0(&VAR_15->accept_work, VAR_12);
 if (VAR_15->nport->inline_data_size < 0)
  VAR_15->nport->inline_data_size = VAR_6;

 VAR_18 = FUNC_10(VAR_15->addr.ss_family, VAR_7,
    VAR_5, &VAR_15->sock);
 if (VAR_18) {
  FUNC_8("failed to create a socket\n");
  goto err_port;
 }

 VAR_15->sock->sk->sk_user_data = VAR_15;
 VAR_15->data_ready = VAR_15->sock->sk->sk_data_ready;
 VAR_15->sock->sk->sk_data_ready = VAR_13;

 VAR_17 = 1;
 VAR_18 = FUNC_4(VAR_15->sock, VAR_5,
   VAR_10, (char *)&VAR_17, sizeof(VAR_17));
 if (VAR_18) {
  FUNC_8("failed to set TCP_NODELAY sock opt %d\n", VAR_18);
  goto err_sock;
 }

 VAR_18 = FUNC_4(VAR_15->sock, VAR_8, VAR_9,
   (char *)&VAR_17, sizeof(VAR_17));
 if (VAR_18) {
  FUNC_8("failed to set SO_REUSEADDR sock opt %d\n", VAR_18);
  goto err_sock;
 }

 VAR_18 = FUNC_2(VAR_15->sock, (struct sockaddr *)&VAR_15->addr,
   sizeof(VAR_15->addr));
 if (VAR_18) {
  FUNC_8("failed to bind port socket %d\n", VAR_18);
  goto err_sock;
 }

 VAR_18 = FUNC_3(VAR_15->sock, 128);
 if (VAR_18) {
  FUNC_8("failed to listen %d on port sock\n", VAR_18);
  goto err_sock;
 }

 VAR_14->priv = VAR_15;
 FUNC_9("enabling port %d (%pISpc)\n",
  FUNC_7(VAR_14->disc_addr.portid), &VAR_15->addr);

 return 0;

err_sock:
 FUNC_11(VAR_15->sock);
err_port:
 FUNC_5(VAR_15);
 return VAR_18;
}
