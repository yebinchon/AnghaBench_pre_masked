
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_wbuf {int used; int offs; int lnum; int io_mutex; int jhead; } ;
struct ubifs_lprops {int lnum; scalar_t__ dirty; scalar_t__ free; } ;
struct ubifs_info {int dead_wm; int leb_size; int dark_wm; int gc_lnum; int idx_gc; scalar_t__ ro_error; int ro_mount; int ro_media; TYPE_1__* jheads; } ;
struct TYPE_2__ {struct ubifs_wbuf wbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ubifs_info*,int) ;
 int FUNC_6 (struct ubifs_info*) ;
 int FUNC_7 (struct ubifs_info*) ;
 int FUNC_8 (struct ubifs_info*,struct ubifs_lprops*,int,int) ;
 int FUNC_9 (struct ubifs_info*,struct ubifs_lprops*) ;
 scalar_t__ FUNC_10 (struct ubifs_info*) ;
 int FUNC_11 (struct ubifs_info*,int ) ;
 int FUNC_12 (struct ubifs_info*,int) ;
 int FUNC_13 (struct ubifs_info*,int) ;
 int FUNC_14 (struct ubifs_wbuf*) ;

int FUNC_15(struct ubifs_info *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14 = VAR_9->dead_wm;
 struct ubifs_lprops VAR_15;
 struct ubifs_wbuf *VAR_16 = &VAR_9->jheads[VAR_3].wbuf;

 FUNC_6(VAR_9);
 FUNC_5(VAR_9, !VAR_9->ro_media && !VAR_9->ro_mount);

 if (FUNC_10(VAR_9))
  return -VAR_0;

 FUNC_3(&VAR_16->io_mutex, VAR_16->jhead);

 if (VAR_9->ro_error) {
  VAR_13 = -VAR_2;
  goto out_unlock;
 }


 FUNC_5(VAR_9, !VAR_16->used);

 for (VAR_11 = 0; ; VAR_11++) {
  int VAR_17, VAR_18;

  FUNC_0();


  if (FUNC_10(VAR_9)) {
   VAR_13 = -VAR_0;
   break;
  }

  if (VAR_11 > VAR_8 && !FUNC_2(&VAR_9->idx_gc)) {




   FUNC_1("soft limit, some index LEBs GC'ed, -EAGAIN");
   FUNC_7(VAR_9);
   VAR_13 = -VAR_0;
   break;
  }

  if (VAR_11 > VAR_4) {




   FUNC_1("hard limit, -ENOSPC");
   VAR_13 = -VAR_1;
   break;
  }
  VAR_13 = FUNC_8(VAR_9, &VAR_15, VAR_14, VAR_10 ? 0 : 1);
  if (VAR_13) {
   if (VAR_13 == -VAR_1)
    FUNC_1("no more dirty LEBs");
   break;
  }

  FUNC_1("found LEB %d: free %d, dirty %d, sum %d (min. space %d)",
         VAR_15.lnum, VAR_15.free, VAR_15.dirty, VAR_15.free + VAR_15.dirty,
         VAR_14);

  VAR_17 = VAR_9->leb_size - VAR_16->offs - VAR_16->used;
  if (VAR_16->lnum == -1)
   VAR_17 = 0;

  VAR_13 = FUNC_9(VAR_9, &VAR_15);
  if (VAR_13 < 0) {
   if (VAR_13 == -VAR_0) {






    VAR_12 = FUNC_12(VAR_9, VAR_15.lnum);
    if (VAR_12)
     VAR_13 = VAR_12;
    break;
   }
   goto out;
  }

  if (VAR_13 == VAR_5) {

   FUNC_1("LEB %d freed, return", VAR_15.lnum);
   VAR_13 = VAR_15.lnum;
   break;
  }

  if (VAR_13 == VAR_6) {






   FUNC_1("indexing LEB %d freed, continue", VAR_15.lnum);
   continue;
  }

  FUNC_5(VAR_9, VAR_13 == VAR_7);
  VAR_18 = VAR_9->leb_size - VAR_16->offs - VAR_16->used;
  FUNC_1("LEB %d retained, freed %d bytes", VAR_15.lnum,
         VAR_18 - VAR_17);

  if (VAR_18 > VAR_17) {

   VAR_14 >>= 1;
   if (VAR_14 < VAR_9->dead_wm)
    VAR_14 = VAR_9->dead_wm;
   continue;
  }

  FUNC_1("did not make progress");
  if (VAR_11 < VAR_8) {
   FUNC_1("try again");
   continue;
  }

  VAR_14 <<= 1;
  if (VAR_14 > VAR_9->dark_wm)
   VAR_14 = VAR_9->dark_wm;
  FUNC_1("set min. space to %d", VAR_14);
 }

 if (VAR_13 == -VAR_1 && !FUNC_2(&VAR_9->idx_gc)) {
  FUNC_1("no space, some index LEBs GC'ed, -EAGAIN");
  FUNC_7(VAR_9);
  VAR_13 = -VAR_0;
 }

 VAR_12 = FUNC_14(VAR_16);
 if (!VAR_12)
  VAR_12 = FUNC_11(VAR_9, VAR_9->gc_lnum);
 if (VAR_12) {
  VAR_13 = VAR_12;
  goto out;
 }
out_unlock:
 FUNC_4(&VAR_16->io_mutex);
 return VAR_13;

out:
 FUNC_5(VAR_9, VAR_13 < 0);
 FUNC_5(VAR_9, VAR_13 != -VAR_1 && VAR_13 != -VAR_0);
 FUNC_14(VAR_16);
 FUNC_13(VAR_9, VAR_13);
 FUNC_4(&VAR_16->io_mutex);
 FUNC_12(VAR_9, VAR_15.lnum);
 return VAR_13;
}
