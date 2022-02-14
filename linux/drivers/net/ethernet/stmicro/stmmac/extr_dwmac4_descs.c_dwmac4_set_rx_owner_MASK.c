
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_desc {int des3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct dma_desc *VAR_3, int VAR_4)
{
 VAR_3->des3 = FUNC_0(VAR_2 | VAR_0);

 if (!VAR_4)
  VAR_3->des3 |= FUNC_0(VAR_1);
}
