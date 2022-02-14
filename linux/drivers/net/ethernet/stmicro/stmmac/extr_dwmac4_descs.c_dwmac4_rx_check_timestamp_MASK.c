
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct dma_desc {int des3; int des1; int des0; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void *VAR_4)
{
 struct dma_desc *VAR_5 = (struct dma_desc *)VAR_4;
 unsigned int VAR_6 = FUNC_0(VAR_5->des0);
 unsigned int VAR_7 = FUNC_0(VAR_5->des1);
 unsigned int VAR_8 = FUNC_0(VAR_5->des3);
 u32 VAR_9, VAR_10;
 int VAR_11 = 1;

 VAR_9 = VAR_8 & VAR_3;
 VAR_10 = ((VAR_8 & VAR_1)
  >> VAR_2);

 if (FUNC_1(!VAR_9 && VAR_10)) {
  if ((VAR_6 == 0xffffffff) && (VAR_7 == 0xffffffff))

   VAR_11 = -VAR_0;
  else

   VAR_11 = 0;
 }


 return VAR_11;
}
