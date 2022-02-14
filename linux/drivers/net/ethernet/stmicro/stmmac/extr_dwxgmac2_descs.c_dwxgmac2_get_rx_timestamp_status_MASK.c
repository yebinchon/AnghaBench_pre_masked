
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_desc {int des3; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (void*) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, void *VAR_3,
         u32 VAR_4)
{
 struct dma_desc *VAR_5 = (struct dma_desc *)VAR_2;
 unsigned int VAR_6 = FUNC_1(VAR_5->des3);
 int VAR_7 = -VAR_0;

 if (FUNC_2(VAR_6 & VAR_1))
  VAR_7 = FUNC_0(VAR_3);

 return !VAR_7;
}
