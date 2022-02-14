
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_tcp_queue {int left; int rcv_state; int * cmd; scalar_t__ offset; } ;
struct nvme_tcp_hdr {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct nvmet_tcp_queue *VAR_1)
{
 VAR_1->offset = 0;
 VAR_1->left = sizeof(struct nvme_tcp_hdr);
 VAR_1->cmd = ((void*)0);
 VAR_1->rcv_state = VAR_0;
}
