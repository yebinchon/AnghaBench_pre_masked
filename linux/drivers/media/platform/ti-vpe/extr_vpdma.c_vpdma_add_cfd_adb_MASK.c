
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {void* addr; int size; } ;
struct vpdma_desc_list {struct vpdma_cfd* next; TYPE_1__ buf; } ;
struct vpdma_cfd {int ctl_payload_len; scalar_t__ payload_addr; scalar_t__ w1; scalar_t__ w0; } ;
struct vpdma_buf {unsigned int size; unsigned int dma_addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ,int,unsigned int) ;
 int FUNC_3 (struct vpdma_cfd*) ;

void FUNC_4(struct vpdma_desc_list *VAR_4, int VAR_5,
  struct vpdma_buf *VAR_6)
{
 struct vpdma_cfd *VAR_7;
 unsigned int VAR_8 = VAR_6->size;

 FUNC_1(VAR_8 & VAR_2);
 FUNC_1(VAR_6->dma_addr & VAR_3);

 VAR_7 = VAR_4->next;
 FUNC_0((void *)(VAR_7 + 1) > (VAR_4->buf.addr + VAR_4->buf.size));

 VAR_7->w0 = 0;
 VAR_7->w1 = 0;
 VAR_7->payload_addr = (u32) VAR_6->dma_addr;
 VAR_7->ctl_payload_len = FUNC_2(VAR_1, VAR_0,
    VAR_5, VAR_8 >> 4);

 VAR_4->next = VAR_7 + 1;

 FUNC_3(VAR_7);
}
