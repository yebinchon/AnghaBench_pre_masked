
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_desc {int des1; int des3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void *VAR_4, void *VAR_5,
       u32 VAR_6)
{
 struct dma_desc *VAR_7 = (struct dma_desc *)VAR_4;
 int VAR_8 = -VAR_1;


 if (FUNC_2(FUNC_1(VAR_7->des3) & VAR_3)) {
  if (FUNC_2(FUNC_1(VAR_7->des1) & VAR_2)) {
   int VAR_9 = 0;


   do {
    VAR_8 = FUNC_0(VAR_5);
    if (VAR_8 < 0)
     goto exit;
    VAR_9++;

   } while ((VAR_8 == 1) && (VAR_9 < 10));

   if (VAR_9 == 10)
    VAR_8 = -VAR_0;
  }
 }
exit:
 if (FUNC_2(VAR_8 == 0))
  return 1;

 return 0;
}
