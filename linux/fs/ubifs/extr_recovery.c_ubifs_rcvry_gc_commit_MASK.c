
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_wbuf {int lnum; scalar_t__ offs; int io_mutex; int jhead; } ;
struct ubifs_lprops {int flags; scalar_t__ free; scalar_t__ dirty; int lnum; } ;
struct ubifs_info {int gc_lnum; scalar_t__ leb_size; TYPE_1__* jheads; } ;
struct TYPE_2__ {struct ubifs_wbuf wbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ubifs_info*,int) ;
 int FUNC_5 (struct ubifs_info*,char*,int) ;
 int FUNC_6 (struct ubifs_info*,struct ubifs_lprops*,scalar_t__,int) ;
 int FUNC_7 (struct ubifs_info*,struct ubifs_lprops*) ;
 int FUNC_8 (struct ubifs_info*,int) ;
 int FUNC_9 (struct ubifs_info*) ;
 int FUNC_10 (struct ubifs_wbuf*) ;

int FUNC_11(struct ubifs_info *VAR_6)
{
 struct ubifs_wbuf *VAR_7 = &VAR_6->jheads[VAR_3].wbuf;
 struct ubifs_lprops VAR_8;
 int VAR_9;

 FUNC_0("GC head LEB %d, offs %d", VAR_7->lnum, VAR_7->offs);

 VAR_6->gc_lnum = -1;
 if (VAR_7->lnum == -1 || VAR_7->offs == VAR_6->leb_size)
  return FUNC_1(VAR_6);

 VAR_9 = FUNC_6(VAR_6, &VAR_8, VAR_7->offs, 2);
 if (VAR_9) {
  if (VAR_9 != -VAR_2)
   return VAR_9;

  FUNC_0("could not find a dirty LEB");
  return FUNC_1(VAR_6);
 }

 FUNC_4(VAR_6, !(VAR_8.flags & VAR_5));
 FUNC_4(VAR_6, VAR_8.free + VAR_8.dirty >= VAR_7->offs);





 FUNC_0("committing");
 VAR_9 = FUNC_9(VAR_6);
 if (VAR_9)
  return VAR_9;

 FUNC_0("GC'ing LEB %d", VAR_8.lnum);
 FUNC_2(&VAR_7->io_mutex, VAR_7->jhead);
 VAR_9 = FUNC_7(VAR_6, &VAR_8);
 if (VAR_9 >= 0) {
  int VAR_10 = FUNC_10(VAR_7);

  if (VAR_10)
   VAR_9 = VAR_10;
 }
 FUNC_3(&VAR_7->io_mutex);
 if (VAR_9 < 0) {
  FUNC_5(VAR_6, "GC failed, error %d", VAR_9);
  if (VAR_9 == -VAR_0)
   VAR_9 = -VAR_1;
  return VAR_9;
 }

 FUNC_4(VAR_6, VAR_9 == VAR_4);
 if (VAR_9 != VAR_4)
  return -VAR_1;

 VAR_9 = FUNC_8(VAR_6, VAR_6->gc_lnum);
 if (VAR_9)
  return VAR_9;

 FUNC_0("allocated LEB %d for GC", VAR_8.lnum);
 return 0;
}
