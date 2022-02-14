
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_dir_entry {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_ctime; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct sysv_dir_entry*,struct page*) ;
 struct sysv_dir_entry* FUNC_3 (struct dentry*,struct page**) ;

__attribute__((used)) static int FUNC_4(struct inode * VAR_1, struct dentry * VAR_2)
{
 struct inode * VAR_3 = FUNC_0(VAR_2);
 struct page * VAR_4;
 struct sysv_dir_entry * VAR_5;
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_3(VAR_2, &VAR_4);
 if (!VAR_5)
  goto out;

 VAR_6 = FUNC_2 (VAR_5, VAR_4);
 if (VAR_6)
  goto out;

 VAR_3->i_ctime = VAR_1->i_ctime;
 FUNC_1(VAR_3);
out:
 return VAR_6;
}
