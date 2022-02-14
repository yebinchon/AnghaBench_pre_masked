
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ fl_end; scalar_t__ fl_start; int fl_pid; } ;
struct nlm_lock {TYPE_2__ fl; } ;
struct nlm_file {int f_mutex; int f_file; } ;
struct nlm_block {TYPE_6__* b_call; TYPE_3__* b_file; } ;
struct net {int dummy; } ;
typedef int __be32 ;
struct TYPE_14__ {int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_11__ {int fl; } ;
struct TYPE_12__ {TYPE_4__ lock; } ;
struct TYPE_13__ {TYPE_5__ a_args; } ;
struct TYPE_10__ {int f_file; } ;
struct TYPE_8__ {int s_id; } ;


 int FUNC_0 (char*,int ,int ,int ,long long,long long) ;
 scalar_t__ FUNC_1 (struct net*) ;
 TYPE_7__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nlm_block* FUNC_5 (struct nlm_file*,struct nlm_lock*) ;
 int FUNC_6 (struct nlm_block*) ;
 int FUNC_7 (struct nlm_block*) ;
 int FUNC_8 (int ,int *) ;

__be32
FUNC_9(struct net *VAR_3, struct nlm_file *VAR_4, struct nlm_lock *VAR_5)
{
 struct nlm_block *VAR_6;
 int VAR_7 = 0;

 FUNC_0("lockd: nlmsvc_cancel(%s/%ld, pi=%d, %Ld-%Ld)\n",
    FUNC_2(VAR_4->f_file)->i_sb->s_id,
    FUNC_2(VAR_4->f_file)->i_ino,
    VAR_5->fl.fl_pid,
    (long long)VAR_5->fl.fl_start,
    (long long)VAR_5->fl.fl_end);

 if (FUNC_1(VAR_3))
  return VAR_2;

 FUNC_3(&VAR_4->f_mutex);
 VAR_6 = FUNC_5(VAR_4, VAR_5);
 FUNC_4(&VAR_4->f_mutex);
 if (VAR_6 != ((void*)0)) {
  FUNC_8(VAR_6->b_file->f_file,
    &VAR_6->b_call->a_args.lock.fl);
  VAR_7 = FUNC_7(VAR_6);
  FUNC_6(VAR_6);
 }
 return VAR_7 ? VAR_1 : VAR_0;
}
