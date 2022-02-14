
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ubifs_lpt_scan_callback ;
struct ubifs_lp_stats {scalar_t__ empty_lebs; scalar_t__ idx_lebs; scalar_t__ total_free; scalar_t__ total_dirty; scalar_t__ total_used; scalar_t__ total_dead; scalar_t__ total_dark; } ;
struct TYPE_4__ {scalar_t__ empty_lebs; scalar_t__ idx_lebs; scalar_t__ total_free; scalar_t__ total_dirty; scalar_t__ total_used; scalar_t__ total_dead; scalar_t__ total_dark; } ;
struct ubifs_info {int jhead_cnt; TYPE_2__ lst; scalar_t__ leb_cnt; int main_first; TYPE_1__* jheads; } ;
struct TYPE_3__ {int wbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (struct ubifs_lp_stats*,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct ubifs_info*,char*,...) ;
 int FUNC_4 (struct ubifs_info*,int ,scalar_t__,int ,struct ubifs_lp_stats*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct ubifs_info *VAR_3)
{
 int VAR_4, VAR_5;
 struct ubifs_lp_stats VAR_6;

 if (!FUNC_1(VAR_3))
  return 0;





 for (VAR_4 = 0; VAR_4 < VAR_3->jhead_cnt; VAR_4++) {
  VAR_5 = FUNC_5(&VAR_3->jheads[VAR_4].wbuf);
  if (VAR_5)
   return VAR_5;
 }

 FUNC_2(&VAR_6, 0, sizeof(struct ubifs_lp_stats));
 VAR_5 = FUNC_4(VAR_3, VAR_3->main_first, VAR_3->leb_cnt - 1,
        (ubifs_lpt_scan_callback)VAR_2,
        &VAR_6);
 if (VAR_5 && VAR_5 != -VAR_1)
  goto out;

 if (VAR_6.empty_lebs != VAR_3->lst.empty_lebs ||
     VAR_6.idx_lebs != VAR_3->lst.idx_lebs ||
     VAR_6.total_free != VAR_3->lst.total_free ||
     VAR_6.total_dirty != VAR_3->lst.total_dirty ||
     VAR_6.total_used != VAR_3->lst.total_used) {
  FUNC_3(VAR_3, "bad overall accounting");
  FUNC_3(VAR_3, "calculated: empty_lebs %d, idx_lebs %d, total_free %lld, total_dirty %lld, total_used %lld",
     VAR_6.empty_lebs, VAR_6.idx_lebs, VAR_6.total_free,
     VAR_6.total_dirty, VAR_6.total_used);
  FUNC_3(VAR_3, "read from lprops: empty_lebs %d, idx_lebs %d, total_free %lld, total_dirty %lld, total_used %lld",
     VAR_3->lst.empty_lebs, VAR_3->lst.idx_lebs, VAR_3->lst.total_free,
     VAR_3->lst.total_dirty, VAR_3->lst.total_used);
  VAR_5 = -VAR_0;
  goto out;
 }

 if (VAR_6.total_dead != VAR_3->lst.total_dead ||
     VAR_6.total_dark != VAR_3->lst.total_dark) {
  FUNC_3(VAR_3, "bad dead/dark space accounting");
  FUNC_3(VAR_3, "calculated: total_dead %lld, total_dark %lld",
     VAR_6.total_dead, VAR_6.total_dark);
  FUNC_3(VAR_3, "read from lprops: total_dead %lld, total_dark %lld",
     VAR_3->lst.total_dead, VAR_3->lst.total_dark);
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_5 = FUNC_0(VAR_3);
out:
 return VAR_5;
}
