
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct TYPE_3__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct TYPE_4__ {int s_lock; int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct inode*,unsigned char*,struct dentry*,struct inode*,unsigned char*,struct dentry*,int) ;
 int FUNC_2 (struct super_block*,struct inode*,struct inode*) ;
 int FUNC_3 (char*,int ,unsigned char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_3, struct dentry *VAR_4,
   struct inode *VAR_5, struct dentry *VAR_6,
   unsigned int VAR_7)
{
 struct super_block *VAR_8 = VAR_3->i_sb;
 unsigned char VAR_9[VAR_1], VAR_10[VAR_1];
 int VAR_11, VAR_12;

 if (VAR_7 & ~VAR_2)
  return -VAR_0;

 FUNC_4(&FUNC_0(VAR_8)->s_lock);

 VAR_11 = FUNC_3(VAR_4->d_name.name,
    VAR_4->d_name.len, VAR_9,
    &FUNC_0(VAR_3->i_sb)->options);
 if (VAR_11)
  goto out;
 VAR_11 = FUNC_3(VAR_6->d_name.name,
    VAR_6->d_name.len, VAR_10,
    &FUNC_0(VAR_5->i_sb)->options);
 if (VAR_11)
  goto out;

 VAR_12 =
      (VAR_6->d_name.name[0] == '.') && (VAR_10[0] != '.');

 VAR_11 = FUNC_1(VAR_3, VAR_9, VAR_4,
         VAR_5, VAR_10, VAR_6, VAR_12);
out:
 FUNC_5(&FUNC_0(VAR_8)->s_lock);
 if (!VAR_11)
  VAR_11 = FUNC_2(VAR_8, VAR_3, VAR_5);
 return VAR_11;
}
