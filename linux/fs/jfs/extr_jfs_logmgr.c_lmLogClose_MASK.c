
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_bdev; } ;
struct jfs_sb_info {struct jfs_log* log; int log_list; } ;
struct jfs_log {struct block_device* bdev; int journal_list; scalar_t__ no_integrity; int sb_list; int flag; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct jfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct jfs_log*) ;
 int FUNC_2 (struct jfs_log*) ;
 int FUNC_3 (struct block_device*,int) ;
 int FUNC_4 (char*,...) ;
 int VAR_3 ;
 int FUNC_5 (struct jfs_log*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct jfs_log*,struct jfs_sb_info*,int ) ;
 int FUNC_9 (struct jfs_log*) ;
 int VAR_4 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int *) ;

int FUNC_14(struct super_block *VAR_5)
{
 struct jfs_sb_info *VAR_6 = FUNC_0(VAR_5);
 struct jfs_log *VAR_7 = VAR_6->log;
 struct block_device *VAR_8;
 int VAR_9 = 0;

 FUNC_4("lmLogClose: log:0x%p", VAR_7);

 FUNC_10(&VAR_3);
 FUNC_1(VAR_7);
 FUNC_6(&VAR_6->log_list);
 FUNC_2(VAR_7);
 VAR_6->log = ((void*)0);





 FUNC_12(VAR_5->s_bdev);

 if (FUNC_13(VAR_4, &VAR_7->flag)) {



  VAR_9 = FUNC_9(VAR_7);
  FUNC_5(VAR_7);
  goto out;
 }

 if (!VAR_7->no_integrity)
  FUNC_8(VAR_7, VAR_6, 0);

 if (!FUNC_7(&VAR_7->sb_list))
  goto out;
 if (VAR_7->no_integrity)
  goto out;




 FUNC_6(&VAR_7->journal_list);
 VAR_8 = VAR_7->bdev;
 VAR_9 = FUNC_9(VAR_7);

 FUNC_3(VAR_8, VAR_1|VAR_2|VAR_0);

 FUNC_5(VAR_7);

      out:
 FUNC_11(&VAR_3);
 FUNC_4("lmLogClose: exit(%d)", VAR_9);
 return VAR_9;
}
