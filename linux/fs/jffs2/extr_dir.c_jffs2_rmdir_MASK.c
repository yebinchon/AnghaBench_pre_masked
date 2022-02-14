
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct jffs2_sb_info {int dummy; } ;
struct jffs2_inode_info {struct jffs2_full_dirent* dents; } ;
struct jffs2_full_dirent {scalar_t__ ino; struct jffs2_full_dirent* next; } ;
struct inode {int i_ctime; int i_mtime; int i_sb; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct jffs2_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 () ;
 struct jffs2_sb_info* FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct jffs2_sb_info*,struct jffs2_inode_info*,int ,int ,struct jffs2_inode_info*,int ) ;

__attribute__((used)) static int FUNC_8 (struct inode *VAR_1, struct dentry *VAR_2)
{
 struct jffs2_sb_info *VAR_3 = FUNC_3(VAR_1->i_sb);
 struct jffs2_inode_info *VAR_4 = FUNC_1(VAR_1);
 struct jffs2_inode_info *VAR_5 = FUNC_1(FUNC_5(VAR_2));
 struct jffs2_full_dirent *VAR_6;
 int VAR_7;
 uint32_t VAR_8 = FUNC_2();

 for (VAR_6 = VAR_5->dents ; VAR_6; VAR_6 = VAR_6->next) {
  if (VAR_6->ino)
   return -VAR_0;
 }

 VAR_7 = FUNC_7(VAR_3, VAR_4, VAR_2->d_name.name,
         VAR_2->d_name.len, VAR_5, VAR_8);
 if (!VAR_7) {
  VAR_1->i_mtime = VAR_1->i_ctime = FUNC_0(VAR_8);
  FUNC_4(FUNC_5(VAR_2));
  FUNC_6(VAR_1);
 }
 return VAR_7;
}
