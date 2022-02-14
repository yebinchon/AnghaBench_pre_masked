
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jffs2_sb_info {int dummy; } ;
struct inode {int i_ino; int i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 struct jffs2_sb_info* FUNC_0 (int ) ;
 int FUNC_1 (struct file*,int ,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct jffs2_sb_info*,int ) ;

int FUNC_5(struct file *VAR_0, loff_t VAR_1, loff_t VAR_2, int VAR_3)
{
 struct inode *VAR_4 = VAR_0->f_mapping->host;
 struct jffs2_sb_info *VAR_5 = FUNC_0(VAR_4->i_sb);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_4);

 FUNC_4(VAR_5, VAR_4->i_ino);
 FUNC_3(VAR_4);

 return 0;
}
