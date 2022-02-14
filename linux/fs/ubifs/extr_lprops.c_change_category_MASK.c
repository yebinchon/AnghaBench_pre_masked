
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lpt_heap {int dummy; } ;
struct ubifs_lprops {int flags; int hpos; } ;
struct ubifs_info {struct ubifs_lpt_heap* lpt_heap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_info*,struct ubifs_lpt_heap*,struct ubifs_lprops*,int ,int) ;
 int FUNC_1 (struct ubifs_info*,struct ubifs_lprops*,int) ;
 int FUNC_2 (struct ubifs_info*,struct ubifs_lprops*) ;
 int FUNC_3 (struct ubifs_info*,struct ubifs_lprops*,int) ;

__attribute__((used)) static void FUNC_4(struct ubifs_info *VAR_2, struct ubifs_lprops *VAR_3)
{
 int VAR_4 = VAR_3->flags & VAR_0;
 int VAR_5 = FUNC_2(VAR_2, VAR_3);

 if (VAR_4 == VAR_5) {
  struct ubifs_lpt_heap *VAR_6;


  if (VAR_5 < 1 || VAR_5 > VAR_1)
   return;
  VAR_6 = &VAR_2->lpt_heap[VAR_5 - 1];
  FUNC_0(VAR_2, VAR_6, VAR_3, VAR_3->hpos, VAR_5);
 } else {
  FUNC_3(VAR_2, VAR_3, VAR_4);
  FUNC_1(VAR_2, VAR_3, VAR_5);
 }
}
