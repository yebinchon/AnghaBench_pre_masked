
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scif_rb {int current_read_offset; int size; } ;


 int FUNC_0 (struct scif_rb*,void*,void*,int) ;
 void* FUNC_1 (struct scif_rb*,int) ;

u32 FUNC_2(struct scif_rb *VAR_0, void *VAR_1, u32 VAR_2)
{
 void *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (VAR_3) {
  u32 VAR_5 =
   (VAR_0->current_read_offset + VAR_2) & (VAR_0->size - 1);

  VAR_4 = VAR_2;
  VAR_0->current_read_offset = VAR_5;
  FUNC_0(VAR_0, VAR_3, VAR_1, VAR_2);
 }
 return VAR_4;
}
