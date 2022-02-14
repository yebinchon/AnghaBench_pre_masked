
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_desc {int des1; int des0; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct dma_desc*,int) ;
 int FUNC_3 (struct dma_desc*,int,int) ;

__attribute__((used)) static void FUNC_4(struct dma_desc *VAR_5, int VAR_6, int VAR_7,
          int VAR_8, int VAR_9)
{
 int VAR_10;

 VAR_5->des0 |= FUNC_0(VAR_1);

 VAR_10 = FUNC_1(VAR_9, VAR_0 - 1);
 VAR_5->des1 |= FUNC_0(VAR_10 & VAR_2);

 if (VAR_7 == VAR_4)
  FUNC_2(VAR_5, VAR_8);
 else
  FUNC_3(VAR_5, VAR_8, VAR_9);

 if (VAR_6)
  VAR_5->des1 |= FUNC_0(VAR_3);
}
