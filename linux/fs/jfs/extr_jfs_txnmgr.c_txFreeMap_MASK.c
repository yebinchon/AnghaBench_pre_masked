
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flag; } ;
typedef TYPE_1__ xad_t ;
typedef int ulong ;
struct xdlistlock {int count; TYPE_1__* xdlist; } ;
struct tblock {int dummy; } ;
struct pxd_lock {TYPE_1__ pxd; } ;
struct maplock {int flag; } ;
struct inode {int i_sb; } ;
typedef scalar_t__ s64 ;
typedef TYPE_1__ pxd_t ;
struct TYPE_9__ {struct inode* ipbmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct inode*,int,scalar_t__,scalar_t__,struct tblock*) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_8(struct inode *VAR_6,
        struct maplock * VAR_7, struct tblock * VAR_8, int VAR_9)
{
 struct inode *VAR_10 = FUNC_0(VAR_6->i_sb)->ipbmap;
 struct xdlistlock *VAR_11;
 xad_t *VAR_12;
 s64 VAR_13;
 int VAR_14;
 struct pxd_lock *VAR_15;
 struct xdlistlock *VAR_16;
 pxd_t *VAR_17;
 int VAR_18;

 FUNC_5("txFreeMap: tblk:0x%p maplock:0x%p maptype:0x%x",
   VAR_8, VAR_7, VAR_9);




 if (VAR_9 == VAR_0 || VAR_9 == VAR_1) {
  if (VAR_7->flag & VAR_5) {
   VAR_11 = (struct xdlistlock *) VAR_7;
   VAR_12 = VAR_11->xdlist;
   for (VAR_18 = 0; VAR_18 < VAR_11->count; VAR_18++, VAR_12++) {
    if (!(VAR_12->flag & VAR_3)) {
     VAR_13 = FUNC_2(VAR_12);
     VAR_14 = FUNC_7(VAR_12);
     FUNC_4(VAR_10, 1, VAR_13,
           (s64) VAR_14, VAR_8);
     FUNC_5("freePMap: xaddr:0x%lx xlen:%d",
       (ulong) VAR_13, VAR_14);
    }
   }
  } else if (VAR_7->flag & VAR_4) {
   VAR_15 = (struct pxd_lock *) VAR_7;
   VAR_13 = FUNC_1(&VAR_15->pxd);
   VAR_14 = FUNC_6(&VAR_15->pxd);
   FUNC_4(VAR_10, 1, VAR_13, (s64) VAR_14,
         VAR_8);
   FUNC_5("freePMap: xaddr:0x%lx xlen:%d",
     (ulong) VAR_13, VAR_14);
  } else {

   VAR_16 = (struct xdlistlock *) VAR_7;
   VAR_17 = VAR_16->xdlist;
   for (VAR_18 = 0; VAR_18 < VAR_16->count; VAR_18++, VAR_17++) {
    VAR_13 = FUNC_1(VAR_17);
    VAR_14 = FUNC_6(VAR_17);
    FUNC_4(VAR_10, 1, VAR_13,
          (s64) VAR_14, VAR_8);
    FUNC_5("freePMap: xaddr:0x%lx xlen:%d",
      (ulong) VAR_13, VAR_14);
   }
  }
 }




 if (VAR_9 == VAR_1 || VAR_9 == VAR_2) {
  if (VAR_7->flag & VAR_5) {
   VAR_11 = (struct xdlistlock *) VAR_7;
   VAR_12 = VAR_11->xdlist;
   for (VAR_18 = 0; VAR_18 < VAR_11->count; VAR_18++, VAR_12++) {
    VAR_13 = FUNC_2(VAR_12);
    VAR_14 = FUNC_7(VAR_12);
    FUNC_3(VAR_6, VAR_13, (s64) VAR_14);
    VAR_12->flag = 0;
    FUNC_5("freeWMap: xaddr:0x%lx xlen:%d",
      (ulong) VAR_13, VAR_14);
   }
  } else if (VAR_7->flag & VAR_4) {
   VAR_15 = (struct pxd_lock *) VAR_7;
   VAR_13 = FUNC_1(&VAR_15->pxd);
   VAR_14 = FUNC_6(&VAR_15->pxd);
   FUNC_3(VAR_6, VAR_13, (s64) VAR_14);
   FUNC_5("freeWMap: xaddr:0x%lx xlen:%d",
     (ulong) VAR_13, VAR_14);
  } else {

   VAR_16 = (struct xdlistlock *) VAR_7;
   VAR_17 = VAR_16->xdlist;
   for (VAR_18 = 0; VAR_18 < VAR_16->count; VAR_18++, VAR_17++) {
    VAR_13 = FUNC_1(VAR_17);
    VAR_14 = FUNC_6(VAR_17);
    FUNC_3(VAR_6, VAR_13, (s64) VAR_14);
    FUNC_5("freeWMap: xaddr:0x%lx xlen:%d",
      (ulong) VAR_13, VAR_14);
   }
  }
 }
}
