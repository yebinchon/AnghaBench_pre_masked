
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int lpt_lebs; scalar_t__ lpt_first; scalar_t__ nhead_lnum; scalar_t__ leb_size; scalar_t__ nhead_offs; int lpt_sz; TYPE_1__* ltab; } ;
struct TYPE_2__ {scalar_t__ free; scalar_t__ dirty; } ;



__attribute__((used)) static int FUNC_0(struct ubifs_info *VAR_0)
{
 long long VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->lpt_lebs; VAR_2++) {
  if (VAR_2 + VAR_0->lpt_first == VAR_0->nhead_lnum)
   VAR_1 += VAR_0->leb_size - VAR_0->nhead_offs;
  else if (VAR_0->ltab[VAR_2].free == VAR_0->leb_size)
   VAR_1 += VAR_0->leb_size;
  else if (VAR_0->ltab[VAR_2].free + VAR_0->ltab[VAR_2].dirty == VAR_0->leb_size)
   VAR_1 += VAR_0->leb_size;
 }

 if (VAR_1 <= VAR_0->lpt_sz * 2)
  return 1;
 return 0;
}
