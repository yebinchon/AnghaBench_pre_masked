
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef scalar_t__ u32 ;
struct dma_extended_desc {int des7; int des6; } ;
struct dma_desc {int des3; int des2; } ;


 unsigned long long FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, u32 VAR_1, u64 *VAR_2)
{
 u64 VAR_3;

 if (VAR_1) {
  struct dma_extended_desc *VAR_4 = (struct dma_extended_desc *)VAR_0;
  VAR_3 = FUNC_0(VAR_4->des6);

  VAR_3 += FUNC_0(VAR_4->des7) * 1000000000ULL;
 } else {
  struct dma_desc *VAR_5 = (struct dma_desc *)VAR_0;
  VAR_3 = FUNC_0(VAR_5->des2);
  VAR_3 += FUNC_0(VAR_5->des3) * 1000000000ULL;
 }

 *VAR_2 = VAR_3;
}
