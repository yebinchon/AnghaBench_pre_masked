
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlock {int type; int flag; int lock; struct metapage* mp; scalar_t__ next; } ;
struct tblock {int synclist; scalar_t__ lsn; scalar_t__ last; scalar_t__ next; scalar_t__ clsn; int sb; } ;
struct metapage {int xflag; scalar_t__ nohomeok; scalar_t__ clsn; } ;
struct linelock {scalar_t__ next; } ;
struct jfs_log {int count; } ;
typedef scalar_t__ lid_t ;
struct TYPE_2__ {struct jfs_log* log; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct jfs_log*,unsigned long) ;
 int FUNC_2 (struct jfs_log*,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct metapage*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct metapage*) ;
 int FUNC_8 (char*,struct tblock*,...) ;
 struct tlock* FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,scalar_t__,struct jfs_log*) ;
 int FUNC_12 (struct metapage*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct tblock * VAR_3)
{
 struct tlock *VAR_4;
 struct linelock *VAR_5;
 lid_t VAR_6, VAR_7, VAR_8, VAR_9;
 struct metapage *VAR_10;
 struct jfs_log *VAR_11;
 int VAR_12, VAR_13;
 unsigned long VAR_14;

 FUNC_8("txUnlock: tblk = 0x%p", VAR_3);
 VAR_11 = FUNC_0(VAR_3->sb)->log;




 for (VAR_6 = VAR_3->next; VAR_6; VAR_6 = VAR_7) {
  VAR_4 = FUNC_9(VAR_6);
  VAR_7 = VAR_4->next;

  FUNC_8("unlocking lid = %d, tlck = 0x%p", VAR_6, VAR_4);


  if ((VAR_10 = VAR_4->mp) != ((void*)0) &&
      (VAR_4->type & VAR_1) == 0) {
   FUNC_6(VAR_10->xflag & VAR_0);



   FUNC_7(VAR_10);

   FUNC_6(VAR_10->nohomeok > 0);
   FUNC_5(VAR_10);


   FUNC_1(VAR_11, VAR_14);
   if (VAR_10->clsn) {
    FUNC_11(VAR_12, VAR_3->clsn, VAR_11);
    FUNC_11(VAR_13, VAR_10->clsn, VAR_11);
    if (VAR_12 > VAR_13)
     VAR_10->clsn = VAR_3->clsn;
   } else
    VAR_10->clsn = VAR_3->clsn;
   FUNC_2(VAR_11, VAR_14);

   FUNC_6(!(VAR_4->flag & VAR_2));

   FUNC_12(VAR_10);
  }




  FUNC_3();

  VAR_8 = ((struct linelock *) & VAR_4->lock)->next;
  while (VAR_8) {
   VAR_5 = (struct linelock *) FUNC_9(VAR_8);
   VAR_9 = VAR_5->next;
   FUNC_13(VAR_8);
   VAR_8 = VAR_9;
  }
  FUNC_13(VAR_6);

  FUNC_4();
 }
 VAR_3->next = VAR_3->last = 0;






 if (VAR_3->lsn) {
  FUNC_1(VAR_11, VAR_14);
  VAR_11->count--;
  FUNC_10(&VAR_3->synclist);
  FUNC_2(VAR_11, VAR_14);
 }
}
