
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fl_type; scalar_t__ fl_end; scalar_t__ fl_start; int fl_pid; } ;
struct nlm_lock {TYPE_2__ fl; } ;
struct nlm_file {int f_file; } ;
struct net {int dummy; } ;
typedef int __be32 ;
struct TYPE_6__ {int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_4__ {int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ,long long,long long) ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct net*,struct nlm_file*,struct nlm_lock*) ;
 int FUNC_3 (int ,int ,TYPE_2__*,int *) ;

__be32
FUNC_4(struct net *VAR_4, struct nlm_file *VAR_5, struct nlm_lock *VAR_6)
{
 int VAR_7;

 FUNC_0("lockd: nlmsvc_unlock(%s/%ld, pi=%d, %Ld-%Ld)\n",
    FUNC_1(VAR_5->f_file)->i_sb->s_id,
    FUNC_1(VAR_5->f_file)->i_ino,
    VAR_6->fl.fl_pid,
    (long long)VAR_6->fl.fl_start,
    (long long)VAR_6->fl.fl_end);


 FUNC_2(VAR_4, VAR_5, VAR_6);

 VAR_6->fl.fl_type = VAR_1;
 VAR_7 = FUNC_3(VAR_5->f_file, VAR_0, &VAR_6->fl, ((void*)0));

 return (VAR_7 < 0)? VAR_3 : VAR_2;
}
