
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_dir_entry {int inode; } ;
struct page {int dummy; } ;
struct dentry {int d_sb; } ;
typedef int ino_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ,int ) ;
 struct sysv_dir_entry* FUNC_3 (struct dentry*,struct page**) ;

ino_t FUNC_4(struct dentry *VAR_0)
{
 struct page *VAR_1;
 struct sysv_dir_entry *VAR_2 = FUNC_3 (VAR_0, &VAR_1);
 ino_t VAR_3 = 0;

 if (VAR_2) {
  VAR_3 = FUNC_2(FUNC_0(VAR_0->d_sb), VAR_2->inode);
  FUNC_1(VAR_1);
 }
 return VAR_3;
}
