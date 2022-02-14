
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef scalar_t__ u16 ;
struct tty_struct {int dummy; } ;
struct pacct_struct {unsigned long ac_utime; unsigned long ac_stime; unsigned long ac_mem; unsigned long ac_minflt; unsigned long ac_majflt; int ac_exitcode; int ac_flag; } ;
typedef int comp2_t ;
struct TYPE_11__ {int ac_version; int ac_etime_hi; int ac_exitcode; void* ac_majflt; void* ac_minflt; void* ac_mem; int ac_flag; void* ac_stime; void* ac_utime; int ac_tty; int ac_ahz; scalar_t__ ac_btime; scalar_t__ ac_etime_lo; void* ac_etime; int ac_comm; } ;
typedef TYPE_4__ acct_t ;
struct TYPE_12__ {TYPE_3__* sighand; TYPE_2__* signal; TYPE_1__* group_leader; int comm; } ;
struct TYPE_10__ {int siglock; } ;
struct TYPE_9__ {struct tty_struct* tty; struct pacct_struct pacct; } ;
struct TYPE_8__ {scalar_t__ start_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* VAR_3 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (unsigned long) ;
 void* FUNC_2 (unsigned long) ;
 void* FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 () ;
 unsigned long FUNC_5 () ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 unsigned long FUNC_7 (unsigned long) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_13(acct_t *VAR_4)
{
 struct pacct_struct *VAR_5 = &VAR_3->signal->pacct;
 u64 VAR_6, VAR_7;
 struct tty_struct *VAR_8;





 FUNC_6(VAR_4, 0, sizeof(acct_t));

 VAR_4->ac_version = VAR_1 | VAR_0;
 FUNC_11(VAR_4->ac_comm, VAR_3->comm, sizeof(VAR_4->ac_comm));


 VAR_7 = FUNC_5();
 VAR_7 -= VAR_3->group_leader->start_time;

 VAR_6 = FUNC_7(VAR_7);



 VAR_4->ac_etime = FUNC_2(VAR_6 < (unsigned long) -1l ?
    (unsigned long) VAR_6 : (unsigned long) -1l);
 FUNC_0(VAR_6, VAR_2);
 VAR_4->ac_btime = FUNC_4() - VAR_6;




 FUNC_9(&VAR_3->sighand->siglock);
 VAR_8 = VAR_3->signal->tty;
 VAR_4->ac_tty = VAR_8 ? FUNC_8(FUNC_12(VAR_8)) : 0;
 VAR_4->ac_utime = FUNC_2(FUNC_7(VAR_5->ac_utime));
 VAR_4->ac_stime = FUNC_2(FUNC_7(VAR_5->ac_stime));
 VAR_4->ac_flag = VAR_5->ac_flag;
 VAR_4->ac_mem = FUNC_2(VAR_5->ac_mem);
 VAR_4->ac_minflt = FUNC_2(VAR_5->ac_minflt);
 VAR_4->ac_majflt = FUNC_2(VAR_5->ac_majflt);
 VAR_4->ac_exitcode = VAR_5->ac_exitcode;
 FUNC_10(&VAR_3->sighand->siglock);
}
