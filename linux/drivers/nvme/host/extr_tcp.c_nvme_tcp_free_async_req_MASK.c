
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_tcp_request {int pdu; } ;
struct nvme_tcp_ctrl {struct nvme_tcp_request async_req; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct nvme_tcp_ctrl *VAR_0)
{
 struct nvme_tcp_request *VAR_1 = &VAR_0->async_req;

 FUNC_0(VAR_1->pdu);
}
