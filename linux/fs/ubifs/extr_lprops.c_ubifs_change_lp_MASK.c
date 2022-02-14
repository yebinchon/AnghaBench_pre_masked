
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct ubifs_lprops {int free; int dirty; int flags; int lnum; } const ubifs_lprops ;
struct TYPE_2__ {scalar_t__ empty_lebs; scalar_t__ taken_empty_lebs; int total_free; int total_dirty; int total_dead; int total_dark; int total_used; int idx_lebs; } ;
struct ubifs_info {scalar_t__ main_lebs; scalar_t__ freeable_cnt; int leb_size; int dead_wm; int idx_gc_cnt; int space_lock; TYPE_1__ lst; int lp_mutex; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct ubifs_lprops const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ubifs_info*,struct ubifs_lprops const*) ;
 int FUNC_3 (char*,int ,int,int,int) ;
 int FUNC_4 (struct ubifs_info*,struct ubifs_lprops const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ubifs_info*,int) ;
 scalar_t__ FUNC_9 (struct ubifs_info*,int) ;
 struct ubifs_lprops const* FUNC_10 (struct ubifs_info*,int ) ;

const struct ubifs_lprops *FUNC_11(struct ubifs_info *VAR_3,
        const struct ubifs_lprops *VAR_4,
        int VAR_5, int VAR_6, int VAR_7,
        int VAR_8)
{




 struct ubifs_lprops *VAR_9 = (struct ubifs_lprops *)VAR_4;

 FUNC_3("LEB %d, free %d, dirty %d, flags %d",
        VAR_9->lnum, VAR_5, VAR_6, VAR_7);

 FUNC_8(VAR_3, FUNC_5(&VAR_3->lp_mutex));
 FUNC_8(VAR_3, VAR_3->lst.empty_lebs >= 0 &&
       VAR_3->lst.empty_lebs <= VAR_3->main_lebs);
 FUNC_8(VAR_3, VAR_3->freeable_cnt >= 0);
 FUNC_8(VAR_3, VAR_3->freeable_cnt <= VAR_3->main_lebs);
 FUNC_8(VAR_3, VAR_3->lst.taken_empty_lebs >= 0);
 FUNC_8(VAR_3, VAR_3->lst.taken_empty_lebs <= VAR_3->lst.empty_lebs);
 FUNC_8(VAR_3, !(VAR_3->lst.total_free & 7) && !(VAR_3->lst.total_dirty & 7));
 FUNC_8(VAR_3, !(VAR_3->lst.total_dead & 7) && !(VAR_3->lst.total_dark & 7));
 FUNC_8(VAR_3, !(VAR_3->lst.total_used & 7));
 FUNC_8(VAR_3, VAR_5 == VAR_1 || VAR_5 >= 0);
 FUNC_8(VAR_3, VAR_6 == VAR_1 || VAR_6 >= 0);

 if (!FUNC_4(VAR_3, VAR_9)) {
  VAR_9 = FUNC_10(VAR_3, VAR_9->lnum);
  if (FUNC_1(VAR_9))
   return VAR_9;
 } else
  FUNC_8(VAR_3, VAR_9 == FUNC_10(VAR_3, VAR_9->lnum));

 FUNC_8(VAR_3, !(VAR_9->free & 7) && !(VAR_9->dirty & 7));

 FUNC_6(&VAR_3->space_lock);
 if ((VAR_9->flags & VAR_2) && VAR_9->free == VAR_3->leb_size)
  VAR_3->lst.taken_empty_lebs -= 1;

 if (!(VAR_9->flags & VAR_0)) {
  int VAR_10;

  VAR_10 = VAR_9->free + VAR_9->dirty;
  if (VAR_10 < VAR_3->dead_wm)
   VAR_3->lst.total_dead -= VAR_10;
  else
   VAR_3->lst.total_dark -= FUNC_9(VAR_3, VAR_10);

  VAR_3->lst.total_used -= VAR_3->leb_size - VAR_10;
 }

 if (VAR_5 != VAR_1) {
  VAR_5 = FUNC_0(VAR_5, 8);
  VAR_3->lst.total_free += VAR_5 - VAR_9->free;


  if (VAR_5 == VAR_3->leb_size) {
   if (VAR_9->free != VAR_3->leb_size)
    VAR_3->lst.empty_lebs += 1;
  } else if (VAR_9->free == VAR_3->leb_size)
   VAR_3->lst.empty_lebs -= 1;
  VAR_9->free = VAR_5;
 }

 if (VAR_6 != VAR_1) {
  VAR_6 = FUNC_0(VAR_6, 8);
  VAR_3->lst.total_dirty += VAR_6 - VAR_9->dirty;
  VAR_9->dirty = VAR_6;
 }

 if (VAR_7 != VAR_1) {

  if ((VAR_9->flags & VAR_0)) {
   if (!(VAR_7 & VAR_0))
    VAR_3->lst.idx_lebs -= 1;
  } else if (VAR_7 & VAR_0)
   VAR_3->lst.idx_lebs += 1;
  VAR_9->flags = VAR_7;
 }

 if (!(VAR_9->flags & VAR_0)) {
  int VAR_11;

  VAR_11 = VAR_9->free + VAR_9->dirty;
  if (VAR_11 < VAR_3->dead_wm)
   VAR_3->lst.total_dead += VAR_11;
  else
   VAR_3->lst.total_dark += FUNC_9(VAR_3, VAR_11);

  VAR_3->lst.total_used += VAR_3->leb_size - VAR_11;
 }

 if ((VAR_9->flags & VAR_2) && VAR_9->free == VAR_3->leb_size)
  VAR_3->lst.taken_empty_lebs += 1;

 FUNC_2(VAR_3, VAR_9);
 VAR_3->idx_gc_cnt += VAR_8;
 FUNC_7(&VAR_3->space_lock);
 return VAR_9;
}
