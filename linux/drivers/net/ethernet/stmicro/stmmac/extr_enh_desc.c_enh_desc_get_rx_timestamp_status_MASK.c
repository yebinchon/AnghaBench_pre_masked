
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int des0; } ;
struct dma_extended_desc {TYPE_1__ basic; } ;
struct dma_desc {int des3; int des2; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, void *VAR_2,
         u32 VAR_3)
{
 if (VAR_3) {
  struct dma_extended_desc *VAR_4 = (struct dma_extended_desc *)VAR_1;
  return (FUNC_0(VAR_4->basic.des0) & VAR_0) >> 7;
 } else {
  struct dma_desc *VAR_5 = (struct dma_desc *)VAR_1;
  if ((FUNC_0(VAR_5->des2) == 0xffffffff) &&
      (FUNC_0(VAR_5->des3) == 0xffffffff))

   return 0;
  else
   return 1;
 }
}
