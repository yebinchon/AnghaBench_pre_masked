
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_desc {int des3; int des2; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct dma_desc *VAR_7, int VAR_8, int VAR_9,
          bool VAR_10, int VAR_11, bool VAR_12,
          bool VAR_13, unsigned int VAR_14)
{
 unsigned int VAR_15 = FUNC_2(VAR_7->des3);

 VAR_7->des2 |= FUNC_0(VAR_9 & VAR_0);

 VAR_15 |= VAR_14 & VAR_5;
 if (VAR_8)
  VAR_15 |= VAR_2;
 else
  VAR_15 &= ~VAR_2;

 if (FUNC_3(VAR_10))
  VAR_15 |= (VAR_6 << VAR_1);
 else
  VAR_15 &= ~(VAR_6 << VAR_1);

 if (VAR_13)
  VAR_15 |= VAR_3;
 else
  VAR_15 &= ~VAR_3;


 if (VAR_12)
  VAR_15 |= VAR_4;

 if (VAR_8 && VAR_12)




  FUNC_1();

 VAR_7->des3 = FUNC_0(VAR_15);
}
