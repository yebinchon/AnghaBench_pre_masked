
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_lprops {int lnum; int flags; int free; } ;
struct TYPE_4__ {scalar_t__ idx_lebs; int empty_lebs; int taken_empty_lebs; } ;
struct TYPE_3__ {scalar_t__ min_idx_lebs; } ;
struct ubifs_info {int freeable_cnt; int idx_gc_cnt; int leb_size; int space_lock; TYPE_2__ lst; TYPE_1__ bi; } ;


 scalar_t__ FUNC_0 (struct ubifs_lprops const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ubifs_lprops const*) ;
 int FUNC_2 (char*,int,...) ;
 struct ubifs_lprops* FUNC_3 (struct ubifs_info*,int,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ubifs_info*,int) ;
 struct ubifs_lprops* FUNC_7 (struct ubifs_info*,struct ubifs_lprops const*,int ,int ,int,int ) ;
 int FUNC_8 (struct ubifs_info*) ;
 int FUNC_9 (struct ubifs_info*,int) ;
 int FUNC_10 (struct ubifs_info*) ;

int FUNC_11(struct ubifs_info *VAR_2, int VAR_3, int *VAR_4,
     int VAR_5)
{
 const struct ubifs_lprops *VAR_6;
 int VAR_7, VAR_8, VAR_9 = 0, VAR_10, VAR_11, VAR_12;

 FUNC_2("min_space %d", VAR_3);
 FUNC_8(VAR_2);


 FUNC_4(&VAR_2->space_lock);
 if (VAR_2->bi.min_idx_lebs > VAR_2->lst.idx_lebs)
  VAR_8 = VAR_2->bi.min_idx_lebs - VAR_2->lst.idx_lebs;
 else
  VAR_8 = 0;
 VAR_7 = VAR_2->lst.empty_lebs + VAR_2->freeable_cnt + VAR_2->idx_gc_cnt -
        VAR_2->lst.taken_empty_lebs;
 if (VAR_8 < VAR_7)




  if (VAR_2->lst.empty_lebs - VAR_2->lst.taken_empty_lebs > 0) {
   VAR_9 = 1;
   VAR_2->lst.taken_empty_lebs += 1;
  }
 FUNC_5(&VAR_2->space_lock);

 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_9, VAR_5);
 if (FUNC_0(VAR_6)) {
  VAR_10 = FUNC_1(VAR_6);
  goto out;
 }

 VAR_11 = VAR_6->lnum;
 VAR_12 = VAR_6->flags | VAR_1;

 VAR_6 = FUNC_7(VAR_2, VAR_6, VAR_0, VAR_0, VAR_12, 0);
 if (FUNC_0(VAR_6)) {
  VAR_10 = FUNC_1(VAR_6);
  goto out;
 }

 if (VAR_9) {
  FUNC_4(&VAR_2->space_lock);
  VAR_2->lst.taken_empty_lebs -= 1;
  FUNC_5(&VAR_2->space_lock);
 }

 *VAR_4 = VAR_2->leb_size - VAR_6->free;
 FUNC_10(VAR_2);

 if (*VAR_4 == 0) {






  VAR_10 = FUNC_9(VAR_2, VAR_11);
  if (VAR_10)
   return VAR_10;
 }

 FUNC_2("found LEB %d, free %d", VAR_11, VAR_2->leb_size - *VAR_4);
 FUNC_6(VAR_2, *VAR_4 <= VAR_2->leb_size - VAR_3);
 return VAR_11;

out:
 if (VAR_9) {
  FUNC_4(&VAR_2->space_lock);
  VAR_2->lst.taken_empty_lebs -= 1;
  FUNC_5(&VAR_2->space_lock);
 }
 FUNC_10(VAR_2);
 return VAR_10;
}
