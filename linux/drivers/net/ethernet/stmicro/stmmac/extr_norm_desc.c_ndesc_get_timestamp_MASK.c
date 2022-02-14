
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef int u32 ;
struct dma_desc {int des3; int des2; } ;


 unsigned long long FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, u32 VAR_1, u64 *VAR_2)
{
 struct dma_desc *VAR_3 = (struct dma_desc *)VAR_0;
 u64 VAR_4;

 VAR_4 = FUNC_0(VAR_3->des2);

 VAR_4 += FUNC_0(VAR_3->des3) * 1000000000ULL;

 *VAR_2 = VAR_4;
}
