
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mwifiex_tid_tbl {int ra_list; } ;
struct mwifiex_ra_list_tbl {int list; } ;
struct TYPE_4__ {int ra_list_spinlock; int * packets_out; struct mwifiex_tid_tbl* tid_tbl_ptr; } ;
struct mwifiex_private {size_t bss_priority; TYPE_2__ wmm; struct mwifiex_adapter* adapter; } ;
struct mwifiex_bss_prio_tbl {int bss_prio_lock; TYPE_1__* bss_prio_cur; int bss_prio_head; } ;
struct mwifiex_adapter {struct mwifiex_bss_prio_tbl* bss_prio_tbl; } ;
struct TYPE_3__ {int list; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (struct mwifiex_private*,struct mwifiex_ra_list_tbl*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mwifiex_private *VAR_0,
     struct mwifiex_ra_list_tbl *VAR_1,
     int VAR_2)
{
 struct mwifiex_adapter *VAR_3 = VAR_0->adapter;
 struct mwifiex_bss_prio_tbl *VAR_4 = VAR_3->bss_prio_tbl;
 struct mwifiex_tid_tbl *VAR_5 = &VAR_0->wmm.tid_tbl_ptr[VAR_2];

 FUNC_2(&VAR_4[VAR_0->bss_priority].bss_prio_lock);




 FUNC_0(&VAR_4[VAR_0->bss_priority].bss_prio_head,
    &VAR_4[VAR_0->bss_priority].bss_prio_cur->list);
 FUNC_3(&VAR_4[VAR_0->bss_priority].bss_prio_lock);

 FUNC_2(&VAR_0->wmm.ra_list_spinlock);
 if (FUNC_1(VAR_0, VAR_1, VAR_2)) {
  VAR_0->wmm.packets_out[VAR_2]++;

  FUNC_0(&VAR_5->ra_list, &VAR_1->list);
 }
 FUNC_3(&VAR_0->wmm.ra_list_spinlock);
}
