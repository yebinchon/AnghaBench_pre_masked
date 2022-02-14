
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_init {scalar_t__ compress_type; int compress_buff_size; int compress_buff; } ;
struct cudbg_buffer {scalar_t__ size; scalar_t__ offset; int * data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(struct cudbg_init *VAR_1,
      struct cudbg_buffer *VAR_2)
{

 if (VAR_1->compress_type != VAR_0)
  FUNC_0(VAR_1->compress_buff, 0,
         VAR_1->compress_buff_size);

 VAR_2->data = ((void*)0);
 VAR_2->offset = 0;
 VAR_2->size = 0;
}
