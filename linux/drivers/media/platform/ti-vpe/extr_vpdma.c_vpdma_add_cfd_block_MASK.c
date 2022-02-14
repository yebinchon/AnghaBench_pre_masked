
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {void* addr; int size; } ;
struct vpdma_desc_list {struct vpdma_cfd* next; TYPE_1__ buf; } ;
struct vpdma_cfd {int block_len; int ctl_payload_len; void* payload_addr; void* dest_addr_offset; } ;
struct vpdma_buf {int size; int dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (struct vpdma_cfd*) ;

void FUNC_3(struct vpdma_desc_list *VAR_3, int VAR_4,
  struct vpdma_buf *VAR_5, u32 VAR_6)
{
 struct vpdma_cfd *VAR_7;
 int VAR_8 = VAR_5->size;

 FUNC_0(VAR_5->dma_addr & VAR_2);

 VAR_7 = VAR_3->next;
 FUNC_0((void *)(VAR_7 + 1) > (VAR_3->buf.addr + VAR_3->buf.size));

 VAR_7->dest_addr_offset = VAR_6;
 VAR_7->block_len = VAR_8;
 VAR_7->payload_addr = (u32) VAR_5->dma_addr;
 VAR_7->ctl_payload_len = FUNC_1(VAR_1, VAR_0,
    VAR_4, VAR_8 >> 4);

 VAR_3->next = VAR_7 + 1;

 FUNC_2(VAR_7);
}
