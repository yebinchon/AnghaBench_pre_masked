
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* addr; int size; } ;
struct vpdma_desc_list {struct vpdma_ctd* next; TYPE_1__ buf; } ;
struct vpdma_ctd {int type_source_ctl; scalar_t__ w2; scalar_t__ w1; scalar_t__ w0; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct vpdma_ctd*) ;

void FUNC_3(struct vpdma_desc_list *VAR_1,
  int VAR_2)
{
 struct vpdma_ctd *VAR_3;

 VAR_3 = VAR_1->next;
 FUNC_0((void *)(VAR_3 + 1) > (VAR_1->buf.addr + VAR_1->buf.size));

 VAR_3->w0 = 0;
 VAR_3->w1 = 0;
 VAR_3->w2 = 0;
 VAR_3->type_source_ctl = FUNC_1(VAR_2,
    VAR_0);

 VAR_1->next = VAR_3 + 1;

 FUNC_2(VAR_3);
}
