
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_desc {int des1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct dma_desc *VAR_5, int VAR_6,
        int VAR_7)
{
 if (VAR_7 == VAR_0)
  VAR_5->des1 |= FUNC_0((VAR_1
    << VAR_3)
      & VAR_2);

 if (VAR_6)
  VAR_5->des1 |= FUNC_0(VAR_4);
}
