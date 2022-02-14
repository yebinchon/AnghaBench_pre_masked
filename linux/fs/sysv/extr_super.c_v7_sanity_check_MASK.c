
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v7_super_block {int s_fsize; int s_ninode; int s_nfree; } ;
struct sysv_sb_info {int dummy; } ;
struct sysv_inode {int i_size; int i_mode; } ;
struct sysv_dir_entry {int dummy; } ;
struct super_block {struct sysv_sb_info* s_fs_info; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct sysv_sb_info*,int ) ;
 int FUNC_2 (struct sysv_sb_info*,int ) ;
 struct buffer_head* FUNC_3 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_5, struct buffer_head *VAR_6)
{
 struct v7_super_block *VAR_7;
 struct sysv_inode *VAR_8;
 struct buffer_head *VAR_9;
 struct sysv_sb_info *VAR_10;

 VAR_10 = VAR_5->s_fs_info;


 VAR_7 = (struct v7_super_block *) VAR_6->b_data;
 if (FUNC_1(VAR_10, VAR_7->s_nfree) > VAR_3 ||
     FUNC_1(VAR_10, VAR_7->s_ninode) > VAR_4 ||
     FUNC_2(VAR_10, VAR_7->s_fsize) > VAR_1)
  return 0;



 VAR_9 = FUNC_3(VAR_5, 2);
 if (VAR_9 == ((void*)0))
  return 0;

 VAR_8 = (struct sysv_inode *)(VAR_9->b_data + 64);
 if ((FUNC_1(VAR_10, VAR_8->i_mode) & ~0777) != VAR_0 ||
     (FUNC_2(VAR_10, VAR_8->i_size) == 0) ||
     (FUNC_2(VAR_10, VAR_8->i_size) & 017) ||
     (FUNC_2(VAR_10, VAR_8->i_size) > VAR_2 *
      sizeof(struct sysv_dir_entry))) {
  FUNC_0(VAR_9);
  return 0;
 }

 FUNC_0(VAR_9);
 return 1;
}
