
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nlm_host {int dummy; } ;
struct TYPE_3__ {int list; int owner; scalar_t__ state; } ;
struct TYPE_4__ {TYPE_1__ nfs_fl; } ;
struct file_lock {int * fl_ops; TYPE_2__ fl_u; int fl_owner; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nlm_host*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct file_lock *VAR_1, struct nlm_host *VAR_2)
{
 VAR_1->fl_u.nfs_fl.state = 0;
 VAR_1->fl_u.nfs_fl.owner = FUNC_1(VAR_2, VAR_1->fl_owner);
 FUNC_0(&VAR_1->fl_u.nfs_fl.list);
 VAR_1->fl_ops = &VAR_0;
}
