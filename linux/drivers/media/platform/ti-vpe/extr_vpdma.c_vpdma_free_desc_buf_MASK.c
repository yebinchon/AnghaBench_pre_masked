
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpdma_buf {scalar_t__ size; int * addr; int mapped; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct vpdma_buf *VAR_0)
{
 FUNC_0(VAR_0->mapped);
 FUNC_1(VAR_0->addr);
 VAR_0->addr = ((void*)0);
 VAR_0->size = 0;
}
