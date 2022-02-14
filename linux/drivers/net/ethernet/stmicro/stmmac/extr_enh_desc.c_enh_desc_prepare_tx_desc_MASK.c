
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_desc {int des0; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct dma_desc*,int) ;
 int FUNC_3 (struct dma_desc*,int) ;
 unsigned int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct dma_desc *VAR_6, int VAR_7, int VAR_8,
         bool VAR_9, int VAR_10, bool VAR_11,
         bool VAR_12, unsigned int VAR_13)
{
 unsigned int VAR_14 = FUNC_4(VAR_6->des0);

 if (VAR_10 == VAR_4)
  FUNC_2(VAR_6, VAR_8);
 else
  FUNC_3(VAR_6, VAR_8);

 if (VAR_7)
  VAR_14 |= VAR_1;
 else
  VAR_14 &= ~VAR_1;

 if (FUNC_5(VAR_9))
  VAR_14 |= (VAR_5 << VAR_0);
 else
  VAR_14 &= ~(VAR_5 << VAR_0);

 if (VAR_12)
  VAR_14 |= VAR_2;


 if (VAR_11)
  VAR_14 |= VAR_3;

 if (VAR_7 && VAR_11)




  FUNC_1();

 VAR_6->des0 = FUNC_0(VAR_14);
}
