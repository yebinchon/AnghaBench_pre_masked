
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tid_t ;
struct tblock {scalar_t__ next; int last; int xflag; int flag; int lsn; scalar_t__ logtid; struct super_block* sb; } ;
struct super_block {int dummy; } ;
struct jfs_log {int active; scalar_t__ logtid; int syncwait; int flag; } ;
struct TYPE_8__ {struct jfs_log* log; } ;
struct TYPE_7__ {scalar_t__ tlocksInUse; int freetid; int freewait; int lowlockwait; } ;
struct TYPE_6__ {int txBegin_freetid; int txBegin_lockslow; int txBegin_barrier; int txBegin; } ;
struct TYPE_5__ {int ntid; int maxtid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (struct super_block*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_6 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_7 (int ,int *) ;
 struct tblock* FUNC_8 (int) ;

tid_t FUNC_9(struct super_block *VAR_7, int VAR_8)
{
 tid_t VAR_9;
 struct tblock *VAR_10;
 struct jfs_log *VAR_11;

 FUNC_6("txBegin: flag = 0x%x", VAR_8);
 VAR_11 = FUNC_2(VAR_7)->log;

 FUNC_3();

 FUNC_1(VAR_3.txBegin);

      retry:
 if (!(VAR_8 & VAR_0)) {



  if (FUNC_7(VAR_5, &VAR_11->flag) ||
      FUNC_7(VAR_4, &VAR_11->flag)) {
   FUNC_1(VAR_3.txBegin_barrier);
   FUNC_4(&VAR_11->syncwait);
   goto retry;
  }
 }
 if (VAR_8 == 0) {





  if (VAR_1.tlocksInUse > VAR_2) {
   FUNC_1(VAR_3.txBegin_lockslow);
   FUNC_4(&VAR_1.lowlockwait);
   goto retry;
  }
 }




 if ((VAR_9 = VAR_1.freetid) == 0) {
  FUNC_6("txBegin: waiting for free tid");
  FUNC_1(VAR_3.txBegin_freetid);
  FUNC_4(&VAR_1.freewait);
  goto retry;
 }

 VAR_10 = FUNC_8(VAR_9);

 if ((VAR_10->next == 0) && !(VAR_8 & VAR_0)) {

  FUNC_6("txBegin: waiting for free tid");
  FUNC_1(VAR_3.txBegin_freetid);
  FUNC_4(&VAR_1.freewait);
  goto retry;
 }

 VAR_1.freetid = VAR_10->next;
 VAR_10->next = VAR_10->last = VAR_10->xflag = VAR_10->flag = VAR_10->lsn = 0;

 VAR_10->sb = VAR_7;
 ++VAR_11->logtid;
 VAR_10->logtid = VAR_11->logtid;

 ++VAR_11->active;

 FUNC_0(VAR_6.maxtid, VAR_9);
 FUNC_1(VAR_6.ntid);

 FUNC_5();

 FUNC_6("txBegin: returning tid = %d", VAR_9);

 return VAR_9;
}
