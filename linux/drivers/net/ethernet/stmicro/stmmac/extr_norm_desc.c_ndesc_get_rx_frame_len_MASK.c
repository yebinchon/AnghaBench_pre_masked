
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_desc {int des0; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dma_desc *VAR_3, int VAR_4)
{
 unsigned int VAR_5 = 0;







 if (VAR_4 == VAR_2)
  VAR_5 = 2;

 return (((FUNC_0(VAR_3->des0) & VAR_0)
    >> VAR_1) -
  VAR_5);

}
