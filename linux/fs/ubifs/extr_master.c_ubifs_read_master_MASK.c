
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int hash; void* len; void* offs; void* lnum; } ;
struct TYPE_9__ {int empty_lebs; int total_free; int total_dark; void* total_dead; void* total_used; void* total_dirty; void* idx_lebs; } ;
struct TYPE_8__ {void* old_idx_sz; } ;
struct ubifs_info {int no_orphs; int leb_cnt; TYPE_6__ zroot; TYPE_3__ lst; TYPE_4__* mst_node; scalar_t__ dark_wm; scalar_t__ leb_size; TYPE_2__ bi; void* calc_idx_sz; void* lscan_lnum; void* lsave_offs; void* lsave_lnum; void* ltab_offs; void* ltab_lnum; void* nhead_offs; void* nhead_lnum; void* lpt_offs; void* lpt_lnum; void* ihead_offs; void* ihead_lnum; void* gc_lnum; void* lhead_lnum; void* cmt_no; void* highest_inum; void* max_sqnum; int mst_node_alsz; } ;
struct TYPE_7__ {void* sqnum; } ;
struct TYPE_10__ {int flags; int root_lnum; int root_offs; int root_len; int log_lnum; int gc_lnum; int ihead_lnum; int ihead_offs; int lpt_lnum; int lpt_offs; int nhead_lnum; int nhead_offs; int ltab_lnum; int ltab_offs; int lsave_lnum; int lsave_offs; int lscan_lnum; int empty_lebs; int idx_lebs; int leb_cnt; void* total_dark; void* total_free; int hash_root_idx; void* total_dead; void* total_used; void* total_dirty; void* index_size; void* cmt_no; void* highest_inum; TYPE_1__ ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct ubifs_info*,TYPE_6__*) ;
 TYPE_4__* FUNC_4 (int ,int ) ;
 void* FUNC_5 (int) ;
 void* FUNC_6 (void*) ;
 int FUNC_7 (struct ubifs_info*) ;
 int FUNC_8 (struct ubifs_info*,int ,int ) ;
 int FUNC_9 (struct ubifs_info*,TYPE_4__*) ;
 int FUNC_10 (struct ubifs_info*,char*) ;
 int FUNC_11 (struct ubifs_info*) ;
 int FUNC_12 (struct ubifs_info*) ;

int FUNC_13(struct ubifs_info *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_7->mst_node = FUNC_4(VAR_7->mst_node_alsz, VAR_3);
 if (!VAR_7->mst_node)
  return -VAR_1;

 VAR_8 = FUNC_7(VAR_7);
 if (VAR_8) {
  if (VAR_8 == -VAR_2)
   VAR_8 = FUNC_11(VAR_7);
  if (VAR_8)




   return VAR_8;
 }


 VAR_7->mst_node->flags &= FUNC_0(~VAR_6);

 VAR_7->max_sqnum = FUNC_6(VAR_7->mst_node->ch.sqnum);
 VAR_7->highest_inum = FUNC_6(VAR_7->mst_node->highest_inum);
 VAR_7->cmt_no = FUNC_6(VAR_7->mst_node->cmt_no);
 VAR_7->zroot.lnum = FUNC_5(VAR_7->mst_node->root_lnum);
 VAR_7->zroot.offs = FUNC_5(VAR_7->mst_node->root_offs);
 VAR_7->zroot.len = FUNC_5(VAR_7->mst_node->root_len);
 VAR_7->lhead_lnum = FUNC_5(VAR_7->mst_node->log_lnum);
 VAR_7->gc_lnum = FUNC_5(VAR_7->mst_node->gc_lnum);
 VAR_7->ihead_lnum = FUNC_5(VAR_7->mst_node->ihead_lnum);
 VAR_7->ihead_offs = FUNC_5(VAR_7->mst_node->ihead_offs);
 VAR_7->bi.old_idx_sz = FUNC_6(VAR_7->mst_node->index_size);
 VAR_7->lpt_lnum = FUNC_5(VAR_7->mst_node->lpt_lnum);
 VAR_7->lpt_offs = FUNC_5(VAR_7->mst_node->lpt_offs);
 VAR_7->nhead_lnum = FUNC_5(VAR_7->mst_node->nhead_lnum);
 VAR_7->nhead_offs = FUNC_5(VAR_7->mst_node->nhead_offs);
 VAR_7->ltab_lnum = FUNC_5(VAR_7->mst_node->ltab_lnum);
 VAR_7->ltab_offs = FUNC_5(VAR_7->mst_node->ltab_offs);
 VAR_7->lsave_lnum = FUNC_5(VAR_7->mst_node->lsave_lnum);
 VAR_7->lsave_offs = FUNC_5(VAR_7->mst_node->lsave_offs);
 VAR_7->lscan_lnum = FUNC_5(VAR_7->mst_node->lscan_lnum);
 VAR_7->lst.empty_lebs = FUNC_5(VAR_7->mst_node->empty_lebs);
 VAR_7->lst.idx_lebs = FUNC_5(VAR_7->mst_node->idx_lebs);
 VAR_9 = FUNC_5(VAR_7->mst_node->leb_cnt);
 VAR_7->lst.total_free = FUNC_6(VAR_7->mst_node->total_free);
 VAR_7->lst.total_dirty = FUNC_6(VAR_7->mst_node->total_dirty);
 VAR_7->lst.total_used = FUNC_6(VAR_7->mst_node->total_used);
 VAR_7->lst.total_dead = FUNC_6(VAR_7->mst_node->total_dead);
 VAR_7->lst.total_dark = FUNC_6(VAR_7->mst_node->total_dark);

 FUNC_8(VAR_7, VAR_7->mst_node->hash_root_idx, VAR_7->zroot.hash);

 VAR_7->calc_idx_sz = VAR_7->bi.old_idx_sz;

 if (VAR_7->mst_node->flags & FUNC_0(VAR_5))
  VAR_7->no_orphs = 1;

 if (VAR_9 != VAR_7->leb_cnt) {

  int VAR_10 = VAR_7->leb_cnt - VAR_9;

  if (VAR_7->leb_cnt < VAR_9 ||
      VAR_7->leb_cnt < VAR_4) {
   FUNC_10(VAR_7, "bad leb_cnt on master node");
   FUNC_9(VAR_7, VAR_7->mst_node);
   return -VAR_0;
  }

  FUNC_2("Auto resizing (master) from %d LEBs to %d LEBs",
   VAR_9, VAR_7->leb_cnt);
  VAR_7->lst.empty_lebs += VAR_10;
  VAR_7->lst.total_free += VAR_10 * (long long)VAR_7->leb_size;
  VAR_7->lst.total_dark += VAR_10 * (long long)VAR_7->dark_wm;







  VAR_7->mst_node->leb_cnt = FUNC_0(VAR_7->leb_cnt);
  VAR_7->mst_node->empty_lebs = FUNC_0(VAR_7->lst.empty_lebs);
  VAR_7->mst_node->total_free = FUNC_1(VAR_7->lst.total_free);
  VAR_7->mst_node->total_dark = FUNC_1(VAR_7->lst.total_dark);
 }

 VAR_8 = FUNC_12(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_3(VAR_7, &VAR_7->zroot);

 return VAR_8;
}
