
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct scif_rb {int current_read_offset; void* rb_base; } ;


 scalar_t__ FUNC_0 (struct scif_rb*,scalar_t__) ;

__attribute__((used)) static void *FUNC_1(struct scif_rb *VAR_0, u32 VAR_1)
{
 void *VAR_2 = ((void*)0);

 if (FUNC_0(VAR_0, VAR_1) >= VAR_1)
  VAR_2 = VAR_0->rb_base + VAR_0->current_read_offset;
 return VAR_2;
}
