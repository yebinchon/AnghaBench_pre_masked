
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idx_growth; int data_growth; int dd_growth; int nospace; int nospace_rp; } ;
struct ubifs_info {scalar_t__ rp_size; TYPE_1__ bi; int space_lock; } ;
struct ubifs_budget_req {int new_page; int dirtied_page; int new_dent; int mod_dent; int new_ino; int new_ino_d; int dirtied_ino; int dirtied_ino_d; int idx_growth; int data_growth; int dd_growth; scalar_t__ fast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_1 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_2 (struct ubifs_info*,struct ubifs_budget_req*) ;
 scalar_t__ FUNC_3 (struct ubifs_info*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct ubifs_info*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct ubifs_info*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ubifs_info*,int) ;
 int FUNC_13 (struct ubifs_info*,char*,int) ;
 scalar_t__ FUNC_14 (int) ;

int FUNC_15(struct ubifs_info *VAR_3, struct ubifs_budget_req *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9 = 0;

 FUNC_12(VAR_3, VAR_4->new_page <= 1);
 FUNC_12(VAR_3, VAR_4->dirtied_page <= 1);
 FUNC_12(VAR_3, VAR_4->new_dent <= 1);
 FUNC_12(VAR_3, VAR_4->mod_dent <= 1);
 FUNC_12(VAR_3, VAR_4->new_ino <= 1);
 FUNC_12(VAR_3, VAR_4->new_ino_d <= VAR_2);
 FUNC_12(VAR_3, VAR_4->dirtied_ino <= 4);
 FUNC_12(VAR_3, VAR_4->dirtied_ino_d <= VAR_2 * 4);
 FUNC_12(VAR_3, !(VAR_4->new_ino_d & 7));
 FUNC_12(VAR_3, !(VAR_4->dirtied_ino_d & 7));

 VAR_7 = FUNC_0(VAR_3, VAR_4);
 VAR_8 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_7 && !VAR_8)
  return 0;
 VAR_6 = FUNC_2(VAR_3, VAR_4);

again:
 FUNC_10(&VAR_3->space_lock);
 FUNC_12(VAR_3, VAR_3->bi.idx_growth >= 0);
 FUNC_12(VAR_3, VAR_3->bi.data_growth >= 0);
 FUNC_12(VAR_3, VAR_3->bi.dd_growth >= 0);

 if (FUNC_14(VAR_3->bi.nospace) && (VAR_3->bi.nospace_rp || !FUNC_3(VAR_3))) {
  FUNC_5("no space");
  FUNC_11(&VAR_3->space_lock);
  return -VAR_1;
 }

 VAR_3->bi.idx_growth += VAR_6;
 VAR_3->bi.data_growth += VAR_7;
 VAR_3->bi.dd_growth += VAR_8;

 VAR_5 = FUNC_6(VAR_3);
 if (FUNC_7(!VAR_5)) {
  VAR_4->idx_growth = VAR_6;
  VAR_4->data_growth = VAR_7;
  VAR_4->dd_growth = VAR_8;
  FUNC_11(&VAR_3->space_lock);
  return 0;
 }


 VAR_3->bi.idx_growth -= VAR_6;
 VAR_3->bi.data_growth -= VAR_7;
 VAR_3->bi.dd_growth -= VAR_8;
 FUNC_11(&VAR_3->space_lock);

 if (VAR_4->fast) {
  FUNC_5("no space for fast budgeting");
  return VAR_5;
 }

 VAR_5 = FUNC_8(VAR_3);
 FUNC_4();
 if (VAR_5 == -VAR_0) {
  FUNC_5("try again");
  goto again;
 } else if (VAR_5 == -VAR_1) {
  if (!VAR_9) {
   VAR_9 = 1;
   FUNC_5("-ENOSPC, but anyway try once again");
   goto again;
  }
  FUNC_5("FS is full, -ENOSPC");
  VAR_3->bi.nospace = 1;
  if (FUNC_3(VAR_3) || VAR_3->rp_size == 0)
   VAR_3->bi.nospace_rp = 1;
  FUNC_9();
 } else
  FUNC_13(VAR_3, "cannot budget space, error %d", VAR_5);
 return VAR_5;
}
