
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct iscsi_np {int np_network_transport; struct socket* np_socket; int np_sockaddr; void* np_ip_proto; void* np_sock_type; } ;
typedef int opt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct socket*,struct sockaddr*,int) ;
 int FUNC_1 (struct socket*,int) ;
 int FUNC_2 (struct socket*,void*,int ,char*,int) ;
 int FUNC_3 (int *,struct sockaddr_storage*,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (scalar_t__,void*,void*,struct socket**) ;
 int FUNC_6 (struct socket*) ;

int FUNC_7(
 struct iscsi_np *VAR_12,
 struct sockaddr_storage *VAR_13)
{
 struct socket *VAR_14 = ((void*)0);
 int VAR_15 = VAR_6, VAR_16, VAR_17 = 0, VAR_18;

 switch (VAR_12->np_network_transport) {
 case 128:
  VAR_12->np_ip_proto = VAR_4;
  VAR_12->np_sock_type = VAR_8;
  break;
 case 130:
  VAR_12->np_ip_proto = VAR_3;
  VAR_12->np_sock_type = VAR_8;
  break;
 case 129:
  VAR_12->np_ip_proto = VAR_3;
  VAR_12->np_sock_type = VAR_7;
  break;
 default:
  FUNC_4("Unsupported network_transport: %d\n",
    VAR_12->np_network_transport);
  return -VAR_1;
 }

 VAR_16 = FUNC_5(VAR_13->ss_family, VAR_12->np_sock_type,
   VAR_12->np_ip_proto, &VAR_14);
 if (VAR_16 < 0) {
  FUNC_4("sock_create() failed.\n");
  return VAR_16;
 }
 VAR_12->np_socket = VAR_14;




 FUNC_3(&VAR_12->np_sockaddr, VAR_13,
   sizeof(struct sockaddr_storage));

 if (VAR_13->ss_family == VAR_0)
  VAR_18 = sizeof(struct sockaddr_in6);
 else
  VAR_18 = sizeof(struct sockaddr_in);




 VAR_17 = 1;
 if (VAR_12->np_network_transport == 128) {
  VAR_16 = FUNC_2(VAR_14, VAR_4, VAR_11,
    (char *)&VAR_17, sizeof(VAR_17));
  if (VAR_16 < 0) {
   FUNC_4("kernel_setsockopt() for TCP_NODELAY"
    " failed: %d\n", VAR_16);
   goto fail;
  }
 }


 VAR_16 = FUNC_2(VAR_14, VAR_9, VAR_10,
   (char *)&VAR_17, sizeof(VAR_17));
 if (VAR_16 < 0) {
  FUNC_4("kernel_setsockopt() for SO_REUSEADDR"
   " failed\n");
  goto fail;
 }

 VAR_16 = FUNC_2(VAR_14, VAR_2, VAR_5,
   (char *)&VAR_17, sizeof(VAR_17));
 if (VAR_16 < 0) {
  FUNC_4("kernel_setsockopt() for IP_FREEBIND"
   " failed\n");
  goto fail;
 }

 VAR_16 = FUNC_0(VAR_14, (struct sockaddr *)&VAR_12->np_sockaddr, VAR_18);
 if (VAR_16 < 0) {
  FUNC_4("kernel_bind() failed: %d\n", VAR_16);
  goto fail;
 }

 VAR_16 = FUNC_1(VAR_14, VAR_15);
 if (VAR_16 != 0) {
  FUNC_4("kernel_listen() failed: %d\n", VAR_16);
  goto fail;
 }

 return 0;
fail:
 VAR_12->np_socket = ((void*)0);
 FUNC_6(VAR_14);
 return VAR_16;
}
