
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_tcp_cmd {int cmd_pdu; int rsp_pdu; int data_pdu; int r2t_pdu; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct nvmet_tcp_cmd *VAR_0)
{
 FUNC_0(VAR_0->r2t_pdu);
 FUNC_0(VAR_0->data_pdu);
 FUNC_0(VAR_0->rsp_pdu);
 FUNC_0(VAR_0->cmd_pdu);
}
