
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_filename {int dummy; } ;
struct ext4_dir_entry_2 {int dummy; } ;
struct dentry {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 struct buffer_head* FUNC_0 (int) ;
 struct buffer_head* FUNC_1 (struct inode*,struct ext4_filename*,struct ext4_dir_entry_2**,int *) ;
 int FUNC_2 (struct ext4_filename*) ;
 int FUNC_3 (struct inode*,struct dentry*,struct ext4_filename*) ;

__attribute__((used)) static struct buffer_head *FUNC_4(struct inode *VAR_1,
          struct dentry *VAR_2,
          struct ext4_dir_entry_2 **VAR_3)
{
 int VAR_4;
 struct ext4_filename VAR_5;
 struct buffer_head *VAR_6;

 VAR_4 = FUNC_3(VAR_1, VAR_2, &VAR_5);
 if (VAR_4 == -VAR_0)
  return ((void*)0);
 if (VAR_4)
  return FUNC_0(VAR_4);

 VAR_6 = FUNC_1(VAR_1, &VAR_5, VAR_3, ((void*)0));

 FUNC_2(&VAR_5);
 return VAR_6;
}
