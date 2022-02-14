
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {long nr_to_write; } ;
struct inode {TYPE_1__* i_sb; } ;
struct ext4_sb_info {int s_journal_flag_rwsem; } ;
struct address_space {struct inode* host; } ;
struct TYPE_2__ {int s_bdev; } ;


 int VAR_0 ;
 struct ext4_sb_info* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct address_space*,int ,struct writeback_control*) ;
 int FUNC_2 (struct ext4_sb_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,struct writeback_control*) ;
 int FUNC_6 (struct inode*,struct writeback_control*,int,long) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct address_space *VAR_1,
          struct writeback_control *VAR_2)
{
 int VAR_3;
 long VAR_4 = VAR_2->nr_to_write;
 struct inode *VAR_5 = VAR_1->host;
 struct ext4_sb_info *VAR_6 = FUNC_0(VAR_1->host->i_sb);

 if (FUNC_7(FUNC_2(FUNC_0(VAR_5->i_sb))))
  return -VAR_0;

 FUNC_3(&VAR_6->s_journal_flag_rwsem);
 FUNC_5(VAR_5, VAR_2);

 VAR_3 = FUNC_1(VAR_1, VAR_5->i_sb->s_bdev, VAR_2);
 FUNC_6(VAR_5, VAR_2, VAR_3,
         VAR_4 - VAR_2->nr_to_write);
 FUNC_4(&VAR_6->s_journal_flag_rwsem);
 return VAR_3;
}
