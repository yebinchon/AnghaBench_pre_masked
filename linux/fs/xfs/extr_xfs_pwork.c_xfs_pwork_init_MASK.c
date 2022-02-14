
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_pwork_work_fn ;
struct xfs_pwork_ctl {int poll_wait; int nr_work; struct xfs_mount* mp; scalar_t__ error; int work_fn; int wq; } ;
struct xfs_mount {int dummy; } ;
struct TYPE_4__ {int pid; } ;
struct TYPE_3__ {unsigned int pwork_threads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,unsigned int,char const*,int ) ;
 int FUNC_1 (int *,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xfs_mount*,unsigned int,int ) ;
 TYPE_1__ VAR_3 ;

int
FUNC_4(
 struct xfs_mount *VAR_4,
 struct xfs_pwork_ctl *VAR_5,
 xfs_pwork_work_fn VAR_6,
 const char *VAR_7,
 unsigned int VAR_8)
{




 FUNC_3(VAR_4, VAR_8, VAR_2->pid);

 VAR_5->wq = FUNC_0("%s-%d", VAR_1, VAR_8, VAR_7,
   VAR_2->pid);
 if (!VAR_5->wq)
  return -VAR_0;
 VAR_5->work_fn = VAR_6;
 VAR_5->error = 0;
 VAR_5->mp = VAR_4;
 FUNC_1(&VAR_5->nr_work, 0);
 FUNC_2(&VAR_5->poll_wait);

 return 0;
}
