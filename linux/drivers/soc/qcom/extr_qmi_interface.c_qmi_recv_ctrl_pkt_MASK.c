
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int port; int node; } ;
struct TYPE_3__ {int port; int node; int instance; int service; } ;
struct qrtr_ctrl_pkt {TYPE_2__ client; TYPE_1__ server; int cmd; } ;
struct qmi_handle {int dummy; } ;






 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct qmi_handle*,int) ;
 int FUNC_3 (struct qmi_handle*,int,int) ;
 int FUNC_4 (struct qmi_handle*,int,int) ;
 int FUNC_5 (struct qmi_handle*,int,int,int,int) ;

__attribute__((used)) static void FUNC_6(struct qmi_handle *VAR_0,
         const void *VAR_1, size_t VAR_2)
{
 const struct qrtr_ctrl_pkt *VAR_3 = VAR_1;

 if (VAR_2 < sizeof(struct qrtr_ctrl_pkt)) {
  FUNC_1("ignoring short control packet\n");
  return;
 }

 switch (FUNC_0(VAR_3->cmd)) {
 case 131:
  FUNC_2(VAR_0, FUNC_0(VAR_3->client.node));
  break;
 case 128:
  FUNC_5(VAR_0,
        FUNC_0(VAR_3->server.service),
        FUNC_0(VAR_3->server.instance),
        FUNC_0(VAR_3->server.node),
        FUNC_0(VAR_3->server.port));
  break;
 case 129:
  FUNC_4(VAR_0,
        FUNC_0(VAR_3->server.node),
        FUNC_0(VAR_3->server.port));
  break;
 case 130:
  FUNC_3(VAR_0,
        FUNC_0(VAR_3->client.node),
        FUNC_0(VAR_3->client.port));
  break;
 }
}
