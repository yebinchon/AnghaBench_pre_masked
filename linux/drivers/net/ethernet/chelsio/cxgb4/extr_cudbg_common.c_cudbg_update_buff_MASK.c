
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_buffer {scalar_t__ size; int offset; } ;



void FUNC_0(struct cudbg_buffer *VAR_0,
         struct cudbg_buffer *VAR_1)
{



 VAR_1->offset += VAR_0->size;
}
