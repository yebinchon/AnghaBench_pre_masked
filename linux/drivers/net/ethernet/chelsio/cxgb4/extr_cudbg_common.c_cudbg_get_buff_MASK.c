
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cudbg_init {scalar_t__ compress_type; scalar_t__ compress_buff_size; scalar_t__ compress_buff; } ;
struct cudbg_buffer {scalar_t__ offset; scalar_t__ size; char* data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct cudbg_init *VAR_2,
     struct cudbg_buffer *VAR_3, u32 VAR_4,
     struct cudbg_buffer *VAR_5)
{
 u32 VAR_6;

 VAR_6 = VAR_3->offset;
 if (VAR_6 + VAR_4 > VAR_3->size)
  return VAR_1;

 if (VAR_2->compress_type != VAR_0) {
  if (VAR_4 > VAR_2->compress_buff_size)
   return VAR_1;

  VAR_5->data = (char *)VAR_2->compress_buff;
  VAR_5->offset = 0;
  VAR_5->size = VAR_4;
  return 0;
 }

 VAR_5->data = (char *)VAR_3->data + VAR_6;
 VAR_5->offset = VAR_6;
 VAR_5->size = VAR_4;
 return 0;
}
