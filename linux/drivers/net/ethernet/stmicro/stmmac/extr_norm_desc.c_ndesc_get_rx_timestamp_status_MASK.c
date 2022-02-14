
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_desc {int des3; int des2; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1, u32 VAR_2)
{
 struct dma_desc *VAR_3 = (struct dma_desc *)VAR_0;

 if ((FUNC_0(VAR_3->des2) == 0xffffffff) &&
     (FUNC_0(VAR_3->des3) == 0xffffffff))

  return 0;
 else
  return 1;
}
