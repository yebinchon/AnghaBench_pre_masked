
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int objectid; } ;
struct btrfs_fs_info {int qgroup_flags; int qgroup_rescan_running; TYPE_1__ qgroup_rescan_work; int qgroup_rescan_lock; int qgroup_lock; int qgroup_rescan_completion; TYPE_1__ qgroup_rescan_progress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct btrfs_fs_info*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct btrfs_fs_info *VAR_6, u64 VAR_7,
     int VAR_8)
{
 int VAR_9 = 0;

 if (!VAR_8) {

  if (!(VAR_6->qgroup_flags &
        VAR_1)) {
   FUNC_1(VAR_6,
   "qgroup rescan init failed, qgroup is not enabled");
   VAR_9 = -VAR_3;
  } else if (!(VAR_6->qgroup_flags &
        VAR_0)) {
   FUNC_1(VAR_6,
   "qgroup rescan init failed, qgroup rescan is not queued");
   VAR_9 = -VAR_3;
  }

  if (VAR_9)
   return VAR_9;
 }

 FUNC_4(&VAR_6->qgroup_rescan_lock);
 FUNC_6(&VAR_6->qgroup_lock);

 if (VAR_8) {
  if (VAR_6->qgroup_flags & VAR_1) {
   FUNC_1(VAR_6,
       "qgroup rescan is already in progress");
   VAR_9 = -VAR_2;
  } else if (!(VAR_6->qgroup_flags &
        VAR_0)) {
   FUNC_1(VAR_6,
   "qgroup rescan init failed, qgroup is not enabled");
   VAR_9 = -VAR_3;
  }

  if (VAR_9) {
   FUNC_7(&VAR_6->qgroup_lock);
   FUNC_5(&VAR_6->qgroup_rescan_lock);
   return VAR_9;
  }
  VAR_6->qgroup_flags |= VAR_1;
 }

 FUNC_3(&VAR_6->qgroup_rescan_progress, 0,
  sizeof(VAR_6->qgroup_rescan_progress));
 VAR_6->qgroup_rescan_progress.objectid = VAR_7;
 FUNC_2(&VAR_6->qgroup_rescan_completion);
 VAR_6->qgroup_rescan_running = 1;

 FUNC_7(&VAR_6->qgroup_lock);
 FUNC_5(&VAR_6->qgroup_rescan_lock);

 FUNC_3(&VAR_6->qgroup_rescan_work, 0,
        sizeof(VAR_6->qgroup_rescan_work));
 FUNC_0(&VAR_6->qgroup_rescan_work,
   VAR_4,
   VAR_5, ((void*)0), ((void*)0));
 return 0;
}
