
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u8 ;
typedef int tid_t ;
struct tlock {int lock; scalar_t__ data; } ;
struct pxdlist {size_t npxd; int * pxd; } ;
struct metapage {int lock; scalar_t__ data; } ;
struct lv {int offset; int length; } ;
struct ldtentry {int index; int namlen; } ;
struct inode {int lock; scalar_t__ data; } ;
struct idtentry {int namlen; } ;
struct dtsplit {int index; int nslot; int data; int key; struct pxdlist* pxdlist; struct tlock* mp; } ;
struct dtslot {int next; } ;
struct dt_lock {size_t index; size_t maxcnt; struct lv* lv; } ;
typedef scalar_t__ s64 ;
typedef int pxd_t ;
struct TYPE_10__ {int flag; int nextindex; int stblindex; int maxslot; int freelist; int freecnt; void* prev; void* next; int self; } ;
struct TYPE_11__ {TYPE_1__ header; struct dtslot* slot; } ;
typedef TYPE_2__ dtpage_t ;


 int FUNC_0 (int) ;


 int FUNC_1 (struct tlock*,struct tlock*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct tlock*) ;
 int FUNC_3 (struct tlock*,scalar_t__,struct tlock*,int,TYPE_2__*,int) ;
 size_t* FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (struct tlock*,struct tlock*) ;
 int FUNC_6 (struct tlock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (int *) ;
 void* FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct tlock*) ;
 int FUNC_13 (struct tlock*,int ) ;
 int FUNC_14 (TYPE_2__*,int,int ,int ,struct dt_lock**) ;
 int FUNC_15 (TYPE_2__*,int,TYPE_2__*,struct dt_lock**,struct dt_lock**,scalar_t__) ;
 struct tlock* FUNC_16 (struct tlock*,scalar_t__,int,int) ;
 int FUNC_17 (char*,struct tlock*,struct tlock*,struct tlock*) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (void*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,struct tlock*,int ,scalar_t__,int,struct tlock**,scalar_t__*) ;
 int FUNC_22 (struct tlock*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_23 (struct dt_lock*) ;
 struct tlock* FUNC_24 (int ,struct tlock*,struct tlock*,int) ;

__attribute__((used)) static int FUNC_25(tid_t VAR_8, struct inode *VAR_9, struct dtsplit * VAR_10,
     struct metapage ** VAR_11, dtpage_t ** VAR_12, pxd_t * VAR_13)
{
 int VAR_14 = 0;
 struct metapage *VAR_15;
 dtpage_t *VAR_16;
 struct metapage *VAR_17;
 dtpage_t *VAR_18;
 s64 VAR_19;
 struct metapage *VAR_20;
 dtpage_t *VAR_21;
 s64 VAR_22;
 struct pxdlist *VAR_23;
 pxd_t *VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 struct ldtentry *VAR_32;
 struct idtentry *VAR_33;
 u8 *VAR_34;
 struct dtslot *VAR_35;
 int VAR_36, VAR_37;
 int VAR_38;
 struct dt_lock *VAR_39, *VAR_40;
 struct tlock *VAR_41;
 struct dt_lock *VAR_42;
 struct lv *VAR_43, *VAR_44, *VAR_45;


 VAR_15 = VAR_10->mp;
 VAR_16 = FUNC_5(VAR_9, VAR_15);




 VAR_23 = VAR_10->pxdlist;
 VAR_24 = &VAR_23->pxd[VAR_23->npxd];
 VAR_23->npxd++;
 VAR_19 = FUNC_10(VAR_24);
 VAR_17 = FUNC_16(VAR_9, VAR_19, VAR_3, 1);
 if (VAR_17 == ((void*)0))
  return -VAR_1;


 VAR_14 = FUNC_13(VAR_9, FUNC_20(VAR_24));
 if (VAR_14) {
  FUNC_22(VAR_17);
  return VAR_14;
 }

 FUNC_17("dtSplitPage: ip:0x%p smp:0x%p rmp:0x%p", VAR_9, VAR_15, VAR_17);

 FUNC_1(VAR_17, VAR_9);



 VAR_41 = FUNC_24(VAR_8, VAR_9, VAR_17, VAR_4 | VAR_6);
 VAR_40 = (struct dt_lock *) & VAR_41->lock;

 VAR_18 = (dtpage_t *) VAR_17->data;
 *VAR_12 = VAR_18;
 VAR_18->header.self = *VAR_24;

 FUNC_1(VAR_15, VAR_9);





 VAR_41 = FUNC_24(VAR_8, VAR_9, VAR_15, VAR_4 | VAR_5);
 VAR_39 = (struct dt_lock *) & VAR_41->lock;


 FUNC_0(VAR_39->index == 0);
 VAR_43 = & VAR_39->lv[0];
 VAR_43->offset = 0;
 VAR_43->length = 1;
 VAR_39->index++;




 VAR_22 = FUNC_19(VAR_16->header.next);
 VAR_18->header.next = FUNC_11(VAR_22);
 VAR_18->header.prev = FUNC_11(FUNC_10(&VAR_16->header.self));
 VAR_16->header.next = FUNC_11(VAR_19);




 VAR_18->header.flag = VAR_16->header.flag;


 VAR_18->header.nextindex = 0;
 VAR_18->header.stblindex = 1;

 VAR_38 = VAR_3 >> VAR_2;
 VAR_18->header.maxslot = VAR_38;
 VAR_37 = (VAR_38 + 31) >> VAR_2;


 VAR_36 = VAR_18->header.stblindex + VAR_37;
 VAR_18->header.freelist = VAR_36;
 VAR_18->header.freecnt = VAR_18->header.maxslot - VAR_36;
 if (VAR_22 == 0 && VAR_10->index == VAR_16->header.nextindex) {

  VAR_44 = & VAR_40->lv[VAR_40->index];
  VAR_44->offset = 0;
  VAR_44->length = 2;
  VAR_40->index++;




  VAR_35 = &VAR_18->slot[VAR_36];
  for (VAR_36++; VAR_36 < VAR_18->header.maxslot; VAR_35++, VAR_36++)
   VAR_35->next = VAR_36;
  VAR_35->next = -1;


  FUNC_14(VAR_18, 0, VAR_10->key, VAR_10->data, &VAR_40);

  goto out;
 }
 if (VAR_22 != 0) {
  FUNC_3(VAR_9, VAR_22, VAR_20, VAR_3, VAR_21, VAR_14);
  if (VAR_14) {
   FUNC_12(VAR_17);
   return VAR_14;
  }

  FUNC_1(VAR_20, VAR_9);



  VAR_41 = FUNC_24(VAR_8, VAR_9, VAR_20, VAR_4 | VAR_7);
  FUNC_17("dtSplitPage: tlck = 0x%p, ip = 0x%p, mp=0x%p",
   VAR_41, VAR_9, VAR_20);
  VAR_42 = (struct dt_lock *) & VAR_41->lock;


  VAR_45 = & VAR_42->lv[VAR_42->index];
  VAR_45->offset = 0;
  VAR_45->length = 1;
  VAR_42->index++;

  VAR_21->header.prev = FUNC_11(VAR_19);

  FUNC_6(VAR_20);
 }




 VAR_25 = VAR_10->index;
 VAR_27 = (VAR_3 >> VAR_2) >> 1;
 VAR_28 = 0;







 VAR_34 = (u8 *) & VAR_16->slot[VAR_16->header.stblindex];
 VAR_26 = VAR_16->header.nextindex;
 for (VAR_29 = VAR_30 = 0; VAR_29 < VAR_26; ++VAR_30) {
  if (VAR_30 == VAR_25)

   VAR_38 = VAR_10->nslot;
  else {
   VAR_31 = VAR_34[VAR_29];
   switch (VAR_16->header.flag & VAR_0) {
   case 128:
    VAR_32 = (struct ldtentry *) & VAR_16->slot[VAR_31];
    if (FUNC_2(VAR_9))
     VAR_38 = FUNC_8(VAR_32->namlen);
    else
     VAR_38 = FUNC_9(VAR_32->
          namlen);
    break;

   case 129:
    VAR_33 = (struct idtentry *) & VAR_16->slot[VAR_31];
    VAR_38 = FUNC_7(VAR_33->namlen);
    break;

   default:
    break;
   }

   ++VAR_29;
  }

  VAR_28 += VAR_38;
  if (VAR_28 >= VAR_27)
   break;
 }
 VAR_44 = & VAR_40->lv[VAR_40->index];
 VAR_44->offset = 0;
 VAR_44->length = 5;
 VAR_40->index++;

 FUNC_15(VAR_16, VAR_29, VAR_18, &VAR_39, &VAR_40, FUNC_2(VAR_9));

 VAR_16->header.nextindex = VAR_29;




 VAR_36 = VAR_18->header.freelist;
 VAR_35 = &VAR_18->slot[VAR_36];
 for (VAR_36++; VAR_36 < VAR_18->header.maxslot; VAR_35++, VAR_36++)
  VAR_35->next = VAR_36;
 VAR_35->next = -1;




 if ((VAR_18->header.flag & 128) && FUNC_2(VAR_9)) {
  s64 VAR_46;

  VAR_20 = ((void*)0);
  VAR_34 = FUNC_4(VAR_18);
  for (VAR_38 = 0; VAR_38 < VAR_18->header.nextindex; VAR_38++) {
   VAR_32 = (struct ldtentry *) & VAR_18->slot[VAR_34[VAR_38]];
   FUNC_21(VAR_8, VAR_9, FUNC_18(VAR_32->index),
         VAR_19, VAR_38, &VAR_20, &VAR_46);
  }
  if (VAR_20)
   FUNC_22(VAR_20);
 }




 if (VAR_25 <= VAR_30) {

  FUNC_14(VAR_16, VAR_25, VAR_10->key, VAR_10->data, &VAR_39);


  if (VAR_39->index >= VAR_39->maxcnt)
   VAR_39 = (struct dt_lock *) FUNC_23(VAR_39);
  VAR_43 = & VAR_39->lv[VAR_39->index];
  VAR_38 = VAR_25 >> VAR_2;
  VAR_43->offset = VAR_16->header.stblindex + VAR_38;
  VAR_43->length =
      ((VAR_16->header.nextindex - 1) >> VAR_2) - VAR_38 + 1;
  VAR_39->index++;
 }



 else {

  VAR_25 -= VAR_29;


  FUNC_14(VAR_18, VAR_25, VAR_10->key, VAR_10->data, &VAR_40);
 }

      out:
 *VAR_11 = VAR_17;
 *VAR_13 = *VAR_24;

 return VAR_14;
}
