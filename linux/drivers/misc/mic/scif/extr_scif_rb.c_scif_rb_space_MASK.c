
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scif_rb {int size; int current_read_offset; int current_write_offset; int * read_ptr; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;

u32 FUNC_2(struct scif_rb *VAR_0)
{
 VAR_0->current_read_offset = *VAR_0->read_ptr;





 FUNC_0();
 return FUNC_1(VAR_0->current_write_offset,
      VAR_0->current_read_offset, VAR_0->size);
}
