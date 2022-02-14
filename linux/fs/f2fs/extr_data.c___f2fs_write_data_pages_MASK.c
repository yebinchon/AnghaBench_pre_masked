
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; int pages_skipped; } ;
struct inode {int i_mode; } ;
struct f2fs_sb_info {int * wb_sync_req; int writepages; } ;
struct blk_plug {int dummy; } ;
struct address_space {struct inode* host; TYPE_1__* a_ops; } ;
typedef enum iostat_type { ____Placeholder_iostat_type } iostat_type ;
struct TYPE_2__ {int writepage; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (struct inode*,struct writeback_control*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct blk_plug*) ;
 int FUNC_8 (struct blk_plug*) ;
 scalar_t__ FUNC_9 (struct f2fs_sb_info*,int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct address_space*,struct writeback_control*,int) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 scalar_t__ FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (struct f2fs_sb_info*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (struct f2fs_sb_info*,size_t) ;
 int FUNC_18 (struct inode*,struct writeback_control*,size_t) ;
 scalar_t__ FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct address_space *VAR_6,
      struct writeback_control *VAR_7,
      enum iostat_type VAR_8)
{
 struct inode *VAR_9 = VAR_6->host;
 struct f2fs_sb_info *VAR_10 = FUNC_0(VAR_9);
 struct blk_plug VAR_11;
 int VAR_12;
 bool VAR_13 = 0;


 if (!VAR_6->a_ops->writepage)
  return 0;


 if (!FUNC_12(VAR_9) && VAR_7->sync_mode == VAR_5)
  return 0;


 if (FUNC_19(FUNC_14(VAR_10, VAR_3)))
  goto skip_write;

 if ((FUNC_2(VAR_9->i_mode) || FUNC_1(VAR_9)) &&
   VAR_7->sync_mode == VAR_5 &&
   FUNC_12(VAR_9) < FUNC_17(VAR_10, VAR_0) &&
   FUNC_9(VAR_10, VAR_1))
  goto skip_write;


 if (FUNC_13(VAR_9, VAR_2))
  goto skip_write;

 FUNC_18(VAR_6->host, VAR_7, VAR_0);


 if (VAR_7->sync_mode == VAR_4)
  FUNC_5(&VAR_10->wb_sync_req[VAR_0]);
 else if (FUNC_6(&VAR_10->wb_sync_req[VAR_0]))
  goto skip_write;

 if (FUNC_3(VAR_9, VAR_7)) {
  FUNC_15(&VAR_10->writepages);
  VAR_13 = 1;
 }

 FUNC_8(&VAR_11);
 VAR_12 = FUNC_11(VAR_6, VAR_7, VAR_8);
 FUNC_7(&VAR_11);

 if (VAR_13)
  FUNC_16(&VAR_10->writepages);

 if (VAR_7->sync_mode == VAR_4)
  FUNC_4(&VAR_10->wb_sync_req[VAR_0]);





 FUNC_10(VAR_9);
 return VAR_12;

skip_write:
 VAR_7->pages_skipped += FUNC_12(VAR_9);
 FUNC_18(VAR_6->host, VAR_7, VAR_0);
 return 0;
}
