
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nextindex; int maxentry; } ;
struct TYPE_7__ {TYPE_1__ header; int * xad; } ;
typedef TYPE_3__ xtpage_t ;
typedef int xad_t ;
typedef int ulong ;
typedef int tid_t ;
struct xtsplit {int index; int flag; int * pxdlist; scalar_t__ addr; scalar_t__ len; scalar_t__ off; struct metapage* mp; } ;
struct TYPE_6__ {int offset; int length; } ;
struct xtlock {TYPE_2__ lwm; } ;
struct tlock {int lock; } ;
struct metapage {int dummy; } ;
struct inode {int dummy; } ;
struct btstack {int top; } ;
typedef scalar_t__ s64 ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct metapage*,struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct inode*,int ,scalar_t__,struct metapage*,TYPE_3__*,int) ;
 int VAR_4 ;
 int FUNC_2 (int *,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct metapage*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_6 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct inode*,scalar_t__) ;
 int FUNC_8 (struct inode*,scalar_t__) ;
 int FUNC_9 (char*,int ,scalar_t__) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (int ,struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct tlock* FUNC_16 (int ,struct inode*,struct metapage*,int) ;
 int FUNC_17 (struct inode*,scalar_t__,scalar_t__*,int*,struct btstack*,int ) ;
 int FUNC_18 (int ,struct inode*,struct xtsplit*,struct btstack*) ;

int FUNC_19(tid_t VAR_7,
      struct inode *VAR_8, int VAR_9, s64 VAR_10, s32 VAR_11, s64 * VAR_12,
      int VAR_13)
{
 int VAR_14 = 0;
 s64 VAR_15, VAR_16;
 struct metapage *VAR_17;
 xtpage_t *VAR_18;
 s64 VAR_19;
 int VAR_20, VAR_21;
 struct btstack VAR_22;
 struct xtsplit VAR_23;
 xad_t *VAR_24;
 int VAR_25;
 s64 VAR_26;
 struct tlock *VAR_27;
 struct xtlock *VAR_28;

 FUNC_9("xtInsert: nxoff:0x%lx nxlen:0x%x", (ulong) VAR_10, VAR_11);
 if ((VAR_14 = FUNC_17(VAR_8, VAR_10, &VAR_26, &VAR_25, &VAR_22, VAR_4)))
  return VAR_14;


 FUNC_1(VAR_8, VAR_22.top, VAR_19, VAR_17, VAR_18, VAR_20);



 if ((VAR_25 == 0) || (VAR_26 && (VAR_11 > VAR_26 - VAR_10))) {
  VAR_14 = -VAR_1;
  goto out;
 }






 if ((VAR_15 = *VAR_12) == 0) {
  if (VAR_20 > VAR_3) {
   VAR_24 = &VAR_18->xad[VAR_20 - 1];
   VAR_16 = FUNC_4(VAR_24) + FUNC_12(VAR_24) - 1;
  } else
   VAR_16 = 0;
  if ((VAR_14 = FUNC_7(VAR_8, VAR_11)))
   goto out;
  if ((VAR_14 = FUNC_5(VAR_8, VAR_16, (s64) VAR_11, &VAR_15))) {
   FUNC_8(VAR_8, VAR_11);
   goto out;
  }
 }




 VAR_9 |= VAR_2;







 VAR_21 = FUNC_11(VAR_18->header.nextindex);
 if (VAR_21 == FUNC_11(VAR_18->header.maxentry)) {
  VAR_23.mp = VAR_17;
  VAR_23.index = VAR_20;
  VAR_23.flag = VAR_9;
  VAR_23.off = VAR_10;
  VAR_23.len = VAR_11;
  VAR_23.addr = VAR_15;
  VAR_23.pxdlist = ((void*)0);
  if ((VAR_14 = FUNC_18(VAR_7, VAR_8, &VAR_23, &VAR_22))) {

   if (*VAR_12 == 0) {
    FUNC_6(VAR_8, VAR_15, (s64) VAR_11);
    FUNC_8(VAR_8, VAR_11);
   }
   return VAR_14;
  }

  *VAR_12 = VAR_15;
  return 0;
 }
 FUNC_0(VAR_17, VAR_8);


 if (VAR_20 < VAR_21)
  FUNC_13(&VAR_18->xad[VAR_20 + 1], &VAR_18->xad[VAR_20],
   (VAR_21 - VAR_20) * sizeof(xad_t));


 VAR_24 = &VAR_18->xad[VAR_20];
 FUNC_2(VAR_24, VAR_9, VAR_10, VAR_11, VAR_15);


 FUNC_10(&VAR_18->header.nextindex, 1);


 if (!FUNC_15(VAR_0, VAR_8)) {
  VAR_27 = FUNC_16(VAR_7, VAR_8, VAR_17, VAR_6 | VAR_5);
  VAR_28 = (struct xtlock *) & VAR_27->lock;
  VAR_28->lwm.offset =
      (VAR_28->lwm.offset) ? FUNC_14(VAR_20,
           (int)VAR_28->lwm.offset) : VAR_20;
  VAR_28->lwm.length =
      FUNC_11(VAR_18->header.nextindex) - VAR_28->lwm.offset;
 }

 *VAR_12 = VAR_15;

      out:

 FUNC_3(VAR_17);

 return VAR_14;
}
