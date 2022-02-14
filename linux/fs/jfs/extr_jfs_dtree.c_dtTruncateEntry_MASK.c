
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lv {int offset; int length; } ;
struct idtentry {int next; scalar_t__ namlen; } ;
struct dtslot {int cnt; int next; } ;
struct dt_lock {size_t index; size_t maxcnt; struct lv* lv; } ;
typedef int s8 ;
struct TYPE_5__ {int flag; int freelist; int freecnt; } ;
struct TYPE_6__ {TYPE_1__ header; struct dtslot* slot; } ;
typedef TYPE_2__ dtpage_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int* FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct dt_lock*) ;

__attribute__((used)) static void FUNC_3(dtpage_t * VAR_1, int VAR_2, struct dt_lock ** VAR_3)
{
 int VAR_4;
 s8 *VAR_5;
 struct dtslot *VAR_6;
 int VAR_7, VAR_8;
 struct dt_lock *VAR_9 = *VAR_3;
 struct lv *VAR_10;
 int VAR_11, VAR_12, VAR_13;


 VAR_5 = FUNC_1(VAR_1);
 VAR_4 = VAR_5[VAR_2];


 if (VAR_9->index >= VAR_9->maxcnt)
  VAR_9 = (struct dt_lock *) FUNC_2(VAR_9);
 VAR_10 = & VAR_9->lv[VAR_9->index];

 VAR_10->offset = VAR_4;


 VAR_6 = &VAR_1->slot[VAR_4];
 FUNC_0(VAR_1->header.flag & VAR_0);
 ((struct idtentry *) VAR_6)->namlen = 0;
 VAR_7 = ((struct idtentry *) VAR_6)->next;
 ((struct idtentry *) VAR_6)->next = -1;

 VAR_13 = 1;
 VAR_8 = 0;
 VAR_11 = VAR_7;
 VAR_12 = VAR_4;


 while (VAR_7 >= 0) {

  if (VAR_7 != VAR_12 + 1) {

   VAR_10->length = VAR_13;
   VAR_9->index++;


   if (VAR_9->index < VAR_9->maxcnt)
    VAR_10++;
   else {
    VAR_9 = (struct dt_lock *) FUNC_2(VAR_9);
    VAR_10 = & VAR_9->lv[0];
   }

   VAR_10->offset = VAR_7;
   VAR_13 = 0;
  }

  VAR_13++;
  VAR_12 = VAR_7;
  VAR_8++;

  VAR_6 = &VAR_1->slot[VAR_7];
  VAR_6->cnt = 1;
  VAR_7 = VAR_6->next;
 }


 VAR_10->length = VAR_13;
 VAR_9->index++;

 *VAR_3 = VAR_9;


 if (VAR_8 == 0)
  return;
 VAR_6->next = VAR_1->header.freelist;
 VAR_1->header.freelist = VAR_11;
 VAR_1->header.freecnt += VAR_8;
}
