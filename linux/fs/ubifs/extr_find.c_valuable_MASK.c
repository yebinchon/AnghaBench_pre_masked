
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_lpt_heap {int max_cnt; int cnt; } ;
struct ubifs_lprops {int flags; scalar_t__ dirty; scalar_t__ free; } ;
struct TYPE_2__ {int empty_lebs; int taken_empty_lebs; } ;
struct ubifs_info {int freeable_cnt; int lsave_cnt; TYPE_1__ lst; scalar_t__ dark_wm; struct ubifs_lpt_heap* lpt_heap; } ;


 int VAR_0 ;







__attribute__((used)) static int FUNC_0(struct ubifs_info *VAR_1, const struct ubifs_lprops *VAR_2)
{
 int VAR_3, VAR_4 = VAR_2->flags & VAR_0;
 struct ubifs_lpt_heap *VAR_5;

 switch (VAR_4) {
 case 133:
 case 132:
 case 129:
  VAR_5 = &VAR_1->lpt_heap[VAR_4 - 1];
  if (VAR_5->cnt < VAR_5->max_cnt)
   return 1;
  if (VAR_2->free + VAR_2->dirty >= VAR_1->dark_wm)
   return 1;
  return 0;
 case 131:
  VAR_3 = VAR_1->lst.empty_lebs + VAR_1->freeable_cnt -
      VAR_1->lst.taken_empty_lebs;
  if (VAR_3 < VAR_1->lsave_cnt)
   return 1;
  return 0;
 case 128:
  return 1;
 case 130:
  return 1;
 }
 return 0;
}
