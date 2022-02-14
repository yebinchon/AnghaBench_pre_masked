
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scif_rb {int current_write_offset; int size; void* rb_base; } ;


 int VAR_0 ;
 int FUNC_0 (struct scif_rb*,void*,void*,int) ;
 int FUNC_1 (struct scif_rb*) ;

int FUNC_2(struct scif_rb *VAR_1, void *VAR_2, u32 VAR_3)
{
 void *VAR_4;

 if (FUNC_1(VAR_1) < VAR_3)
  return -VAR_0;
 VAR_4 = VAR_1->rb_base + VAR_1->current_write_offset;
 FUNC_0(VAR_1, VAR_4, VAR_2, VAR_3);




 VAR_1->current_write_offset =
  (VAR_1->current_write_offset + VAR_3) & (VAR_1->size - 1);
 return 0;
}
