
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lpt_heap {int cnt; struct ubifs_lprops** arr; } ;
struct ubifs_lprops {int flags; int hpos; scalar_t__ lnum; } ;
struct ubifs_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct ubifs_lprops*) ;
 int VAR_0 ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ubifs_info*,struct ubifs_lpt_heap*,int) ;
 int FUNC_5 (struct ubifs_info*,char*,int,int,int,...) ;
 struct ubifs_lprops* FUNC_6 (struct ubifs_info*,scalar_t__) ;

void FUNC_7(struct ubifs_info *VAR_1, struct ubifs_lpt_heap *VAR_2, int VAR_3,
      int VAR_4)
{
 int VAR_5 = 0, VAR_6, VAR_7 = 0;

 if (!FUNC_1(VAR_1) && !FUNC_2(VAR_1))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_2->cnt; VAR_5++) {
  struct ubifs_lprops *VAR_8 = VAR_2->arr[VAR_5];
  struct ubifs_lprops *VAR_9;

  if (VAR_5 != VAR_4)
   if ((VAR_8->flags & VAR_0) != VAR_3) {
    VAR_7 = 1;
    goto out;
   }
  if (VAR_8->hpos != VAR_5) {
   VAR_7 = 2;
   goto out;
  }
  VAR_9 = FUNC_6(VAR_1, VAR_8->lnum);
  if (FUNC_0(VAR_9)) {
   VAR_7 = 3;
   goto out;
  }
  if (VAR_8 != VAR_9) {
   FUNC_5(VAR_1, "lprops %zx lp %zx lprops->lnum %d lp->lnum %d",
      (size_t)VAR_8, (size_t)VAR_9, VAR_8->lnum,
      VAR_9->lnum);
   VAR_7 = 4;
   goto out;
  }
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   VAR_9 = VAR_2->arr[VAR_6];
   if (VAR_9 == VAR_8) {
    VAR_7 = 5;
    goto out;
   }
   if (VAR_9->lnum == VAR_8->lnum) {
    VAR_7 = 6;
    goto out;
   }
  }
 }
out:
 if (VAR_7) {
  FUNC_5(VAR_1, "failed cat %d hpos %d err %d", VAR_3, VAR_5, VAR_7);
  FUNC_3();
  FUNC_4(VAR_1, VAR_2, VAR_3);
 }
}
