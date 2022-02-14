
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_desc {int des0; int des1; int des3; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void *VAR_5)
{
 struct dma_desc *VAR_6 = (struct dma_desc *)VAR_5;
 unsigned int VAR_7 = FUNC_1(VAR_6->des3);
 bool VAR_8, VAR_9;

 FUNC_0();

 VAR_8 = !(VAR_7 & VAR_2) && (VAR_7 & VAR_1);
 VAR_9 = !(VAR_7 & VAR_4) && (VAR_7 & VAR_3);

 if (FUNC_2(VAR_8 && VAR_9)) {
  if ((VAR_6->des0 == 0xffffffff) && (VAR_6->des1 == 0xffffffff))
   return -VAR_0;
  return 0;
 }

 return -VAR_0;
}
