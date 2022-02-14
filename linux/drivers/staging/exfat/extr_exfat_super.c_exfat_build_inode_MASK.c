
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_ino; } ;
struct file_id_t {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 struct inode* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*,struct file_id_t*) ;
 struct inode* FUNC_4 (struct super_block*,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct super_block*,int ) ;
 struct inode* FUNC_8 (struct super_block*) ;

__attribute__((used)) static struct inode *FUNC_9(struct super_block *VAR_2,
           struct file_id_t *VAR_3, loff_t VAR_4)
{
 struct inode *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_2, VAR_4);
 if (VAR_5)
  goto out;
 VAR_5 = FUNC_8(VAR_2);
 if (!VAR_5) {
  VAR_5 = FUNC_0(-VAR_0);
  goto out;
 }
 VAR_5->i_ino = FUNC_7(VAR_2, VAR_1);
 FUNC_1(VAR_5, 1);
 VAR_6 = FUNC_3(VAR_5, VAR_3);
 if (VAR_6) {
  FUNC_6(VAR_5);
  VAR_5 = FUNC_0(VAR_6);
  goto out;
 }
 FUNC_2(VAR_5, VAR_4);
 FUNC_5(VAR_5);
out:
 return VAR_5;
}
