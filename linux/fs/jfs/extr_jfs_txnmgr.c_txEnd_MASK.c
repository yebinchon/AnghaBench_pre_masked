
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tid_t ;
struct tblock {int flag; scalar_t__ next; int sb; int waitor; } ;
struct jfs_log {scalar_t__ active; scalar_t__ lsn; int syncwait; int flag; int gclock; } ;
struct TYPE_4__ {struct jfs_log* log; } ;
struct TYPE_3__ {scalar_t__ freetid; int freewait; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (char*,scalar_t__,...) ;
 int FUNC_7 (struct jfs_log*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (int ,int *) ;
 struct tblock* FUNC_11 (scalar_t__) ;

void FUNC_12(tid_t VAR_5)
{
 struct tblock *VAR_6 = FUNC_11(VAR_5);
 struct jfs_log *VAR_7;

 FUNC_6("txEnd: tid = %d", VAR_5);
 FUNC_1();





 FUNC_3(&VAR_6->waitor);

 VAR_7 = FUNC_0(VAR_6->sb)->log;
 if (VAR_6->flag & VAR_3) {
  FUNC_6("txEnd called w/lazy tid: %d, tblk = 0x%p", VAR_5, VAR_6);
  FUNC_2();

  FUNC_8(&VAR_7->gclock);
  VAR_6->flag |= VAR_4;
  FUNC_9(&VAR_7->gclock);
  return;
 }

 FUNC_6("txEnd: tid: %d, tblk = 0x%p", VAR_5, VAR_6);

 FUNC_4(VAR_6->next == 0);




 VAR_6->next = VAR_0.freetid;
 VAR_0.freetid = VAR_5;




 if (--VAR_7->active == 0) {
  FUNC_5(VAR_1, &VAR_7->flag);




  if (FUNC_10(VAR_2, &VAR_7->flag)) {
   FUNC_2();


   FUNC_7(VAR_7, 1);

   FUNC_6("log barrier off: 0x%x", VAR_7->lsn);


   FUNC_5(VAR_2, &VAR_7->flag);


   FUNC_3(&VAR_7->syncwait);

   goto wakeup;
  }
 }

 FUNC_2();
wakeup:



 FUNC_3(&VAR_0.freewait);
}
