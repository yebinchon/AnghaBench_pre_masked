
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_msg_hdr {size_t length; int msg_complete; scalar_t__ internal; scalar_t__ reserved; scalar_t__ dma_ring; scalar_t__ me_addr; scalar_t__ host_addr; } ;



__attribute__((used)) static inline void FUNC_0(struct mei_msg_hdr *VAR_0, size_t VAR_1)
{
 VAR_0->host_addr = 0;
 VAR_0->me_addr = 0;
 VAR_0->length = VAR_1;
 VAR_0->msg_complete = 1;
 VAR_0->dma_ring = 0;
 VAR_0->reserved = 0;
 VAR_0->internal = 0;
}
