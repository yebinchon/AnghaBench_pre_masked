
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct f2fs_sb_info {int log_blocks_per_seg; TYPE_2__* sb; } ;
struct discard_cmd_control {int max_discards; int rbtree_check; int f2fs_issue_discard; int discard_wait_queue; int root; scalar_t__ next_pos; scalar_t__ undiscard_blks; scalar_t__ nr_discards; int discard_cmd_cnt; int queued_discard; int issued_discard; int cmd_lock; int fstrim_list; int wait_list; int * pend_list; int entry_list; int discard_granularity; } ;
typedef int dev_t ;
struct TYPE_6__ {struct discard_cmd_control* dcc_info; } ;
struct TYPE_5__ {TYPE_1__* s_bdev; } ;
struct TYPE_4__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 TYPE_3__* FUNC_6 (struct f2fs_sb_info*) ;
 int FUNC_7 (int *,int ) ;
 struct discard_cmd_control* FUNC_8 (struct f2fs_sb_info*,int,int ) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int FUNC_10 (int ,struct f2fs_sb_info*,char*,int ,int ) ;
 int FUNC_11 (struct discard_cmd_control*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct f2fs_sb_info *VAR_6)
{
 dev_t VAR_7 = VAR_6->sb->s_bdev->bd_dev;
 struct discard_cmd_control *VAR_8;
 int VAR_9 = 0, VAR_10;

 if (FUNC_6(VAR_6)->dcc_info) {
  VAR_8 = FUNC_6(VAR_6)->dcc_info;
  goto init_thread;
 }

 VAR_8 = FUNC_8(VAR_6, sizeof(struct discard_cmd_control), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->discard_granularity = VAR_0;
 FUNC_0(&VAR_8->entry_list);
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  FUNC_0(&VAR_8->pend_list[VAR_10]);
 FUNC_0(&VAR_8->wait_list);
 FUNC_0(&VAR_8->fstrim_list);
 FUNC_12(&VAR_8->cmd_lock);
 FUNC_7(&VAR_8->issued_discard, 0);
 FUNC_7(&VAR_8->queued_discard, 0);
 FUNC_7(&VAR_8->discard_cmd_cnt, 0);
 VAR_8->nr_discards = 0;
 VAR_8->max_discards = FUNC_2(VAR_6) << VAR_6->log_blocks_per_seg;
 VAR_8->undiscard_blks = 0;
 VAR_8->next_pos = 0;
 VAR_8->root = VAR_4;
 VAR_8->rbtree_check = 0;

 FUNC_9(&VAR_8->discard_wait_queue);
 FUNC_6(VAR_6)->dcc_info = VAR_8;
init_thread:
 VAR_8->f2fs_issue_discard = FUNC_10(VAR_5, VAR_6,
    "f2fs_discard-%u:%u", FUNC_3(VAR_7), FUNC_4(VAR_7));
 if (FUNC_1(VAR_8->f2fs_issue_discard)) {
  VAR_9 = FUNC_5(VAR_8->f2fs_issue_discard);
  FUNC_11(VAR_8);
  FUNC_6(VAR_6)->dcc_info = ((void*)0);
  return VAR_9;
 }

 return VAR_9;
}
