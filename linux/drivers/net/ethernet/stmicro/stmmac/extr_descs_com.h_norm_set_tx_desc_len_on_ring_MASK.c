
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_desc {int des1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct dma_desc *VAR_4, int VAR_5)
{
 if (FUNC_1(VAR_5 > VAR_0)) {
  unsigned int VAR_6 = (VAR_0 - 1)
     & VAR_1;
  VAR_4->des1 |= FUNC_0((((VAR_5 - VAR_6)
     << VAR_3)
    & VAR_2) | VAR_6);
 } else
  VAR_4->des1 |= FUNC_0((VAR_5 & VAR_1));
}
