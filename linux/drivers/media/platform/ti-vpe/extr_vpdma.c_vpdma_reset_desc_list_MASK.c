
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct vpdma_desc_list {TYPE_1__ buf; int next; } ;



void FUNC_0(struct vpdma_desc_list *VAR_0)
{
 VAR_0->next = VAR_0->buf.addr;
}
