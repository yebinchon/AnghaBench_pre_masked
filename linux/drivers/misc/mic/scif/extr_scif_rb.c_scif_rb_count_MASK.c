
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct scif_rb {int size; int current_read_offset; int current_write_offset; int * write_ptr; } ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;

u32 FUNC_2(struct scif_rb *VAR_0, u32 VAR_1)
{
 if (FUNC_0(VAR_0->current_write_offset,
        VAR_0->current_read_offset,
        VAR_0->size) < VAR_1) {
  VAR_0->current_write_offset = *VAR_0->write_ptr;





  FUNC_1();
 }
 return FUNC_0(VAR_0->current_write_offset,
    VAR_0->current_read_offset,
    VAR_0->size);
}
