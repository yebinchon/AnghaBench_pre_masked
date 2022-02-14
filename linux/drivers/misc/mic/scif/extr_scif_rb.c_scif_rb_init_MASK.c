
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct scif_rb {int size; void** read_ptr; void** write_ptr; void* current_write_offset; void* current_read_offset; void* rb_base; } ;



void FUNC_0(struct scif_rb *VAR_0, u32 *VAR_1, u32 *VAR_2,
    void *VAR_3, u8 VAR_4)
{
 VAR_0->rb_base = VAR_3;
 VAR_0->size = (1 << VAR_4);
 VAR_0->read_ptr = VAR_1;
 VAR_0->write_ptr = VAR_2;
 VAR_0->current_read_offset = *VAR_1;
 VAR_0->current_write_offset = *VAR_2;
}
