
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tid_t ;
struct tlock {int lock; } ;
struct pxdlist {int maxnpxd; int npxd; int * pxd; } ;
struct metapage {int dummy; } ;
struct lv {int length; scalar_t__ offset; } ;
struct jfs_sb_info {int bsize; int l2bsize; int nbperpage; int mntflag; int ipbmap; } ;
struct inode {int i_size; int i_sb; } ;
struct dtsplit {int nslot; int index; struct component_name* key; struct metapage* mp; struct pxdlist* pxdlist; TYPE_3__* data; } ;
struct dt_lock {scalar_t__ index; struct lv* lv; } ;
struct component_name {size_t namlen; int * name; int * member_1; int member_0; } ;
struct btstack {int nsplit; } ;
struct btframe {int index; int bn; } ;
typedef scalar_t__ s64 ;
typedef int pxd_t ;
struct TYPE_12__ {int flag; int freecnt; int nextindex; scalar_t__ stblindex; int prev; int self; } ;
struct TYPE_13__ {TYPE_1__ header; } ;
typedef TYPE_2__ dtpage_t ;
struct TYPE_14__ {int xd; } ;
typedef TYPE_3__ ddata_t ;


 int FUNC_0 (int) ;


 int FUNC_1 (struct metapage*,struct inode*) ;
 struct btframe* FUNC_2 (struct btstack*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct inode*,int ,struct metapage*,int,TYPE_2__*,int) ;
 TYPE_2__* FUNC_5 (struct inode*,struct metapage*) ;
 int FUNC_6 (struct metapage*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct jfs_sb_info* FUNC_7 (int ) ;
 int VAR_7 ;
 int FUNC_8 (size_t) ;
 int VAR_8 ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*,int ,TYPE_2__*,int ,struct component_name*,int) ;
 int FUNC_13 (struct component_name*) ;
 int FUNC_14 (struct inode*,int ,scalar_t__,scalar_t__*) ;
 int FUNC_15 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_16 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_17 (struct inode*,int) ;
 int FUNC_18 (struct inode*,int) ;
 int FUNC_19 (int ,struct inode*,struct dtsplit*,struct btstack*) ;
 int FUNC_20 (TYPE_2__*,int ,struct component_name*,int) ;
 int FUNC_21 (TYPE_2__*,int,struct component_name*,TYPE_3__*,struct dt_lock**) ;
 int FUNC_22 (int ,struct inode*,struct dtsplit*,struct metapage**,TYPE_2__**,int *) ;
 int FUNC_23 (int ,struct inode*,struct dtsplit*,struct metapage**) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (int *) ;
 int * FUNC_26 (scalar_t__,int,int ) ;
 int FUNC_27 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 struct tlock* FUNC_28 (int ,struct inode*,struct metapage*,int) ;

__attribute__((used)) static int FUNC_29(tid_t VAR_11,
   struct inode *VAR_12, struct dtsplit * VAR_13, struct btstack * VAR_14)
{
 struct jfs_sb_info *VAR_15 = FUNC_7(VAR_12->i_sb);
 int VAR_16 = 0;
 struct metapage *VAR_17;
 dtpage_t *VAR_18;
 struct metapage *VAR_19;
 dtpage_t *VAR_20;
 pxd_t VAR_21;
 struct metapage *VAR_22;
 dtpage_t *VAR_23;
 int VAR_24;
 struct btframe *VAR_25;
 s64 VAR_26, VAR_27;
 int VAR_28, VAR_29;
 struct pxdlist VAR_30;
 pxd_t *VAR_31;
 struct component_name VAR_32 = { 0, ((void*)0) };
 ddata_t *VAR_33 = VAR_13->data;
 int VAR_34;
 struct dt_lock *VAR_35;
 struct tlock *VAR_36;
 struct lv *VAR_37;
 int VAR_38 = 0;


 VAR_17 = VAR_13->mp;
 VAR_18 = FUNC_5(VAR_12, VAR_17);

 VAR_32.name = FUNC_26(VAR_5 + 2, sizeof(wchar_t), VAR_4);
 if (!VAR_32.name) {
  FUNC_6(VAR_17);
  VAR_16 = -VAR_3;
  goto dtSplitUp_Exit;
 }
 if (VAR_18->header.flag & VAR_0) {



  VAR_28 = 1;
  VAR_34 = VAR_15->bsize >> VAR_7;
  VAR_34 -= (VAR_34 + 31) >> VAR_7;
  VAR_34 -= VAR_2 - VAR_18->header.freecnt;
  if (VAR_34 <= VAR_13->nslot)
   VAR_28++;
  if ((VAR_16 = FUNC_14(VAR_12, 0, (s64) VAR_28, &VAR_26))) {
   FUNC_6(VAR_17);
   goto freeKeyName;
  }

  VAR_30.maxnpxd = 1;
  VAR_30.npxd = 0;
  VAR_31 = &VAR_30.pxd[0];
  FUNC_9(VAR_31, VAR_26);
  FUNC_10(VAR_31, VAR_28);
  VAR_13->pxdlist = &VAR_30;
  VAR_16 = FUNC_23(VAR_11, VAR_12, VAR_13, &VAR_19);

  if (VAR_16)
   FUNC_15(VAR_12, VAR_26, VAR_28);
  else
   FUNC_6(VAR_19);

  FUNC_6(VAR_17);

  if (!FUNC_3(VAR_12))
   VAR_12->i_size = VAR_28 << VAR_15->l2bsize;

  goto freeKeyName;
 }







 VAR_31 = &VAR_18->header.self;
 VAR_28 = FUNC_27(VAR_31);
 VAR_29 = VAR_28 << VAR_15->l2bsize;
 if (VAR_29 < VAR_8) {
  VAR_26 = FUNC_11(VAR_31);
  VAR_34 = VAR_29 >> VAR_7;
  VAR_34 -= (VAR_34 + 31) >> VAR_7;
  if ((VAR_34 + VAR_18->header.freecnt) <= VAR_13->nslot)
   VAR_34 = VAR_28 + (VAR_28 << 1);
  else
   VAR_34 = VAR_28;


  VAR_16 = FUNC_17(VAR_12, VAR_34);
  if (VAR_16)
   goto extendOut;
  VAR_38 += VAR_34;

  if ((VAR_16 = FUNC_16(VAR_15->ipbmap, VAR_26, (s64) VAR_28,
        (s64) VAR_34, &VAR_27)))
   goto extendOut;

  VAR_30.maxnpxd = 1;
  VAR_30.npxd = 0;
  VAR_31 = &VAR_30.pxd[0];
  FUNC_9(VAR_31, VAR_27);
  FUNC_10(VAR_31, VAR_28 + VAR_34);
  VAR_13->pxdlist = &VAR_30;
  if ((VAR_16 = FUNC_19(VAR_11, VAR_12, VAR_13, VAR_14))) {
   VAR_27 = FUNC_11(VAR_31);
   if (VAR_26 != VAR_27) {

    VAR_28 = FUNC_27(VAR_31);
    FUNC_15(VAR_12, VAR_27, (s64) VAR_28);
   } else {

    VAR_28 = FUNC_27(VAR_31) - VAR_34;
    VAR_26 = FUNC_11(VAR_31) + VAR_28;
    FUNC_15(VAR_12, VAR_26, (s64) VAR_34);
   }
  } else if (!FUNC_3(VAR_12))
   VAR_12->i_size = FUNC_27(VAR_31) << VAR_15->l2bsize;


       extendOut:
  FUNC_6(VAR_17);
  goto freeKeyName;
 }
 VAR_34 = VAR_14->nsplit;
 VAR_30.maxnpxd = VAR_30.npxd = 0;
 VAR_28 = VAR_15->nbperpage;
 for (VAR_31 = VAR_30.pxd; VAR_34 > 0; VAR_34--, VAR_31++) {
  if ((VAR_16 = FUNC_14(VAR_12, 0, (s64) VAR_28, &VAR_26)) == 0) {
   FUNC_9(VAR_31, VAR_26);
   FUNC_10(VAR_31, VAR_28);
   VAR_30.maxnpxd++;
   continue;
  }

  FUNC_6(VAR_17);


  goto splitOut;
 }

 VAR_13->pxdlist = &VAR_30;
 if ((VAR_16 = FUNC_22(VAR_11, VAR_12, VAR_13, &VAR_19, &VAR_20, &VAR_21))) {
  FUNC_6(VAR_17);


  goto splitOut;
 }

 if (!FUNC_3(VAR_12))
  VAR_12->i_size += VAR_8;
 while ((VAR_25 = FUNC_2(VAR_14)) != ((void*)0)) {



  VAR_22 = VAR_17;
  VAR_23 = VAR_18;





  FUNC_4(VAR_12, VAR_25->bn, VAR_17, VAR_8, VAR_18, VAR_16);
  if (VAR_16) {
   FUNC_6(VAR_22);
   FUNC_6(VAR_19);
   goto splitOut;
  }





  VAR_24 = VAR_25->index + 1;
  switch (VAR_20->header.flag & VAR_1) {
  case 128:





   if ((VAR_18->header.flag & VAR_0 && VAR_24 > 1) ||
       VAR_18->header.prev != 0 || VAR_24 > 1) {

    VAR_16 = FUNC_12(VAR_23,
       VAR_23->header.nextindex-1,
       VAR_20, 0, &VAR_32,
       VAR_15->mntflag);
    if (VAR_16) {
     FUNC_6(VAR_22);
     FUNC_6(VAR_19);
     FUNC_6(VAR_17);
     goto splitOut;
    }
   } else {




    FUNC_20(VAR_20, 0, &VAR_32, VAR_15->mntflag);
    VAR_32.name[VAR_32.namlen] = 0;

    if ((VAR_15->mntflag & VAR_6) == VAR_6)
     FUNC_13(&VAR_32);
   }

   VAR_34 = FUNC_8(VAR_32.namlen);
   break;

  case 129:
   FUNC_20(VAR_20, 0, &VAR_32, VAR_15->mntflag);
   VAR_34 = FUNC_8(VAR_32.namlen);
   break;

  default:
   FUNC_24("dtSplitUp(): UFO!");
   break;
  }


  FUNC_6(VAR_22);




  VAR_33->xd = VAR_21;




  if (VAR_34 > VAR_18->header.freecnt) {

   VAR_13->mp = VAR_17;
   VAR_13->index = VAR_24;
   VAR_13->nslot = VAR_34;
   VAR_13->key = &VAR_32;



   FUNC_6(VAR_19);





   VAR_16 = (VAR_18->header.flag & VAR_0) ?
       FUNC_23(VAR_11, VAR_12, VAR_13, &VAR_19) :
       FUNC_22(VAR_11, VAR_12, VAR_13, &VAR_19, &VAR_20, &VAR_21);
   if (VAR_16) {
    FUNC_6(VAR_17);
    goto splitOut;
   }


  }



  else {
   FUNC_1(VAR_17, VAR_12);



   VAR_36 = FUNC_28(VAR_11, VAR_12, VAR_17, VAR_9 | VAR_10);
   VAR_35 = (struct dt_lock *) & VAR_36->lock;
   FUNC_0(VAR_35->index == 0);
   VAR_37 = & VAR_35->lv[0];


   VAR_37->offset = 0;
   VAR_37->length = 1;
   VAR_35->index++;


   if (!(VAR_18->header.flag & VAR_0)) {
    VAR_37++;
    VAR_34 = VAR_24 >> VAR_7;
    VAR_37->offset = VAR_18->header.stblindex + VAR_34;
    VAR_37->length =
        ((VAR_18->header.nextindex -
          1) >> VAR_7) - VAR_34 + 1;
    VAR_35->index++;
   }

   FUNC_21(VAR_18, VAR_24, &VAR_32, VAR_33, &VAR_35);


   break;
  }
 }


 FUNC_6(VAR_17);
 FUNC_6(VAR_19);




      splitOut:
 VAR_34 = VAR_30.npxd;
 VAR_31 = &VAR_30.pxd[VAR_34];
 for (; VAR_34 < VAR_30.maxnpxd; VAR_34++, VAR_31++)
  FUNC_15(VAR_12, FUNC_11(VAR_31), (s64) FUNC_27(VAR_31));

      freeKeyName:
 FUNC_25(VAR_32.name);


 if (VAR_16 && VAR_38)
  FUNC_18(VAR_12, VAR_38);

      dtSplitUp_Exit:

 return VAR_16;
}
