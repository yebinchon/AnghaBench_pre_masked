
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_desc {int des0; int des1; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct dma_desc*,int) ;
 int FUNC_4 (struct dma_desc*,int) ;

__attribute__((used)) static void FUNC_5(struct dma_desc *VAR_6, int VAR_7, int VAR_8,
      bool VAR_9, int VAR_10, bool VAR_11,
      bool VAR_12, unsigned int VAR_13)
{
 unsigned int VAR_14 = FUNC_1(VAR_6->des1);

 if (VAR_7)
  VAR_14 |= VAR_3;
 else
  VAR_14 &= ~VAR_3;

 if (FUNC_2(VAR_9))
  VAR_14 |= (VAR_5) << VAR_2;
 else
  VAR_14 &= ~(VAR_5 << VAR_2);

 if (VAR_12)
  VAR_14 |= VAR_4;

 VAR_6->des1 = FUNC_0(VAR_14);

 if (VAR_10 == VAR_0)
  FUNC_3(VAR_6, VAR_8);
 else
  FUNC_4(VAR_6, VAR_8);

 if (VAR_11)
  VAR_6->des0 |= FUNC_0(VAR_1);
}
