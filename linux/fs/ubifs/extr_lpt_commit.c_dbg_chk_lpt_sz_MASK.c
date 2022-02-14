
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {long long leb_size; long long lpt_sz; long long pnode_sz; long long nnode_sz; long long ltab_sz; long long lsave_sz; int big_lpt; scalar_t__ nnode_cnt; scalar_t__ pnode_cnt; int nhead_offs; scalar_t__ dirty_nn_cnt; scalar_t__ dirty_pn_cnt; struct ubifs_debug_info* dbg; } ;
struct ubifs_debug_info {int chk_lpt_sz; long long chk_lpt_sz2; int chk_lpt_lebs; int chk_lpt_wastage; int new_nhead_offs; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 (struct ubifs_info*) ;
 int FUNC_4 (struct ubifs_info*,char*,long long,long long,...) ;

int FUNC_5(struct ubifs_info *VAR_1, int VAR_2, int VAR_3)
{
 struct ubifs_debug_info *VAR_4 = VAR_1->dbg;
 long long VAR_5, VAR_6;
 int VAR_7 = 0;

 if (!FUNC_0(VAR_1))
  return 0;

 switch (VAR_2) {
 case 0:
  VAR_4->chk_lpt_sz = 0;
  VAR_4->chk_lpt_sz2 = 0;
  VAR_4->chk_lpt_lebs = 0;
  VAR_4->chk_lpt_wastage = 0;
  if (VAR_1->dirty_pn_cnt > VAR_1->pnode_cnt) {
   FUNC_4(VAR_1, "dirty pnodes %d exceed max %d",
      VAR_1->dirty_pn_cnt, VAR_1->pnode_cnt);
   VAR_7 = -VAR_0;
  }
  if (VAR_1->dirty_nn_cnt > VAR_1->nnode_cnt) {
   FUNC_4(VAR_1, "dirty nnodes %d exceed max %d",
      VAR_1->dirty_nn_cnt, VAR_1->nnode_cnt);
   VAR_7 = -VAR_0;
  }
  return VAR_7;
 case 1:
  VAR_4->chk_lpt_sz += VAR_3;
  return 0;
 case 2:
  VAR_4->chk_lpt_sz += VAR_3;
  VAR_4->chk_lpt_wastage += VAR_3;
  VAR_4->chk_lpt_lebs += 1;
  return 0;
 case 3:
  VAR_5 = VAR_1->leb_size;
  VAR_5 *= VAR_4->chk_lpt_lebs;
  VAR_5 += VAR_3 - VAR_1->nhead_offs;
  if (VAR_4->chk_lpt_sz != VAR_5) {
   FUNC_4(VAR_1, "LPT wrote %lld but space used was %lld",
      VAR_4->chk_lpt_sz, VAR_5);
   VAR_7 = -VAR_0;
  }
  if (VAR_4->chk_lpt_sz > VAR_1->lpt_sz) {
   FUNC_4(VAR_1, "LPT wrote %lld but lpt_sz is %lld",
      VAR_4->chk_lpt_sz, VAR_1->lpt_sz);
   VAR_7 = -VAR_0;
  }
  if (VAR_4->chk_lpt_sz2 && VAR_4->chk_lpt_sz != VAR_4->chk_lpt_sz2) {
   FUNC_4(VAR_1, "LPT layout size %lld but wrote %lld",
      VAR_4->chk_lpt_sz, VAR_4->chk_lpt_sz2);
   VAR_7 = -VAR_0;
  }
  if (VAR_4->chk_lpt_sz2 && VAR_4->new_nhead_offs != VAR_3) {
   FUNC_4(VAR_1, "LPT new nhead offs: expected %d was %d",
      VAR_4->new_nhead_offs, VAR_3);
   VAR_7 = -VAR_0;
  }
  VAR_6 = (long long)VAR_1->pnode_cnt * VAR_1->pnode_sz;
  VAR_6 += (long long)VAR_1->nnode_cnt * VAR_1->nnode_sz;
  VAR_6 += VAR_1->ltab_sz;
  if (VAR_1->big_lpt)
   VAR_6 += VAR_1->lsave_sz;
  if (VAR_4->chk_lpt_sz - VAR_4->chk_lpt_wastage > VAR_6) {
   FUNC_4(VAR_1, "LPT chk_lpt_sz %lld + waste %lld exceeds %lld",
      VAR_4->chk_lpt_sz, VAR_4->chk_lpt_wastage, VAR_6);
   VAR_7 = -VAR_0;
  }
  if (VAR_7) {
   FUNC_2(VAR_1);
   FUNC_3(VAR_1);
   FUNC_1();
  }
  VAR_4->chk_lpt_sz2 = VAR_4->chk_lpt_sz;
  VAR_4->chk_lpt_sz = 0;
  VAR_4->chk_lpt_wastage = 0;
  VAR_4->chk_lpt_lebs = 0;
  VAR_4->new_nhead_offs = VAR_3;
  return VAR_7;
 case 4:
  VAR_4->chk_lpt_sz += VAR_3;
  VAR_4->chk_lpt_wastage += VAR_3;
  return 0;
 default:
  return -VAR_0;
 }
}
