
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int flag; void* nextindex; void* maxentry; void* prev; void* next; int self; } ;
struct TYPE_10__ {TYPE_2__ header; int * xad; } ;
typedef TYPE_3__ xtpage_t ;
typedef int xad_t ;
typedef int tid_t ;
struct xtsplit {int index; int addr; int len; int off; int flag; struct pxdlist* pxdlist; struct metapage* mp; } ;
struct TYPE_8__ {size_t offset; int length; } ;
struct xtlock {TYPE_1__ lwm; } ;
struct tlock {int lock; } ;
struct pxdlist {size_t npxd; int * pxd; } ;
struct metapage {scalar_t__ data; } ;
struct inode {int dummy; } ;
typedef scalar_t__ s64 ;
typedef int pxd_t ;
struct TYPE_11__ {int split; } ;


 int FUNC_0 (struct metapage*,struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (struct inode*,scalar_t__,struct metapage*,int ,TYPE_3__*,int) ;
 TYPE_3__* FUNC_3 (struct inode*,struct metapage*) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (struct metapage*) ;
 scalar_t__ FUNC_6 (int *) ;
 void* FUNC_7 (size_t) ;
 void* FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct inode*,scalar_t__) ;
 int FUNC_10 (struct inode*,int) ;
 struct metapage* FUNC_11 (struct inode*,scalar_t__,int ,int) ;
 int FUNC_12 (char*,TYPE_3__*,...) ;
 size_t FUNC_13 (void*) ;
 scalar_t__ FUNC_14 (void*) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *,int *,int) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (int ,struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct tlock* FUNC_19 (int ,struct inode*,struct metapage*,int) ;
 TYPE_4__ VAR_10 ;

__attribute__((used)) static int
FUNC_20(tid_t VAR_11, struct inode *VAR_12,
     struct xtsplit * VAR_13, struct metapage ** VAR_14, s64 * VAR_15)
{
 int VAR_16 = 0;
 struct metapage *VAR_17;
 xtpage_t *VAR_18;
 struct metapage *VAR_19;
 xtpage_t *VAR_20;
 s64 VAR_21;
 struct metapage *VAR_22;
 xtpage_t *VAR_23;
 s64 VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 xad_t *VAR_30;
 struct pxdlist *VAR_31;
 pxd_t *VAR_32;
 struct tlock *VAR_33;
 struct xtlock *VAR_34 = ((void*)0), *VAR_35 = ((void*)0);
 int VAR_36 = 0;

 VAR_17 = VAR_13->mp;
 VAR_18 = FUNC_3(VAR_12, VAR_17);

 FUNC_1(VAR_10.split);

 VAR_31 = VAR_13->pxdlist;
 VAR_32 = &VAR_31->pxd[VAR_31->npxd];
 VAR_31->npxd++;
 VAR_21 = FUNC_6(VAR_32);


 VAR_16 = FUNC_9(VAR_12, FUNC_15(VAR_32));
 if (VAR_16)
  goto clean_up;

 VAR_36 += FUNC_15(VAR_32);




 VAR_19 = FUNC_11(VAR_12, VAR_21, VAR_4, 1);
 if (VAR_19 == ((void*)0)) {
  VAR_16 = -VAR_2;
  goto clean_up;
 }

 FUNC_12("xtSplitPage: ip:0x%p smp:0x%p rmp:0x%p", VAR_12, VAR_17, VAR_19);

 FUNC_0(VAR_19, VAR_12);




 VAR_20 = (xtpage_t *) VAR_19->data;
 VAR_20->header.self = *VAR_32;
 VAR_20->header.flag = VAR_18->header.flag & VAR_0;
 VAR_20->header.maxentry = VAR_18->header.maxentry;
 VAR_20->header.nextindex = FUNC_7(VAR_5);

 FUNC_0(VAR_17, VAR_12);

 if (!FUNC_18(VAR_1, VAR_12)) {



  VAR_33 = FUNC_19(VAR_11, VAR_12, VAR_19, VAR_9 | VAR_7);
  VAR_35 = (struct xtlock *) & VAR_33->lock;
  VAR_35->lwm.offset = VAR_5;



  VAR_33 = FUNC_19(VAR_11, VAR_12, VAR_17, VAR_9 | VAR_6);
  VAR_34 = (struct xtlock *) & VAR_33->lock;
 }




 VAR_24 = FUNC_14(VAR_18->header.next);
 VAR_20->header.next = FUNC_8(VAR_24);
 VAR_20->header.prev = FUNC_8(FUNC_6(&VAR_18->header.self));
 VAR_18->header.next = FUNC_8(VAR_21);

 VAR_25 = VAR_13->index;
 if (VAR_24 == 0 && VAR_25 == FUNC_13(VAR_18->header.maxentry)) {






  VAR_30 = &VAR_20->xad[VAR_5];
  FUNC_4(VAR_30, VAR_13->flag, VAR_13->off, VAR_13->len,
       VAR_13->addr);

  VAR_20->header.nextindex = FUNC_7(VAR_5 + 1);

  if (!FUNC_18(VAR_1, VAR_12)) {

   VAR_35->lwm.length = 1;
  }

  *VAR_14 = VAR_19;
  *VAR_15 = VAR_21;

  FUNC_12("xtSplitPage: sp:0x%p rp:0x%p", VAR_18, VAR_20);
  return 0;
 }
 if (VAR_24 != 0) {
  FUNC_2(VAR_12, VAR_24, VAR_22, VAR_4, VAR_23, VAR_16);
  if (VAR_16) {
   FUNC_5(VAR_19);
   goto clean_up;
  }

  FUNC_0(VAR_22, VAR_12);





  if (!FUNC_18(VAR_1, VAR_12))
   VAR_33 = FUNC_19(VAR_11, VAR_12, VAR_22, VAR_9 | VAR_8);

  VAR_23->header.prev = FUNC_8(VAR_21);





  FUNC_5(VAR_22);
 }




 VAR_26 = FUNC_13(VAR_18->header.maxentry);
 VAR_27 = VAR_26 >> 1;
 VAR_28 = VAR_26 - VAR_27;




 if (VAR_25 <= VAR_27) {

  FUNC_16(&VAR_20->xad[VAR_5], &VAR_18->xad[VAR_27],
   VAR_28 << VAR_3);


  if (VAR_25 < VAR_27)
   FUNC_16(&VAR_18->xad[VAR_25 + 1], &VAR_18->xad[VAR_25],
    (VAR_27 - VAR_25) << VAR_3);


  VAR_30 = &VAR_18->xad[VAR_25];
  FUNC_4(VAR_30, VAR_13->flag, VAR_13->off, VAR_13->len,
       VAR_13->addr);


  VAR_18->header.nextindex = FUNC_7(VAR_27 + 1);
  if (!FUNC_18(VAR_1, VAR_12)) {
   VAR_34->lwm.offset = (VAR_34->lwm.offset) ?
       FUNC_17(VAR_25, (int)VAR_34->lwm.offset) : VAR_25;
  }

  VAR_20->header.nextindex =
      FUNC_7(VAR_5 + VAR_28);
 }



 else {

  VAR_29 = VAR_25 - VAR_27;
  FUNC_16(&VAR_20->xad[VAR_5], &VAR_18->xad[VAR_27],
   VAR_29 << VAR_3);


  VAR_29 += VAR_5;
  VAR_30 = &VAR_20->xad[VAR_29];
  FUNC_4(VAR_30, VAR_13->flag, VAR_13->off, VAR_13->len,
       VAR_13->addr);


  if (VAR_25 < VAR_26)
   FUNC_16(&VAR_20->xad[VAR_29 + 1], &VAR_18->xad[VAR_25],
    (VAR_26 - VAR_25) << VAR_3);


  VAR_18->header.nextindex = FUNC_7(VAR_27);
  if (!FUNC_18(VAR_1, VAR_12)) {
   VAR_34->lwm.offset = (VAR_34->lwm.offset) ?
       FUNC_17(VAR_27, (int)VAR_34->lwm.offset) : VAR_27;
  }

  VAR_20->header.nextindex = FUNC_7(VAR_5 +
         VAR_28 + 1);
 }

 if (!FUNC_18(VAR_1, VAR_12)) {
  VAR_34->lwm.length = FUNC_13(VAR_18->header.nextindex) -
      VAR_34->lwm.offset;


  VAR_35->lwm.length = FUNC_13(VAR_20->header.nextindex) -
      VAR_5;
 }

 *VAR_14 = VAR_19;
 *VAR_15 = VAR_21;

 FUNC_12("xtSplitPage: sp:0x%p rp:0x%p", VAR_18, VAR_20);
 return VAR_16;

      clean_up:


 if (VAR_36)
  FUNC_10(VAR_12, VAR_36);

 return (VAR_16);
}
