
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int lpt_lebs; scalar_t__ lpt_first; scalar_t__ nhead_lnum; scalar_t__ leb_size; scalar_t__ nhead_offs; long long lpt_sz; TYPE_1__* ltab; } ;
struct TYPE_2__ {scalar_t__ free; scalar_t__ cmt; scalar_t__ tgc; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 (struct ubifs_info*) ;
 int FUNC_4 (struct ubifs_info*,char*,long long,long long) ;

int FUNC_5(struct ubifs_info *VAR_1)
{
 long long VAR_2 = 0;
 int VAR_3;

 if (!FUNC_0(VAR_1))
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->lpt_lebs; VAR_3++) {
  if (VAR_1->ltab[VAR_3].tgc || VAR_1->ltab[VAR_3].cmt)
   continue;
  if (VAR_3 + VAR_1->lpt_first == VAR_1->nhead_lnum)
   VAR_2 += VAR_1->leb_size - VAR_1->nhead_offs;
  else if (VAR_1->ltab[VAR_3].free == VAR_1->leb_size)
   VAR_2 += VAR_1->leb_size;
 }
 if (VAR_2 < VAR_1->lpt_sz) {
  FUNC_4(VAR_1, "LPT space error: free %lld lpt_sz %lld",
     VAR_2, VAR_1->lpt_sz);
  FUNC_2(VAR_1);
  FUNC_3(VAR_1);
  FUNC_1();
  return -VAR_0;
 }
 return 0;
}
