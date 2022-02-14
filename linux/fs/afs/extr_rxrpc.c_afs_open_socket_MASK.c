
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct TYPE_5__ {scalar_t__ sin6_port; int sin6_family; } ;
struct TYPE_6__ {TYPE_2__ sin6; } ;
struct sockaddr_rxrpc {int transport_len; int srx_service; TYPE_3__ transport; int transport_type; int srx_family; } ;
struct sockaddr {int dummy; } ;
struct afs_net {int charge_preallocation_work; struct socket* socket; int net; } ;
typedef int srx ;
typedef int min_level ;
struct TYPE_4__ {int sk_allocation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct socket*,struct sockaddr*,int) ;
 int FUNC_5 (struct socket*,int ) ;
 int FUNC_6 (struct socket*,int ,int ,void*,int) ;
 int FUNC_7 (struct sockaddr_rxrpc*,int ,int) ;
 int FUNC_8 (struct socket*,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,struct socket**) ;
 int FUNC_10 (struct socket*) ;

int FUNC_11(struct afs_net *VAR_15)
{
 struct sockaddr_rxrpc VAR_16;
 struct socket *VAR_17;
 unsigned int VAR_18;
 int VAR_19;

 FUNC_0("");

 VAR_19 = FUNC_9(VAR_15->net, VAR_2, VAR_10, VAR_7, &VAR_17);
 if (VAR_19 < 0)
  goto error_1;

 VAR_17->sk->sk_allocation = VAR_5;


 FUNC_7(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.srx_family = VAR_2;
 VAR_16.srx_service = VAR_3;
 VAR_16.transport_type = VAR_10;
 VAR_16.transport_len = sizeof(VAR_16.transport.sin6);
 VAR_16.transport.sin6.sin6_family = VAR_1;
 VAR_16.transport.sin6.sin6_port = FUNC_3(VAR_0);

 VAR_18 = VAR_9;
 VAR_19 = FUNC_6(VAR_17, VAR_11, VAR_8,
    (void *)&VAR_18, sizeof(VAR_18));
 if (VAR_19 < 0)
  goto error_2;

 VAR_19 = FUNC_4(VAR_17, (struct sockaddr *) &VAR_16, sizeof(VAR_16));
 if (VAR_19 == -VAR_4) {
  VAR_16.transport.sin6.sin6_port = 0;
  VAR_19 = FUNC_4(VAR_17, (struct sockaddr *) &VAR_16, sizeof(VAR_16));
 }
 if (VAR_19 < 0)
  goto error_2;

 VAR_16.srx_service = VAR_12;
 VAR_19 = FUNC_4(VAR_17, (struct sockaddr *) &VAR_16, sizeof(VAR_16));
 if (VAR_19 < 0)
  goto error_2;
 FUNC_8(VAR_17, VAR_14,
        VAR_13);

 VAR_19 = FUNC_5(VAR_17, VAR_6);
 if (VAR_19 < 0)
  goto error_2;

 VAR_15->socket = VAR_17;
 FUNC_2(&VAR_15->charge_preallocation_work);
 FUNC_1(" = 0");
 return 0;

error_2:
 FUNC_10(VAR_17);
error_1:
 FUNC_1(" = %d", VAR_19);
 return VAR_19;
}
