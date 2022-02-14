
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* addr; int size; } ;
struct vpdma_desc_list {struct vpdma_ctd* next; TYPE_1__ buf; } ;
struct vpdma_ctd {int type_source_ctl; scalar_t__ w2; scalar_t__ w1; scalar_t__ w0; } ;
typedef enum vpdma_channel { ____Placeholder_vpdma_channel } vpdma_channel ;
struct TYPE_4__ {int num; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct vpdma_ctd*) ;

void FUNC_3(struct vpdma_desc_list *VAR_2,
  enum vpdma_channel VAR_3)
{
 struct vpdma_ctd *VAR_4;

 VAR_4 = VAR_2->next;
 FUNC_0((void *)(VAR_4 + 1) > (VAR_2->buf.addr + VAR_2->buf.size));

 VAR_4->w0 = 0;
 VAR_4->w1 = 0;
 VAR_4->w2 = 0;
 VAR_4->type_source_ctl = FUNC_1(VAR_1[VAR_3].num,
    VAR_0);

 VAR_2->next = VAR_4 + 1;

 FUNC_2(VAR_4);
}
