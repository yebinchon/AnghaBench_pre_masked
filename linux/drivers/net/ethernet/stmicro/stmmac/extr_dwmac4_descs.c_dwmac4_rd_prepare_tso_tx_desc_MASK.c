
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_desc {int des3; int des2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dma_desc *VAR_10, int VAR_11,
       int VAR_12, int VAR_13, bool VAR_14,
       bool VAR_15, unsigned int VAR_16,
       unsigned int VAR_17)
{
 unsigned int VAR_18 = FUNC_2(VAR_10->des3);

 if (VAR_12)
  VAR_10->des2 |= FUNC_0((VAR_12 & VAR_0));

 if (VAR_13)
  VAR_10->des2 |= FUNC_0((VAR_13 << VAR_2)
       & VAR_1);

 if (VAR_11) {
  VAR_18 |= VAR_3 |
    VAR_9 |
    ((VAR_16 << VAR_4) &
     VAR_7) |
    ((VAR_17 & VAR_8));
 } else {
  VAR_18 &= ~VAR_3;
 }

 if (VAR_15)
  VAR_18 |= VAR_5;
 else
  VAR_18 &= ~VAR_5;


 if (VAR_14)
  VAR_18 |= VAR_6;

 if (VAR_11 && VAR_14)




  FUNC_1();

 VAR_10->des3 = FUNC_0(VAR_18);
}
