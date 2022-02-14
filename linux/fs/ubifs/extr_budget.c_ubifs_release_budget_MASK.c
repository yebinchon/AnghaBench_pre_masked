
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idx_growth; int data_growth; int dd_growth; scalar_t__ min_idx_lebs; int uncommitted_idx; scalar_t__ nospace_rp; scalar_t__ nospace; } ;
struct ubifs_info {scalar_t__ main_lebs; int space_lock; TYPE_1__ bi; } ;
struct ubifs_budget_req {int new_page; int dirtied_page; int new_dent; int mod_dent; int new_ino; int new_ino_d; int dirtied_ino; int dirtied_ino_d; scalar_t__ idx_growth; scalar_t__ data_growth; scalar_t__ dd_growth; scalar_t__ recalculate; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ubifs_info*,struct ubifs_budget_req*) ;
 scalar_t__ FUNC_1 (struct ubifs_info*,struct ubifs_budget_req*) ;
 scalar_t__ FUNC_2 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ubifs_info*,int) ;
 scalar_t__ FUNC_7 (struct ubifs_info*) ;

void FUNC_8(struct ubifs_info *VAR_1, struct ubifs_budget_req *VAR_2)
{
 FUNC_6(VAR_1, VAR_2->new_page <= 1);
 FUNC_6(VAR_1, VAR_2->dirtied_page <= 1);
 FUNC_6(VAR_1, VAR_2->new_dent <= 1);
 FUNC_6(VAR_1, VAR_2->mod_dent <= 1);
 FUNC_6(VAR_1, VAR_2->new_ino <= 1);
 FUNC_6(VAR_1, VAR_2->new_ino_d <= VAR_0);
 FUNC_6(VAR_1, VAR_2->dirtied_ino <= 4);
 FUNC_6(VAR_1, VAR_2->dirtied_ino_d <= VAR_0 * 4);
 FUNC_6(VAR_1, !(VAR_2->new_ino_d & 7));
 FUNC_6(VAR_1, !(VAR_2->dirtied_ino_d & 7));
 if (!VAR_2->recalculate) {
  FUNC_6(VAR_1, VAR_2->idx_growth >= 0);
  FUNC_6(VAR_1, VAR_2->data_growth >= 0);
  FUNC_6(VAR_1, VAR_2->dd_growth >= 0);
 }

 if (VAR_2->recalculate) {
  VAR_2->data_growth = FUNC_0(VAR_1, VAR_2);
  VAR_2->dd_growth = FUNC_1(VAR_1, VAR_2);
  VAR_2->idx_growth = FUNC_2(VAR_1, VAR_2);
 }

 if (!VAR_2->data_growth && !VAR_2->dd_growth)
  return;

 VAR_1->bi.nospace = VAR_1->bi.nospace_rp = 0;
 FUNC_3();

 FUNC_4(&VAR_1->space_lock);
 VAR_1->bi.idx_growth -= VAR_2->idx_growth;
 VAR_1->bi.uncommitted_idx += VAR_2->idx_growth;
 VAR_1->bi.data_growth -= VAR_2->data_growth;
 VAR_1->bi.dd_growth -= VAR_2->dd_growth;
 VAR_1->bi.min_idx_lebs = FUNC_7(VAR_1);

 FUNC_6(VAR_1, VAR_1->bi.idx_growth >= 0);
 FUNC_6(VAR_1, VAR_1->bi.data_growth >= 0);
 FUNC_6(VAR_1, VAR_1->bi.dd_growth >= 0);
 FUNC_6(VAR_1, VAR_1->bi.min_idx_lebs < VAR_1->main_lebs);
 FUNC_6(VAR_1, !(VAR_1->bi.idx_growth & 7));
 FUNC_6(VAR_1, !(VAR_1->bi.data_growth & 7));
 FUNC_6(VAR_1, !(VAR_1->bi.dd_growth & 7));
 FUNC_5(&VAR_1->space_lock);
}
