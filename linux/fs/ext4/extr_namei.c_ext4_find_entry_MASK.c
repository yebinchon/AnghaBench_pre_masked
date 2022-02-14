
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct inode {int dummy; } ;
struct ext4_filename {int dummy; } ;
struct ext4_dir_entry_2 {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 struct buffer_head* FUNC_0 (int) ;
 struct buffer_head* FUNC_1 (struct inode*,struct ext4_filename*,struct ext4_dir_entry_2**,int*) ;
 int FUNC_2 (struct ext4_filename*) ;
 int FUNC_3 (struct inode*,struct qstr const*,int,struct ext4_filename*) ;

__attribute__((used)) static struct buffer_head *FUNC_4(struct inode *VAR_1,
        const struct qstr *VAR_2,
        struct ext4_dir_entry_2 **VAR_3,
        int *VAR_4)
{
 int VAR_5;
 struct ext4_filename VAR_6;
 struct buffer_head *VAR_7;

 VAR_5 = FUNC_3(VAR_1, VAR_2, 1, &VAR_6);
 if (VAR_5 == -VAR_0)
  return ((void*)0);
 if (VAR_5)
  return FUNC_0(VAR_5);

 VAR_7 = FUNC_1(VAR_1, &VAR_6, VAR_3, VAR_4);

 FUNC_2(&VAR_6);
 return VAR_7;
}
