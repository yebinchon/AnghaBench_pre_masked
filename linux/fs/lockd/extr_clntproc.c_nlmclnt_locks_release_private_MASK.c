
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* owner; int list; } ;
struct TYPE_5__ {TYPE_3__ nfs_fl; } ;
struct file_lock {TYPE_1__ fl_u; } ;
struct TYPE_8__ {TYPE_2__* host; } ;
struct TYPE_6__ {int h_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct file_lock *VAR_0)
{
 FUNC_2(&VAR_0->fl_u.nfs_fl.owner->host->h_lock);
 FUNC_0(&VAR_0->fl_u.nfs_fl.list);
 FUNC_3(&VAR_0->fl_u.nfs_fl.owner->host->h_lock);
 FUNC_1(VAR_0->fl_u.nfs_fl.owner);
}
