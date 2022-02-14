
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct nlm_lockowner {int pid; } ;
struct TYPE_8__ {scalar_t__ fl_type; int * fl_owner; scalar_t__ fl_end; scalar_t__ fl_start; } ;
struct TYPE_7__ {scalar_t__ len; } ;
struct nlm_lock {char* caller; TYPE_3__ fl; int svid; TYPE_2__ oh; int len; } ;
struct nlm_host {int dummy; } ;
struct nlm_file {int f_file; } ;
struct nlm_cookie {int dummy; } ;
typedef int __be32 ;
struct TYPE_9__ {int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_6__ {int s_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct svc_rqst*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,scalar_t__,long long,long long,...) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_5__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct nlm_lockowner*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,TYPE_3__*) ;

__be32
FUNC_9(struct svc_rqst *VAR_6, struct nlm_file *VAR_7,
  struct nlm_host *VAR_8, struct nlm_lock *VAR_9,
  struct nlm_lock *VAR_10, struct nlm_cookie *VAR_11)
{
 int VAR_12;
 __be32 VAR_13;
 struct nlm_lockowner *VAR_14;

 FUNC_2("lockd: nlmsvc_testlock(%s/%ld, ty=%d, %Ld-%Ld)\n",
    FUNC_4(VAR_7->f_file)->i_sb->s_id,
    FUNC_4(VAR_7->f_file)->i_ino,
    VAR_9->fl.fl_type,
    (long long)VAR_9->fl.fl_start,
    (long long)VAR_9->fl.fl_end);

 if (FUNC_3(FUNC_0(VAR_6))) {
  VAR_13 = VAR_4;
  goto out;
 }


 VAR_14 = (struct nlm_lockowner *)VAR_9->fl.fl_owner;

 VAR_12 = FUNC_8(VAR_7->f_file, &VAR_9->fl);
 if (VAR_12) {

  if (VAR_12 == VAR_0)
   FUNC_1(1);

  VAR_13 = VAR_5;
  goto out;
 }

 if (VAR_9->fl.fl_type == VAR_1) {
  VAR_13 = VAR_2;
  goto out;
 }

 FUNC_2("lockd: conflicting lock(ty=%d, %Ld-%Ld)\n",
  VAR_9->fl.fl_type, (long long)VAR_9->fl.fl_start,
  (long long)VAR_9->fl.fl_end);
 VAR_10->caller = "somehost";
 VAR_10->len = FUNC_7(VAR_10->caller);
 VAR_10->oh.len = 0;
 VAR_10->svid = ((struct nlm_lockowner *)VAR_9->fl.fl_owner)->pid;
 VAR_10->fl.fl_type = VAR_9->fl.fl_type;
 VAR_10->fl.fl_start = VAR_9->fl.fl_start;
 VAR_10->fl.fl_end = VAR_9->fl.fl_end;
 FUNC_5(&VAR_9->fl);


 VAR_9->fl.fl_owner = ((void*)0);
 FUNC_6(VAR_14);

 VAR_13 = VAR_3;
out:
 return VAR_13;
}
