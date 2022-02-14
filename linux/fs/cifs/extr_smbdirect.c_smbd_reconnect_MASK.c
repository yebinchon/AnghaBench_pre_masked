
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TCP_Server_Info {TYPE_1__* smbd_conn; int dstaddr; } ;
struct TYPE_2__ {scalar_t__ transport_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct TCP_Server_Info*) ;
 TYPE_1__* FUNC_2 (struct TCP_Server_Info*,struct sockaddr*) ;

int FUNC_3(struct TCP_Server_Info *VAR_3)
{
 FUNC_0(VAR_1, "reconnecting rdma session\n");

 if (!VAR_3->smbd_conn) {
  FUNC_0(VAR_1, "rdma session already destroyed\n");
  goto create_conn;
 }





 if (VAR_3->smbd_conn->transport_status == VAR_2) {
  FUNC_0(VAR_1, "disconnecting transport\n");
  FUNC_1(VAR_3);
 }

create_conn:
 FUNC_0(VAR_1, "creating rdma session\n");
 VAR_3->smbd_conn = FUNC_2(
  VAR_3, (struct sockaddr *) &VAR_3->dstaddr);
 FUNC_0(VAR_1, "created rdma session info=%p\n",
  VAR_3->smbd_conn);

 return VAR_3->smbd_conn ? 0 : -VAR_0;
}
