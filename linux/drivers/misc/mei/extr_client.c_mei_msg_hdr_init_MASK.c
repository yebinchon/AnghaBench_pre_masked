
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_msg_hdr {int internal; scalar_t__ dma_ring; scalar_t__ msg_complete; scalar_t__ reserved; scalar_t__ length; int me_addr; int host_addr; } ;
struct mei_cl_cb {int internal; int cl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mei_msg_hdr *VAR_0, struct mei_cl_cb *VAR_1)
{
 VAR_0->host_addr = FUNC_0(VAR_1->cl);
 VAR_0->me_addr = FUNC_1(VAR_1->cl);
 VAR_0->length = 0;
 VAR_0->reserved = 0;
 VAR_0->msg_complete = 0;
 VAR_0->dma_ring = 0;
 VAR_0->internal = VAR_1->internal;
}
