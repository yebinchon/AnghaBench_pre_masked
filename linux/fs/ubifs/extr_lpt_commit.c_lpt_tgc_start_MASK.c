
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int lpt_lebs; scalar_t__ lpt_first; scalar_t__ nhead_lnum; scalar_t__ leb_size; TYPE_1__* ltab; } ;
struct TYPE_2__ {scalar_t__ dirty; scalar_t__ free; int tgc; } ;


 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ubifs_info *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->lpt_lebs; VAR_1++) {
  if (VAR_1 + VAR_0->lpt_first == VAR_0->nhead_lnum)
   continue;
  if (VAR_0->ltab[VAR_1].dirty > 0 &&
      VAR_0->ltab[VAR_1].free + VAR_0->ltab[VAR_1].dirty == VAR_0->leb_size) {
   VAR_0->ltab[VAR_1].tgc = 1;
   VAR_0->ltab[VAR_1].free = VAR_0->leb_size;
   VAR_0->ltab[VAR_1].dirty = 0;
   FUNC_0("LEB %d", VAR_1 + VAR_0->lpt_first);
  }
 }
}
