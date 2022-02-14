
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lv {int offset; int length; } ;
struct ldtentry {int namlen; int next; int index; } ;
struct idtentry {int namlen; int next; int index; } ;
struct dtslot {int next; int cnt; int name; } ;
struct dt_lock {size_t index; size_t maxcnt; struct lv* lv; } ;
typedef int s8 ;
struct TYPE_5__ {size_t stblindex; int freelist; int nextindex; int flag; int freecnt; } ;
struct TYPE_6__ {TYPE_1__ header; struct dtslot* slot; } ;
typedef TYPE_2__ dtpage_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct ldtentry*,struct ldtentry*,int) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct dt_lock*) ;

__attribute__((used)) static void FUNC_4(dtpage_t * VAR_5, int VAR_6, dtpage_t * VAR_7,
   struct dt_lock ** VAR_8, struct dt_lock ** VAR_9,
   int VAR_10)
{
 int VAR_11, VAR_12;
 int VAR_13;
 int VAR_14;
 s8 *VAR_15, *VAR_16;
 int VAR_17, VAR_18;
 struct ldtentry *VAR_19, *VAR_20 = ((void*)0);
 struct idtentry *VAR_21, *VAR_22 = ((void*)0);
 struct dtslot *VAR_23, *VAR_24, *VAR_25;
 struct dt_lock *VAR_26 = *VAR_8, *VAR_27 = *VAR_9;
 struct lv *VAR_28, *VAR_29;
 int VAR_30, VAR_31, VAR_32;
 int VAR_33;

 VAR_15 = (s8 *) & VAR_5->slot[VAR_5->header.stblindex];
 VAR_16 = (s8 *) & VAR_7->slot[VAR_7->header.stblindex];

 VAR_14 = VAR_7->header.freelist;
 VAR_33 = VAR_5->header.freelist;


 VAR_29 = & VAR_27->lv[VAR_27->index];
 VAR_29->offset = VAR_14;


 VAR_28 = & VAR_26->lv[VAR_26->index];
 VAR_28->offset = VAR_15[VAR_6];
 VAR_30 = VAR_28->offset - 1;




 VAR_31 = VAR_32 = 0;
 for (VAR_13 = 0; VAR_6 < VAR_5->header.nextindex; VAR_6++, VAR_13++) {
  VAR_11 = VAR_15[VAR_6];
  VAR_16[VAR_13] = VAR_14;


  if (VAR_11 != VAR_30 + 1) {

   VAR_28->length = VAR_31;
   VAR_26->index++;


   if (VAR_26->index < VAR_26->maxcnt)
    VAR_28++;
   else {
    VAR_26 = (struct dt_lock *) FUNC_3(VAR_26);
    VAR_28 = & VAR_26->lv[0];
   }

   VAR_28->offset = VAR_11;
   VAR_31 = 0;
  }





  VAR_23 = VAR_25 = &VAR_7->slot[VAR_14];


  VAR_24 = &VAR_5->slot[VAR_11];
  if (VAR_5->header.flag & VAR_0) {

   VAR_19 = (struct ldtentry *) VAR_24;
   VAR_20 = (struct ldtentry *) VAR_23;
   VAR_17 = VAR_19->namlen;

   if (VAR_10) {
    VAR_18 = FUNC_2(VAR_17, VAR_2);
    VAR_20->index = VAR_19->index;
   } else
    VAR_18 = FUNC_2(VAR_17, VAR_3);

   FUNC_1(VAR_20, VAR_19, 6 + VAR_18 * 2);

   VAR_12 = VAR_19->next;


   VAR_14++;
   VAR_20->next = VAR_14;
  } else {
   VAR_21 = (struct idtentry *) VAR_24;
   VAR_17 = VAR_21->namlen;

   VAR_18 = FUNC_2(VAR_17, VAR_1);
   VAR_22 = (struct idtentry *) VAR_23;
   FUNC_1(VAR_22, VAR_21, 10 + VAR_18 * 2);
   VAR_12 = VAR_21->next;

   VAR_14++;
   VAR_22->next = VAR_14;
  }


  VAR_24->next = VAR_33;
  VAR_24->cnt = 1;
  VAR_33 = VAR_11;

  VAR_31++;
  VAR_32++;
  VAR_30 = VAR_11;




  VAR_17 -= VAR_18;
  while ((VAR_11 = VAR_12) >= 0) {

   if (VAR_11 != VAR_30 + 1) {

    VAR_28->length = VAR_31;
    VAR_26->index++;


    if (VAR_26->index < VAR_26->maxcnt)
     VAR_28++;
    else {
     VAR_26 =
         (struct dt_lock *)
         FUNC_3(VAR_26);
     VAR_28 = & VAR_26->lv[0];
    }

    VAR_28->offset = VAR_11;
    VAR_31 = 0;
   }


   VAR_24 = &VAR_5->slot[VAR_11];


   VAR_25++;

   VAR_18 = FUNC_2(VAR_17, VAR_4);
   FUNC_0(VAR_25->name, VAR_24->name, VAR_18);

   VAR_31++;
   VAR_32++;
   VAR_30 = VAR_11;

   VAR_14++;
   VAR_25->next = VAR_14;


   VAR_12 = VAR_24->next;
   VAR_24->next = VAR_33;
   VAR_24->cnt = 1;
   VAR_33 = VAR_11;

   VAR_17 -= VAR_18;
  }


  if (VAR_23 == VAR_25) {

   if (VAR_7->header.flag & VAR_0)
    VAR_20->next = -1;
   else
    VAR_22->next = -1;
  } else

   VAR_25->next = -1;
 }


 VAR_28->length = VAR_31;
 VAR_26->index++;
 *VAR_8 = VAR_26;

 VAR_29->length = VAR_32;
 VAR_27->index++;
 *VAR_9 = VAR_27;


 VAR_5->header.freelist = VAR_33;
 VAR_5->header.freecnt += VAR_32;


 VAR_7->header.nextindex = VAR_13;

 VAR_7->header.freelist = VAR_14;
 VAR_7->header.freecnt -= VAR_32;
}
