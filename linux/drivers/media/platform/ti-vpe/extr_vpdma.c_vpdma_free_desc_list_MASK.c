
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpdma_desc_list {int * next; int buf; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct vpdma_desc_list *VAR_0)
{
 FUNC_0(&VAR_0->buf);

 VAR_0->next = ((void*)0);
}
