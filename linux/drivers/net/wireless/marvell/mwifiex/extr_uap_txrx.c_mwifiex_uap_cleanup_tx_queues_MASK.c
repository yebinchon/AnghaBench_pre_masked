
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ra_list_spinlock; TYPE_1__* tid_tbl_ptr; } ;
struct mwifiex_private {int del_list_idx; TYPE_2__ wmm; } ;
struct list_head {int dummy; } ;
struct TYPE_3__ {struct list_head ra_list; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mwifiex_private*,struct list_head*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mwifiex_private *VAR_1)
{
 struct list_head *VAR_2;
 int VAR_3;

 FUNC_1(&VAR_1->wmm.ra_list_spinlock);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++, VAR_1->del_list_idx++) {
  if (VAR_1->del_list_idx == VAR_0)
   VAR_1->del_list_idx = 0;
  VAR_2 = &VAR_1->wmm.tid_tbl_ptr[VAR_1->del_list_idx].ra_list;
  if (FUNC_0(VAR_1, VAR_2, VAR_3)) {
   VAR_1->del_list_idx++;
   break;
  }
 }

 FUNC_2(&VAR_1->wmm.ra_list_spinlock);
}
