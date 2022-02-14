
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wchar_t ;
struct metapage {int dummy; } ;
struct lv {int offset; int length; } ;
struct ldtentry {int next; int namlen; void* index; int * name; void* inumber; } ;
struct idtentry {int next; int namlen; int * name; } ;
struct dtslot {int next; int * name; } ;
struct dt_lock {size_t index; size_t maxcnt; struct lv* lv; } ;
struct component_name {int namlen; int * name; } ;
typedef size_t s8 ;
typedef int s64 ;
typedef int pxd_t ;
struct TYPE_9__ {int freelist; int flag; int nextindex; int freecnt; int self; } ;
struct TYPE_10__ {TYPE_2__ header; struct dtslot* slot; } ;
typedef TYPE_3__ dtpage_t ;
struct TYPE_8__ {scalar_t__ ip; int tid; int ino; } ;
struct TYPE_11__ {TYPE_1__ leaf; int xd; } ;
typedef TYPE_4__ ddata_t ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,scalar_t__,int ,int) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (size_t*,size_t*,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ,scalar_t__,int ,int ,int,struct metapage**,int *) ;
 int FUNC_9 (struct metapage*) ;
 scalar_t__ FUNC_10 (struct dt_lock*) ;

__attribute__((used)) static void FUNC_11(dtpage_t * VAR_6, int VAR_7, struct component_name * VAR_8,
     ddata_t * VAR_9, struct dt_lock ** VAR_10)
{
 struct dtslot *VAR_11, *VAR_12;
 struct ldtentry *VAR_13 = ((void*)0);
 struct idtentry *VAR_14 = ((void*)0);
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 wchar_t *VAR_20;
 __le16 *VAR_21;
 s8 *VAR_22;
 pxd_t *VAR_23;
 struct dt_lock *VAR_24 = *VAR_10;
 struct lv *VAR_25;
 int VAR_26, VAR_27;
 s64 VAR_28 = 0;
 struct metapage *VAR_29 = ((void*)0);

 VAR_17 = VAR_8->namlen;
 VAR_20 = VAR_8->name;


 VAR_15 = VAR_16 = VAR_6->header.freelist;
 VAR_11 = &VAR_6->slot[VAR_16];
 VAR_6->header.freelist = VAR_11->next;
 --VAR_6->header.freecnt;


 if (VAR_24->index >= VAR_24->maxcnt)
  VAR_24 = (struct dt_lock *) FUNC_10(VAR_24);

 VAR_25 = & VAR_24->lv[VAR_24->index];
 VAR_25->offset = VAR_15;


 if (VAR_6->header.flag & VAR_0) {
  VAR_13 = (struct ldtentry *) VAR_11;
  VAR_13->next = VAR_11->next;
  VAR_13->inumber = FUNC_4(VAR_9->leaf.ino);
  VAR_13->namlen = VAR_17;
  VAR_21 = VAR_13->name;
  if (VAR_9->leaf.ip) {
   VAR_18 = FUNC_7(VAR_17, VAR_3);
   if (!(VAR_6->header.flag & VAR_1))
    VAR_28 = FUNC_3(&VAR_6->header.self);
   VAR_13->index = FUNC_4(FUNC_2(VAR_9->leaf.tid,
         VAR_9->leaf.ip,
         VAR_28, VAR_7));
  } else
   VAR_18 = FUNC_7(VAR_17, VAR_4);
 } else {
  VAR_14 = (struct idtentry *) VAR_11;
  VAR_14->next = VAR_11->next;
  VAR_23 = (pxd_t *) VAR_14;
  *VAR_23 = VAR_9->xd;
  VAR_14->namlen = VAR_17;
  VAR_21 = VAR_14->name;
  VAR_18 = FUNC_7(VAR_17, VAR_2);
 }

 FUNC_1(VAR_21, VAR_20, VAR_18);

 VAR_27 = 1;
 VAR_26 = VAR_15;


 VAR_12 = VAR_11;
 VAR_17 -= VAR_18;
 while (VAR_17) {

  VAR_16 = VAR_6->header.freelist;
  VAR_12 = &VAR_6->slot[VAR_16];
  VAR_6->header.freelist = VAR_12->next;
  --VAR_6->header.freecnt;


  if (VAR_16 != VAR_26 + 1) {

   VAR_25->length = VAR_27;
   VAR_24->index++;


   if (VAR_24->index < VAR_24->maxcnt)
    VAR_25++;
   else {
    VAR_24 = (struct dt_lock *) FUNC_10(VAR_24);
    VAR_25 = & VAR_24->lv[0];
   }

   VAR_25->offset = VAR_16;
   VAR_27 = 0;
  }

  VAR_20 += VAR_18;
  VAR_18 = FUNC_7(VAR_17, VAR_5);
  FUNC_1(VAR_12->name, VAR_20, VAR_18);

  VAR_27++;
  VAR_26 = VAR_16;
  VAR_17 -= VAR_18;
 }


 VAR_25->length = VAR_27;
 VAR_24->index++;

 *VAR_10 = VAR_24;


 if (VAR_11 == VAR_12) {

  if (VAR_6->header.flag & VAR_0)
   VAR_13->next = -1;
  else
   VAR_14->next = -1;
 } else

  VAR_12->next = -1;


 VAR_22 = FUNC_0(VAR_6);
 VAR_19 = VAR_6->header.nextindex;
 if (VAR_7 < VAR_19) {
  FUNC_6(VAR_22 + VAR_7 + 1, VAR_22 + VAR_7, VAR_19 - VAR_7);

  if ((VAR_6->header.flag & VAR_0) && VAR_9->leaf.ip) {
   s64 VAR_30;





   VAR_29 = ((void*)0);
   for (VAR_27 = VAR_7 + 1; VAR_27 <= VAR_19; VAR_27++) {
    VAR_13 = (struct ldtentry *) & (VAR_6->slot[VAR_22[VAR_27]]);
    FUNC_8(VAR_9->leaf.tid, VAR_9->leaf.ip,
          FUNC_5(VAR_13->index), VAR_28, VAR_27,
          &VAR_29, &VAR_30);
   }
   if (VAR_29)
    FUNC_9(VAR_29);
  }
 }

 VAR_22[VAR_7] = VAR_15;


 ++VAR_6->header.nextindex;
}
