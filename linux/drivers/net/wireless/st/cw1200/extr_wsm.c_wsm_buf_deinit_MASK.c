
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_buf {int * end; int data; int begin; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct wsm_buf *VAR_0)
{
 FUNC_0(VAR_0->begin);
 VAR_0->begin = VAR_0->data = *(VAR_0->end = ((void*)0));
}
