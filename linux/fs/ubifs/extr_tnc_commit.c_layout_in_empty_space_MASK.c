
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_znode {int lnum; int offs; int len; int iip; int child_cnt; struct ubifs_znode* cnext; struct ubifs_zbranch* zbranch; struct ubifs_znode* parent; } ;
struct ubifs_zbranch {int lnum; int offs; int len; } ;
struct TYPE_3__ {int lnum; int offs; int len; } ;
struct ubifs_info {int ihead_lnum; int ihead_offs; int min_io_size; int leb_size; scalar_t__ ileb_nxt; scalar_t__ ileb_cnt; int* ilebs; int calc_idx_sz; TYPE_2__* dbg; struct ubifs_znode* cnext; int dirty_zn_cnt; TYPE_1__ zroot; int fanout; struct ubifs_znode* enext; } ;
struct TYPE_4__ {int new_ihead_lnum; int new_ihead_offs; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ubifs_info*,char*) ;
 int FUNC_3 (struct ubifs_info*,int ) ;
 int FUNC_4 (struct ubifs_info*,int,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_1)
{
 struct ubifs_znode *VAR_2, *VAR_3, *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_3 = VAR_1->enext;
 if (!VAR_3)
  return 0;

 VAR_5 = VAR_1->ihead_lnum;
 VAR_10 = VAR_1->ihead_offs;

 VAR_9 = FUNC_3(VAR_1, VAR_1->fanout);
 VAR_9 = FUNC_0(VAR_9, VAR_1->min_io_size);
 VAR_11 = 0;
 VAR_12 = VAR_9;


 VAR_8 = FUNC_3(VAR_1, VAR_3->child_cnt);
 if (VAR_10 + VAR_8 > VAR_1->leb_size)
  VAR_5 = -1;

 while (1) {
  VAR_2 = VAR_3;

  VAR_7 = FUNC_3(VAR_1, VAR_2->child_cnt);


  if (VAR_5 == -1) {
   if (VAR_1->ileb_nxt >= VAR_1->ileb_cnt) {
    FUNC_2(VAR_1, "out of space");
    return -VAR_0;
   }
   VAR_5 = VAR_1->ilebs[VAR_1->ileb_nxt++];
   VAR_10 = 0;
   VAR_11 = 0;
   VAR_12 = VAR_9;
  }

  VAR_6 = VAR_10 + VAR_11;

  VAR_2->lnum = VAR_5;
  VAR_2->offs = VAR_6;
  VAR_2->len = VAR_7;


  VAR_4 = VAR_2->parent;
  if (VAR_4) {
   struct ubifs_zbranch *VAR_16;
   int VAR_17;

   VAR_17 = VAR_2->iip;
   VAR_16 = &VAR_4->zbranch[VAR_17];
   VAR_16->lnum = VAR_5;
   VAR_16->offs = VAR_6;
   VAR_16->len = VAR_7;
  } else {
   VAR_1->zroot.lnum = VAR_5;
   VAR_1->zroot.offs = VAR_6;
   VAR_1->zroot.len = VAR_7;
  }
  VAR_1->calc_idx_sz += FUNC_0(VAR_7, 8);





  FUNC_1(&VAR_1->dirty_zn_cnt);





  VAR_3 = VAR_2->cnext;
  if (VAR_3 == VAR_1->cnext)
   VAR_8 = 0;
  else
   VAR_8 = FUNC_3(VAR_1, VAR_3->child_cnt);


  VAR_13 = VAR_11 + VAR_7;
  VAR_11 += FUNC_0(VAR_7, 8);
  VAR_12 -= FUNC_0(VAR_7, 8);

  if (VAR_8 != 0 &&
      VAR_10 + VAR_11 + VAR_8 <= VAR_1->leb_size &&
      VAR_12 > 0)
   continue;

  if (VAR_12 <= 0 && VAR_8 &&
      VAR_10 + VAR_11 + VAR_8 <= VAR_1->leb_size)
   VAR_14 = VAR_9;
  else
   VAR_14 = FUNC_0(VAR_13, VAR_1->min_io_size);


  VAR_10 += VAR_14;
  if (VAR_8) {
   if (VAR_10 + VAR_8 > VAR_1->leb_size) {
    VAR_15 = FUNC_4(VAR_1, VAR_5,
     VAR_1->leb_size - VAR_10, VAR_14 - VAR_11,
     0, 0);
    if (VAR_15)
     return VAR_15;
    VAR_5 = -1;
   }
   VAR_11 -= VAR_14;
   if (VAR_11 < 0)
    VAR_11 = 0;
   VAR_12 = VAR_9 - VAR_11;
   continue;
  }
  VAR_15 = FUNC_4(VAR_1, VAR_5, VAR_1->leb_size - VAR_10,
       VAR_14 - VAR_11, 0, 0);
  if (VAR_15)
   return VAR_15;
  break;
 }

 VAR_1->dbg->new_ihead_lnum = VAR_5;
 VAR_1->dbg->new_ihead_offs = VAR_10;

 return 0;
}
