
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlock {int type; struct metapage* mp; } ;
struct tblock {int lsn; int synclist; } ;
struct metapage {int lsn; int synclist; struct jfs_log* log; } ;
struct lrd {int dummy; } ;
struct jfs_log {int lsn; int nextsync; int count; int synclist; } ;


 int FUNC_0 (struct jfs_log*,unsigned long) ;
 int FUNC_1 (struct jfs_log*,unsigned long) ;
 int FUNC_2 (struct jfs_log*) ;
 int FUNC_3 (struct jfs_log*) ;
 int FUNC_4 (char*,struct jfs_log*,struct tblock*,struct lrd*,struct tlock*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct jfs_log*,int ) ;
 int FUNC_9 (struct jfs_log*,struct tblock*,struct lrd*,struct tlock*) ;
 int FUNC_10 (int,int,struct jfs_log*) ;
 int VAR_0 ;

int FUNC_11(struct jfs_log * VAR_1, struct tblock * VAR_2, struct lrd * VAR_3,
   struct tlock * VAR_4)
{
 int VAR_5;
 int VAR_6, VAR_7;
 struct metapage *VAR_8 = ((void*)0);
 unsigned long VAR_9;

 FUNC_4("lmLog: log:0x%p tblk:0x%p, lrd:0x%p tlck:0x%p",
   VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_2(VAR_1);


 if (VAR_2 == ((void*)0))
  goto writeRecord;


 if (VAR_4 == ((void*)0) ||
     VAR_4->type & VAR_0 || (VAR_8 = VAR_4->mp) == ((void*)0))
  goto writeRecord;




 VAR_5 = VAR_1->lsn;

 FUNC_0(VAR_1, VAR_9);




 if (VAR_8->lsn == 0) {
  VAR_8->log = VAR_1;
  VAR_8->lsn = VAR_5;
  VAR_1->count++;


  FUNC_6(&VAR_8->synclist, &VAR_1->synclist);
 }
 if (VAR_2->lsn == 0) {

  VAR_2->lsn = VAR_8->lsn;
  VAR_1->count++;


  FUNC_5(&VAR_2->synclist, &VAR_8->synclist);
 }



 else {

  FUNC_10(VAR_6, VAR_8->lsn, VAR_1);
  FUNC_10(VAR_7, VAR_2->lsn, VAR_1);
  if (VAR_6 < VAR_7) {

   VAR_2->lsn = VAR_8->lsn;


   FUNC_7(&VAR_2->synclist, &VAR_8->synclist);
  }
 }

 FUNC_1(VAR_1, VAR_9);




      writeRecord:
 VAR_5 = FUNC_9(VAR_1, VAR_2, VAR_3, VAR_4);




 FUNC_10(VAR_6, VAR_5, VAR_1);
 if (VAR_6 >= VAR_1->nextsync)
  VAR_5 = FUNC_8(VAR_1, 0);


 VAR_1->lsn = VAR_5;

 FUNC_3(VAR_1);


 return VAR_5;
}
