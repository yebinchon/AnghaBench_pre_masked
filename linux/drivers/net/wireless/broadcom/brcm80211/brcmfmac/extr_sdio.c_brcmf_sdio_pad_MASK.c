
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcmf_sdio {int roundup; int blocksize; int head_align; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct brcmf_sdio *VAR_2, u16 *VAR_3, u16 *VAR_4)
{
 if (VAR_2->roundup && VAR_2->blocksize && *VAR_4 > VAR_2->blocksize) {
  *VAR_3 = VAR_2->blocksize - (*VAR_4 % VAR_2->blocksize);
  if (*VAR_3 <= VAR_2->roundup && *VAR_3 < VAR_2->blocksize &&
      *VAR_4 + *VAR_3 + VAR_0 < VAR_1)
   *VAR_4 += *VAR_3;
 } else if (*VAR_4 % VAR_2->head_align) {
  *VAR_4 += VAR_2->head_align - (*VAR_4 % VAR_2->head_align);
 }
}
