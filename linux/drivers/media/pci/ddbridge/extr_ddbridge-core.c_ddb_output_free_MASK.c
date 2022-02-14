
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ddb_output {TYPE_1__* dma; } ;
typedef int s32 ;
struct TYPE_2__ {int stat; int cbuf; int num; int size; int coff; } ;



__attribute__((used)) static u32 FUNC_0(struct ddb_output *VAR_0)
{
 u32 VAR_1, VAR_2, VAR_3 = VAR_0->dma->stat;
 s32 VAR_4;

 VAR_1 = (VAR_3 >> 11) & 0x1f;
 VAR_2 = (VAR_3 & 0x7ff) << 7;

 if (VAR_0->dma->cbuf != VAR_1) {
  if ((((VAR_0->dma->cbuf + 1) % VAR_0->dma->num) == VAR_1) &&
      (VAR_0->dma->size - VAR_0->dma->coff <= (2 * 188)))
   return 0;
  return 188;
 }
 VAR_4 = VAR_2 - VAR_0->dma->coff;
 if (VAR_4 <= 0 || VAR_4 > (2 * 188))
  return 188;
 return 0;
}
