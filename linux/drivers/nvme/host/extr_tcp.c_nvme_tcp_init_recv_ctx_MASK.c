
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_tcp_rsp_pdu {int dummy; } ;
struct nvme_tcp_queue {int data_remaining; scalar_t__ ddgst_remaining; scalar_t__ pdu_offset; scalar_t__ pdu_remaining; } ;


 scalar_t__ FUNC_0 (struct nvme_tcp_queue*) ;

__attribute__((used)) static void FUNC_1(struct nvme_tcp_queue *VAR_0)
{
 VAR_0->pdu_remaining = sizeof(struct nvme_tcp_rsp_pdu) +
    FUNC_0(VAR_0);
 VAR_0->pdu_offset = 0;
 VAR_0->data_remaining = -1;
 VAR_0->ddgst_remaining = 0;
}
