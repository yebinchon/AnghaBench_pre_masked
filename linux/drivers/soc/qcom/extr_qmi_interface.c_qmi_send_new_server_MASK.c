
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_qrtr {int sq_node; int sq_port; int sq_family; } ;
struct TYPE_3__ {void* port; void* node; void* instance; void* service; } ;
struct qrtr_ctrl_pkt {TYPE_1__ server; void* cmd; } ;
struct qmi_service {int service; int version; int instance; } ;
struct TYPE_4__ {int sq_node; int sq_port; int sq_family; } ;
struct qmi_handle {int sock_lock; scalar_t__ sock; TYPE_2__ sq; } ;
struct msghdr {int msg_namelen; struct sockaddr_qrtr* msg_name; } ;
struct kvec {int member_1; struct qrtr_ctrl_pkt* member_0; } ;
typedef int sq ;
typedef int pkt ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,struct msghdr*,struct kvec*,int,int) ;
 int FUNC_2 (struct qrtr_ctrl_pkt*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void FUNC_6(struct qmi_handle *VAR_2, struct qmi_service *VAR_3)
{
 struct qrtr_ctrl_pkt VAR_4;
 struct sockaddr_qrtr VAR_5;
 struct msghdr VAR_6 = { };
 struct kvec VAR_7 = { &VAR_4, sizeof(VAR_4) };
 int VAR_8;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.cmd = FUNC_0(VAR_1);
 VAR_4.server.service = FUNC_0(VAR_3->service);
 VAR_4.server.instance = FUNC_0(VAR_3->version | VAR_3->instance << 8);
 VAR_4.server.node = FUNC_0(VAR_2->sq.sq_node);
 VAR_4.server.port = FUNC_0(VAR_2->sq.sq_port);

 VAR_5.sq_family = VAR_2->sq.sq_family;
 VAR_5.sq_node = VAR_2->sq.sq_node;
 VAR_5.sq_port = VAR_0;

 VAR_6.msg_name = &VAR_5;
 VAR_6.msg_namelen = sizeof(VAR_5);

 FUNC_3(&VAR_2->sock_lock);
 if (VAR_2->sock) {
  VAR_8 = FUNC_1(VAR_2->sock, &VAR_6, &VAR_7, 1, sizeof(VAR_4));
  if (VAR_8 < 0)
   FUNC_5("send service registration failed: %d\n", VAR_8);
 }
 FUNC_4(&VAR_2->sock_lock);
}
