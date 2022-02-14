
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int flag; int nextindex; int maxentry; } ;
struct TYPE_10__ {TYPE_2__ header; int * xad; } ;
typedef TYPE_3__ xtpage_t ;
typedef int xad_t ;
typedef int tid_t ;
struct xtsplit {int index; int len; int addr; int off; int flag; struct metapage* mp; struct pxdlist* pxdlist; } ;
struct TYPE_8__ {int offset; int length; } ;
struct xtlock {TYPE_1__ lwm; } ;
struct tlock {int lock; } ;
struct pxdlist {scalar_t__ maxnpxd; int * pxd; scalar_t__ npxd; } ;
struct metapage {int dummy; } ;
struct inode {int i_sb; int i_mode; } ;
struct btstack {int nsplit; } ;
struct btframe {int index; int bn; } ;
typedef int s64 ;
typedef int pxd_t ;
struct TYPE_12__ {int mode2; } ;
struct TYPE_11__ {int nbperpage; } ;


 int FUNC_0 (struct metapage*,struct inode*) ;
 struct btframe* FUNC_1 (struct btstack*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_7__* FUNC_2 (struct inode*) ;
 TYPE_6__* FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct inode*,int ,struct metapage*,int ,TYPE_3__*,int) ;
 TYPE_3__* FUNC_8 (struct inode*,struct metapage*) ;
 int FUNC_9 (int *,int ,int ,int,int ) ;
 int FUNC_10 (struct metapage*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct inode*,int ,int ,int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int *,int) ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,struct inode*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct tlock* FUNC_19 (int ,struct inode*,struct metapage*,int) ;
 int FUNC_20 (int ,struct inode*,struct xtsplit*,struct metapage**,int *) ;
 int FUNC_21 (int ,struct inode*,struct xtsplit*,struct metapage**) ;

__attribute__((used)) static int
FUNC_22(tid_t VAR_11,
   struct inode *VAR_12, struct xtsplit * VAR_13, struct btstack * VAR_14)
{
 int VAR_15 = 0;
 struct metapage *VAR_16;
 xtpage_t *VAR_17;
 struct metapage *VAR_18;
 s64 VAR_19;
 struct metapage *VAR_20;
 xtpage_t *VAR_21;
 s64 VAR_22;
 int VAR_23;
 int VAR_24;
 struct btframe *VAR_25;
 xad_t *VAR_26;
 s64 VAR_27;
 int VAR_28;
 int VAR_29;
 struct pxdlist VAR_30;
 pxd_t *VAR_31;
 struct tlock *VAR_32;
 struct xtlock *VAR_33;

 VAR_16 = VAR_13->mp;
 VAR_17 = FUNC_8(VAR_12, VAR_16);


 if ((VAR_17->header.flag & VAR_0) && (!FUNC_6(VAR_12->i_mode)) &&
     (FUNC_14(VAR_17->header.maxentry) < VAR_8) &&
     (FUNC_2(VAR_12)->mode2 & VAR_3)) {
  VAR_17->header.maxentry = FUNC_11(VAR_8);
  FUNC_2(VAR_12)->mode2 &= ~VAR_3;

  FUNC_0(VAR_16, VAR_12);







  VAR_23 = VAR_13->index;
  VAR_24 = FUNC_14(VAR_17->header.nextindex);
  if (VAR_23 < VAR_24)
   FUNC_15(&VAR_17->xad[VAR_23 + 1], &VAR_17->xad[VAR_23],
    (VAR_24 - VAR_23) * sizeof(xad_t));


  VAR_26 = &VAR_17->xad[VAR_23];
  FUNC_9(VAR_26, VAR_13->flag, VAR_13->off, VAR_13->len,
       VAR_13->addr);


  FUNC_13(&VAR_17->header.nextindex, 1);


  if (!FUNC_18(VAR_1, VAR_12)) {
   VAR_32 = FUNC_19(VAR_11, VAR_12, VAR_16, VAR_10 | VAR_9);
   VAR_33 = (struct xtlock *) & VAR_32->lock;
   VAR_33->lwm.offset = (VAR_33->lwm.offset) ?
       FUNC_16(VAR_23, (int)VAR_33->lwm.offset) : VAR_23;
   VAR_33->lwm.length =
       FUNC_14(VAR_17->header.nextindex) -
       VAR_33->lwm.offset;
  }

  return 0;
 }






 if (VAR_13->pxdlist == ((void*)0)) {
  VAR_29 = VAR_14->nsplit;
  VAR_13->pxdlist = &VAR_30;
  VAR_30.maxnpxd = VAR_30.npxd = 0;
  VAR_31 = &VAR_30.pxd[0];
  VAR_28 = FUNC_3(VAR_12->i_sb)->nbperpage;
  for (; VAR_29 > 0; VAR_29--, VAR_31++) {
   if ((VAR_15 = FUNC_12(VAR_12, (s64) 0, (s64) VAR_28, &VAR_27))
       == 0) {
    FUNC_4(VAR_31, VAR_27);
    FUNC_5(VAR_31, VAR_28);

    VAR_30.maxnpxd++;

    continue;
   }



   FUNC_10(VAR_16);
   return VAR_15;
  }
 }
 VAR_15 = (VAR_17->header.flag & VAR_0) ?
     FUNC_21(VAR_11, VAR_12, VAR_13, &VAR_18) :
     FUNC_20(VAR_11, VAR_12, VAR_13, &VAR_18, &VAR_19);

 FUNC_10(VAR_16);

 if (VAR_15)
  return -VAR_2;
 while ((VAR_25 = FUNC_1(VAR_14)) != ((void*)0)) {



  VAR_20 = VAR_18;
  VAR_22 = VAR_19;
  VAR_21 = FUNC_8(VAR_12, VAR_20);





  FUNC_7(VAR_12, VAR_25->bn, VAR_16, VAR_5, VAR_17, VAR_15);
  if (VAR_15) {
   FUNC_10(VAR_20);
   return VAR_15;
  }





  VAR_23 = VAR_25->index + 1;




  VAR_24 = FUNC_14(VAR_17->header.nextindex);



  if (VAR_24 == FUNC_14(VAR_17->header.maxentry)) {

   VAR_13->mp = VAR_16;
   VAR_13->index = VAR_23;
   VAR_13->flag = VAR_6;
   VAR_13->off = FUNC_17(&VAR_21->xad[VAR_7]);
   VAR_13->len = FUNC_3(VAR_12->i_sb)->nbperpage;
   VAR_13->addr = VAR_22;


   FUNC_10(VAR_20);





   VAR_15 = (VAR_17->header.flag & VAR_0) ?
       FUNC_21(VAR_11, VAR_12, VAR_13, &VAR_18) :
       FUNC_20(VAR_11, VAR_12, VAR_13, &VAR_18, &VAR_19);
   if (VAR_15) {
    FUNC_10(VAR_16);
    return VAR_15;
   }

   FUNC_10(VAR_16);

  }



  else {
   FUNC_0(VAR_16, VAR_12);




   if (VAR_23 < VAR_24)
    FUNC_15(&VAR_17->xad[VAR_23 + 1], &VAR_17->xad[VAR_23],
     (VAR_24 -
      VAR_23) << VAR_4);


   VAR_26 = &VAR_17->xad[VAR_23];
   FUNC_9(VAR_26, VAR_6,
        FUNC_17(&VAR_21->xad[VAR_7]),
        FUNC_3(VAR_12->i_sb)->nbperpage, VAR_22);


   FUNC_13(&VAR_17->header.nextindex, 1);


   if (!FUNC_18(VAR_1, VAR_12)) {
    VAR_32 = FUNC_19(VAR_11, VAR_12, VAR_16,
           VAR_10 | VAR_9);
    VAR_33 = (struct xtlock *) & VAR_32->lock;
    VAR_33->lwm.offset = (VAR_33->lwm.offset) ?
        FUNC_16(VAR_23, (int)VAR_33->lwm.offset) : VAR_23;
    VAR_33->lwm.length =
        FUNC_14(VAR_17->header.nextindex) -
        VAR_33->lwm.offset;
   }


   FUNC_10(VAR_16);


   break;
  }
 }


 FUNC_10(VAR_18);

 return 0;
}
