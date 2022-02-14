
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_info {int nhead_lnum; int nhead_offs; int lsave_sz; int leb_size; int lsave_lnum; int lsave_offs; int ltab_sz; int ltab_lnum; int ltab_offs; int nnode_sz; int dirty_nn_cnt; int pnode_sz; int dirty_pn_cnt; int lpt_first; int lpt_last; int lpt_lnum; int lpt_offs; int min_io_size; struct ubifs_cnode* lpt_cnext; int big_lpt; } ;
struct ubifs_cnode {size_t iip; struct ubifs_cnode* cnext; TYPE_2__* parent; scalar_t__ level; } ;
struct TYPE_4__ {TYPE_1__* nbranch; } ;
struct TYPE_3__ {int lnum; int offs; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ubifs_info*,int*) ;
 int FUNC_2 (struct ubifs_info*,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ubifs_info*,int) ;
 int FUNC_5 (struct ubifs_info*) ;
 int FUNC_6 (struct ubifs_info*) ;
 int FUNC_7 (struct ubifs_info*,char*,int,int,int,int,int) ;
 int FUNC_8 (struct ubifs_info*,int,int,int) ;

__attribute__((used)) static int FUNC_9(struct ubifs_info *VAR_0)
{
 int VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 struct ubifs_cnode *VAR_8;

 VAR_7 = FUNC_2(VAR_0, 0, 0);
 if (VAR_7)
  return VAR_7;
 VAR_8 = VAR_0->lpt_cnext;
 if (!VAR_8)
  return 0;
 VAR_1 = VAR_0->nhead_lnum;
 VAR_2 = VAR_0->nhead_offs;

 VAR_5 = !VAR_0->big_lpt;
 VAR_6 = 0;
 if (!VAR_5 && VAR_2 + VAR_0->lsave_sz <= VAR_0->leb_size) {
  VAR_5 = 1;
  VAR_0->lsave_lnum = VAR_1;
  VAR_0->lsave_offs = VAR_2;
  VAR_2 += VAR_0->lsave_sz;
  FUNC_2(VAR_0, 1, VAR_0->lsave_sz);
 }

 if (VAR_2 + VAR_0->ltab_sz <= VAR_0->leb_size) {
  VAR_6 = 1;
  VAR_0->ltab_lnum = VAR_1;
  VAR_0->ltab_offs = VAR_2;
  VAR_2 += VAR_0->ltab_sz;
  FUNC_2(VAR_0, 1, VAR_0->ltab_sz);
 }

 do {
  if (VAR_8->level) {
   VAR_3 = VAR_0->nnode_sz;
   VAR_0->dirty_nn_cnt -= 1;
  } else {
   VAR_3 = VAR_0->pnode_sz;
   VAR_0->dirty_pn_cnt -= 1;
  }
  while (VAR_2 + VAR_3 > VAR_0->leb_size) {
   VAR_4 = FUNC_0(VAR_2, VAR_0->min_io_size);
   FUNC_8(VAR_0, VAR_1, VAR_0->leb_size - VAR_4, VAR_4 - VAR_2);
   FUNC_2(VAR_0, 2, VAR_0->leb_size - VAR_2);
   VAR_7 = FUNC_1(VAR_0, &VAR_1);
   if (VAR_7)
    goto no_space;
   VAR_2 = 0;
   FUNC_4(VAR_0, VAR_1 >= VAR_0->lpt_first &&
         VAR_1 <= VAR_0->lpt_last);

   if (!VAR_5) {
    VAR_5 = 1;
    VAR_0->lsave_lnum = VAR_1;
    VAR_0->lsave_offs = VAR_2;
    VAR_2 += VAR_0->lsave_sz;
    FUNC_2(VAR_0, 1, VAR_0->lsave_sz);
    continue;
   }
   if (!VAR_6) {
    VAR_6 = 1;
    VAR_0->ltab_lnum = VAR_1;
    VAR_0->ltab_offs = VAR_2;
    VAR_2 += VAR_0->ltab_sz;
    FUNC_2(VAR_0, 1, VAR_0->ltab_sz);
    continue;
   }
   break;
  }
  if (VAR_8->parent) {
   VAR_8->parent->nbranch[VAR_8->iip].lnum = VAR_1;
   VAR_8->parent->nbranch[VAR_8->iip].offs = VAR_2;
  } else {
   VAR_0->lpt_lnum = VAR_1;
   VAR_0->lpt_offs = VAR_2;
  }
  VAR_2 += VAR_3;
  FUNC_2(VAR_0, 1, VAR_3);
  VAR_8 = VAR_8->cnext;
 } while (VAR_8 && VAR_8 != VAR_0->lpt_cnext);


 if (!VAR_5) {
  if (VAR_2 + VAR_0->lsave_sz > VAR_0->leb_size) {
   VAR_4 = FUNC_0(VAR_2, VAR_0->min_io_size);
   FUNC_8(VAR_0, VAR_1, VAR_0->leb_size - VAR_4, VAR_4 - VAR_2);
   FUNC_2(VAR_0, 2, VAR_0->leb_size - VAR_2);
   VAR_7 = FUNC_1(VAR_0, &VAR_1);
   if (VAR_7)
    goto no_space;
   VAR_2 = 0;
   FUNC_4(VAR_0, VAR_1 >= VAR_0->lpt_first &&
         VAR_1 <= VAR_0->lpt_last);
  }
  VAR_5 = 1;
  VAR_0->lsave_lnum = VAR_1;
  VAR_0->lsave_offs = VAR_2;
  VAR_2 += VAR_0->lsave_sz;
  FUNC_2(VAR_0, 1, VAR_0->lsave_sz);
 }


 if (!VAR_6) {
  if (VAR_2 + VAR_0->ltab_sz > VAR_0->leb_size) {
   VAR_4 = FUNC_0(VAR_2, VAR_0->min_io_size);
   FUNC_8(VAR_0, VAR_1, VAR_0->leb_size - VAR_4, VAR_4 - VAR_2);
   FUNC_2(VAR_0, 2, VAR_0->leb_size - VAR_2);
   VAR_7 = FUNC_1(VAR_0, &VAR_1);
   if (VAR_7)
    goto no_space;
   VAR_2 = 0;
   FUNC_4(VAR_0, VAR_1 >= VAR_0->lpt_first &&
         VAR_1 <= VAR_0->lpt_last);
  }
  VAR_0->ltab_lnum = VAR_1;
  VAR_0->ltab_offs = VAR_2;
  VAR_2 += VAR_0->ltab_sz;
  FUNC_2(VAR_0, 1, VAR_0->ltab_sz);
 }

 VAR_4 = FUNC_0(VAR_2, VAR_0->min_io_size);
 FUNC_8(VAR_0, VAR_1, VAR_0->leb_size - VAR_4, VAR_4 - VAR_2);
 FUNC_2(VAR_0, 4, VAR_4 - VAR_2);
 VAR_7 = FUNC_2(VAR_0, 3, VAR_4);
 if (VAR_7)
  return VAR_7;
 return 0;

no_space:
 FUNC_7(VAR_0, "LPT out of space at LEB %d:%d needing %d, done_ltab %d, done_lsave %d",
    VAR_1, VAR_2, VAR_3, VAR_6, VAR_5);
 FUNC_5(VAR_0);
 FUNC_6(VAR_0);
 FUNC_3();
 return VAR_7;
}
