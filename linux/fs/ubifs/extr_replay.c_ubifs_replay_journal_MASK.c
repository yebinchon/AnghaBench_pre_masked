
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uncommitted_idx; } ;
struct ubifs_info {int ihead_offs; int leb_size; int ihead_lnum; int replaying; int ltail_lnum; int lhead_lnum; scalar_t__ bud_bytes; scalar_t__ max_bud_bytes; scalar_t__ highest_inum; int max_sqnum; int lhead_offs; scalar_t__ need_recovery; int max_idx_node_sz; TYPE_1__ bi; int dirty_zn_cnt; int sbuf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct ubifs_info*) ;
 int FUNC_5 (struct ubifs_info*) ;
 int FUNC_6 (struct ubifs_info*) ;
 int FUNC_7 (struct ubifs_info*,int,int ,int ) ;
 int FUNC_8 (struct ubifs_info*) ;
 int FUNC_9 (struct ubifs_info*) ;
 int FUNC_10 (struct ubifs_info*,int) ;
 int FUNC_11 (struct ubifs_info*,char*,int,int) ;
 int FUNC_12 (struct ubifs_info*,int) ;

int FUNC_13(struct ubifs_info *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 FUNC_0(VAR_1 > 5);


 VAR_5 = FUNC_9(VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_2->ihead_offs != VAR_2->leb_size - VAR_5) {
  FUNC_11(VAR_2, "bad index head LEB %d:%d", VAR_2->ihead_lnum,
     VAR_2->ihead_offs);
  return -VAR_0;
 }

 FUNC_3("start replaying the journal");
 VAR_2->replaying = 1;
 VAR_4 = VAR_2->ltail_lnum = VAR_2->lhead_lnum;

 do {
  VAR_3 = FUNC_7(VAR_2, VAR_4, 0, VAR_2->sbuf);
  if (VAR_3 == 1) {
   if (VAR_4 != VAR_2->lhead_lnum)

    break;
   FUNC_11(VAR_2, "no UBIFS nodes found at the log head LEB %d:%d, possibly corrupted",
      VAR_4, 0);
   VAR_3 = -VAR_0;
  }
  if (VAR_3)
   goto out;
  VAR_4 = FUNC_12(VAR_2, VAR_4);
 } while (VAR_4 != VAR_2->ltail_lnum);

 VAR_3 = FUNC_6(VAR_2);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_8(VAR_2);
 if (VAR_3)
  goto out;







 VAR_2->bi.uncommitted_idx = FUNC_2(&VAR_2->dirty_zn_cnt);
 VAR_2->bi.uncommitted_idx *= VAR_2->max_idx_node_sz;

 FUNC_10(VAR_2, VAR_2->bud_bytes <= VAR_2->max_bud_bytes || VAR_2->need_recovery);
 FUNC_3("finished, log head LEB %d:%d, max_sqnum %llu, highest_inum %lu",
  VAR_2->lhead_lnum, VAR_2->lhead_offs, VAR_2->max_sqnum,
  (unsigned long)VAR_2->highest_inum);
out:
 FUNC_5(VAR_2);
 FUNC_4(VAR_2);
 VAR_2->replaying = 0;
 return VAR_3;
}
