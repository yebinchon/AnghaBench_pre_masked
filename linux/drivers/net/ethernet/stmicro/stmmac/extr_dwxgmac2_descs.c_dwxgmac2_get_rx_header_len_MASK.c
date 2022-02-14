
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_desc {int des2; int des3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dma_desc *VAR_2, unsigned int *VAR_3)
{
 if (FUNC_0(VAR_2->des3) & VAR_1)
  *VAR_3 = FUNC_0(VAR_2->des2) & VAR_0;
 return 0;
}
