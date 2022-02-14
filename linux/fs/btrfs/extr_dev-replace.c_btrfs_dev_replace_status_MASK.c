
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int progress_1000; void* num_uncorrectable_read_errors; void* num_write_errors; int time_stopped; int time_started; int replace_state; } ;
struct btrfs_ioctl_dev_replace_args {TYPE_1__ status; int result; } ;
struct btrfs_dev_replace {int rwsem; int num_uncorrectable_read_errors; int num_write_errors; int time_stopped; int time_started; int replace_state; } ;
struct btrfs_fs_info {struct btrfs_dev_replace dev_replace; } ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (struct btrfs_fs_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct btrfs_fs_info *VAR_1,
         struct btrfs_ioctl_dev_replace_args *VAR_2)
{
 struct btrfs_dev_replace *VAR_3 = &VAR_1->dev_replace;

 FUNC_2(&VAR_3->rwsem);


 VAR_2->result = VAR_0;
 VAR_2->status.replace_state = VAR_3->replace_state;
 VAR_2->status.time_started = VAR_3->time_started;
 VAR_2->status.time_stopped = VAR_3->time_stopped;
 VAR_2->status.num_write_errors =
  FUNC_0(&VAR_3->num_write_errors);
 VAR_2->status.num_uncorrectable_read_errors =
  FUNC_0(&VAR_3->num_uncorrectable_read_errors);
 VAR_2->status.progress_1000 = FUNC_1(VAR_1);
 FUNC_3(&VAR_3->rwsem);
}
