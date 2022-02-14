
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_pnode {int dummy; } ;
struct ubifs_nnode {int dummy; } ;
struct ubifs_info {int nhead_lnum; int nhead_offs; int lsave_sz; int leb_size; int ltab_sz; int nnode_sz; int pnode_sz; int lpt_first; int lpt_last; int lpt_lnum; int lpt_offs; int ltab_lnum; int ltab_offs; int lsave_lnum; int lsave_offs; scalar_t__ big_lpt; int min_io_size; int ltab_cmt; int lsave; struct ubifs_cnode* lpt_cnext; void* lpt_buf; } ;
struct ubifs_cnode {struct ubifs_cnode* cnext; int flags; scalar_t__ level; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ubifs_info*,int,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (void*,int,int) ;
 int FUNC_6 (struct ubifs_info*,int*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct ubifs_info*,int) ;
 int FUNC_10 (struct ubifs_info*) ;
 int FUNC_11 (struct ubifs_info*) ;
 int FUNC_12 (struct ubifs_info*,char*,int,int,int,int,int) ;
 int FUNC_13 (struct ubifs_info*,int) ;
 int FUNC_14 (struct ubifs_info*,int,void*,int,int) ;
 int FUNC_15 (struct ubifs_info*,void*,int ) ;
 int FUNC_16 (struct ubifs_info*,void*,int ) ;
 int FUNC_17 (struct ubifs_info*,void*,struct ubifs_nnode*) ;
 int FUNC_18 (struct ubifs_info*,void*,struct ubifs_pnode*) ;

__attribute__((used)) static int FUNC_19(struct ubifs_info *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 struct ubifs_cnode *VAR_12;
 void *VAR_13 = VAR_2->lpt_buf;

 VAR_12 = VAR_2->lpt_cnext;
 if (!VAR_12)
  return 0;
 VAR_3 = VAR_2->nhead_lnum;
 VAR_4 = VAR_2->nhead_offs;
 VAR_6 = VAR_4;

 if (VAR_4 == 0) {
  VAR_7 = FUNC_13(VAR_2, VAR_3);
  if (VAR_7)
   return VAR_7;
 }

 VAR_11 = !VAR_2->big_lpt;
 VAR_10 = 0;
 if (!VAR_11 && VAR_4 + VAR_2->lsave_sz <= VAR_2->leb_size) {
  VAR_11 = 1;
  FUNC_15(VAR_2, VAR_13 + VAR_4, VAR_2->lsave);
  VAR_4 += VAR_2->lsave_sz;
  FUNC_2(VAR_2, 1, VAR_2->lsave_sz);
 }

 if (VAR_4 + VAR_2->ltab_sz <= VAR_2->leb_size) {
  VAR_10 = 1;
  FUNC_16(VAR_2, VAR_13 + VAR_4, VAR_2->ltab_cmt);
  VAR_4 += VAR_2->ltab_sz;
  FUNC_2(VAR_2, 1, VAR_2->ltab_sz);
 }


 do {
  if (VAR_12->level)
   VAR_5 = VAR_2->nnode_sz;
  else
   VAR_5 = VAR_2->pnode_sz;
  while (VAR_4 + VAR_5 > VAR_2->leb_size) {
   VAR_8 = VAR_4 - VAR_6;
   if (VAR_8) {
    VAR_9 = FUNC_0(VAR_8, VAR_2->min_io_size);
    FUNC_5(VAR_13 + VAR_4, 0xff, VAR_9 - VAR_8);
    VAR_7 = FUNC_14(VAR_2, VAR_3, VAR_13 + VAR_6, VAR_6,
             VAR_9);
    if (VAR_7)
     return VAR_7;
   }
   FUNC_2(VAR_2, 2, VAR_2->leb_size - VAR_4);
   VAR_7 = FUNC_6(VAR_2, &VAR_3);
   if (VAR_7)
    goto no_space;
   VAR_4 = VAR_6 = 0;
   FUNC_9(VAR_2, VAR_3 >= VAR_2->lpt_first &&
         VAR_3 <= VAR_2->lpt_last);
   VAR_7 = FUNC_13(VAR_2, VAR_3);
   if (VAR_7)
    return VAR_7;

   if (!VAR_11) {
    VAR_11 = 1;
    FUNC_15(VAR_2, VAR_13 + VAR_4, VAR_2->lsave);
    VAR_4 += VAR_2->lsave_sz;
    FUNC_2(VAR_2, 1, VAR_2->lsave_sz);
    continue;
   }
   if (!VAR_10) {
    VAR_10 = 1;
    FUNC_16(VAR_2, VAR_13 + VAR_4, VAR_2->ltab_cmt);
    VAR_4 += VAR_2->ltab_sz;
    FUNC_2(VAR_2, 1, VAR_2->ltab_sz);
    continue;
   }
   break;
  }
  if (VAR_12->level)
   FUNC_17(VAR_2, VAR_13 + VAR_4,
      (struct ubifs_nnode *)VAR_12);
  else
   FUNC_18(VAR_2, VAR_13 + VAR_4,
      (struct ubifs_pnode *)VAR_12);






  FUNC_1(VAR_1, &VAR_12->flags);
  FUNC_8();
  FUNC_1(VAR_0, &VAR_12->flags);
  FUNC_7();
  VAR_4 += VAR_5;
  FUNC_2(VAR_2, 1, VAR_5);
  VAR_12 = VAR_12->cnext;
 } while (VAR_12 && VAR_12 != VAR_2->lpt_cnext);


 if (!VAR_11) {
  if (VAR_4 + VAR_2->lsave_sz > VAR_2->leb_size) {
   VAR_8 = VAR_4 - VAR_6;
   VAR_9 = FUNC_0(VAR_8, VAR_2->min_io_size);
   FUNC_5(VAR_13 + VAR_4, 0xff, VAR_9 - VAR_8);
   VAR_7 = FUNC_14(VAR_2, VAR_3, VAR_13 + VAR_6, VAR_6, VAR_9);
   if (VAR_7)
    return VAR_7;
   FUNC_2(VAR_2, 2, VAR_2->leb_size - VAR_4);
   VAR_7 = FUNC_6(VAR_2, &VAR_3);
   if (VAR_7)
    goto no_space;
   VAR_4 = VAR_6 = 0;
   FUNC_9(VAR_2, VAR_3 >= VAR_2->lpt_first &&
         VAR_3 <= VAR_2->lpt_last);
   VAR_7 = FUNC_13(VAR_2, VAR_3);
   if (VAR_7)
    return VAR_7;
  }
  VAR_11 = 1;
  FUNC_15(VAR_2, VAR_13 + VAR_4, VAR_2->lsave);
  VAR_4 += VAR_2->lsave_sz;
  FUNC_2(VAR_2, 1, VAR_2->lsave_sz);
 }


 if (!VAR_10) {
  if (VAR_4 + VAR_2->ltab_sz > VAR_2->leb_size) {
   VAR_8 = VAR_4 - VAR_6;
   VAR_9 = FUNC_0(VAR_8, VAR_2->min_io_size);
   FUNC_5(VAR_13 + VAR_4, 0xff, VAR_9 - VAR_8);
   VAR_7 = FUNC_14(VAR_2, VAR_3, VAR_13 + VAR_6, VAR_6, VAR_9);
   if (VAR_7)
    return VAR_7;
   FUNC_2(VAR_2, 2, VAR_2->leb_size - VAR_4);
   VAR_7 = FUNC_6(VAR_2, &VAR_3);
   if (VAR_7)
    goto no_space;
   VAR_4 = VAR_6 = 0;
   FUNC_9(VAR_2, VAR_3 >= VAR_2->lpt_first &&
         VAR_3 <= VAR_2->lpt_last);
   VAR_7 = FUNC_13(VAR_2, VAR_3);
   if (VAR_7)
    return VAR_7;
  }
  FUNC_16(VAR_2, VAR_13 + VAR_4, VAR_2->ltab_cmt);
  VAR_4 += VAR_2->ltab_sz;
  FUNC_2(VAR_2, 1, VAR_2->ltab_sz);
 }


 VAR_8 = VAR_4 - VAR_6;
 VAR_9 = FUNC_0(VAR_8, VAR_2->min_io_size);
 FUNC_5(VAR_13 + VAR_4, 0xff, VAR_9 - VAR_8);
 VAR_7 = FUNC_14(VAR_2, VAR_3, VAR_13 + VAR_6, VAR_6, VAR_9);
 if (VAR_7)
  return VAR_7;

 FUNC_2(VAR_2, 4, VAR_9 - VAR_8);
 VAR_7 = FUNC_2(VAR_2, 3, FUNC_0(VAR_4, VAR_2->min_io_size));
 if (VAR_7)
  return VAR_7;

 VAR_2->nhead_lnum = VAR_3;
 VAR_2->nhead_offs = FUNC_0(VAR_4, VAR_2->min_io_size);

 FUNC_3("LPT root is at %d:%d", VAR_2->lpt_lnum, VAR_2->lpt_offs);
 FUNC_3("LPT head is at %d:%d", VAR_2->nhead_lnum, VAR_2->nhead_offs);
 FUNC_3("LPT ltab is at %d:%d", VAR_2->ltab_lnum, VAR_2->ltab_offs);
 if (VAR_2->big_lpt)
  FUNC_3("LPT lsave is at %d:%d", VAR_2->lsave_lnum, VAR_2->lsave_offs);

 return 0;

no_space:
 FUNC_12(VAR_2, "LPT out of space mismatch at LEB %d:%d needing %d, done_ltab %d, done_lsave %d",
    VAR_3, VAR_4, VAR_5, VAR_10, VAR_11);
 FUNC_10(VAR_2);
 FUNC_11(VAR_2);
 FUNC_4();
 return VAR_7;
}
