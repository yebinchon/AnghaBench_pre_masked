
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;

void FUNC_1(void)
{
 u32 VAR_3 = VAR_2 % VAR_1;


 if (VAR_3 < VAR_0) {
  FUNC_0("dma_debug_entry pool grown to %u (%u00%%)\n",
   VAR_2,
   (VAR_2 / VAR_1));
 }
}
