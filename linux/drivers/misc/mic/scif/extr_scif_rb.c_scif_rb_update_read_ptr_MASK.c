
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scif_rb {int * read_ptr; int current_read_offset; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;

void FUNC_2(struct scif_rb *VAR_0)
{
 u32 VAR_1;

 VAR_1 = VAR_0->current_read_offset;






 FUNC_1();
 FUNC_0(*VAR_0->read_ptr, VAR_1);
}
