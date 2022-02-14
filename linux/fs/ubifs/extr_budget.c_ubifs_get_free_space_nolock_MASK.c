
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ idx_lebs; int empty_lebs; int taken_empty_lebs; } ;
struct TYPE_3__ {scalar_t__ min_idx_lebs; long long data_growth; long long dd_growth; } ;
struct ubifs_info {int freeable_cnt; int idx_gc_cnt; int dark_wm; int leb_overhead; TYPE_2__ lst; TYPE_1__ bi; } ;


 int FUNC_0 (struct ubifs_info*,int) ;
 long long FUNC_1 (struct ubifs_info*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ubifs_info*) ;
 long long FUNC_3 (struct ubifs_info*,long long) ;

long long FUNC_4(struct ubifs_info *VAR_0)
{
 int VAR_1, VAR_2;
 long long VAR_3, VAR_4, VAR_5;

 FUNC_0(VAR_0, VAR_0->bi.min_idx_lebs == FUNC_2(VAR_0));
 VAR_4 = VAR_0->bi.data_growth + VAR_0->bi.dd_growth;
 VAR_3 = FUNC_1(VAR_0, VAR_0->bi.min_idx_lebs);
 if (VAR_0->bi.min_idx_lebs > VAR_0->lst.idx_lebs)
  VAR_1 = VAR_0->bi.min_idx_lebs - VAR_0->lst.idx_lebs;
 else
  VAR_1 = 0;
 VAR_2 = VAR_0->lst.empty_lebs + VAR_0->freeable_cnt + VAR_0->idx_gc_cnt -
        VAR_0->lst.taken_empty_lebs;
 VAR_2 -= VAR_1;
 VAR_3 += VAR_2 * (VAR_0->dark_wm - VAR_0->leb_overhead);

 if (VAR_3 > VAR_4)
  VAR_5 = FUNC_3(VAR_0, VAR_3 - VAR_4);
 else
  VAR_5 = 0;
 return VAR_5;
}
