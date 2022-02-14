
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct jffs2_sb_info {int dummy; } ;
struct jffs2_inode_info {TYPE_2__* inocache; } ;
struct inode {int i_ctime; int i_mtime; int i_sb; } ;
struct TYPE_3__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct TYPE_4__ {int pino_nlink; } ;


 int FUNC_0 (int ) ;
 struct jffs2_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 () ;
 struct jffs2_sb_info* FUNC_3 (int ) ;
 struct inode* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct jffs2_sb_info*,struct jffs2_inode_info*,int ,int ,struct jffs2_inode_info*,int ) ;
 int FUNC_6 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_0, struct dentry *VAR_1)
{
 struct jffs2_sb_info *VAR_2 = FUNC_3(VAR_0->i_sb);
 struct jffs2_inode_info *VAR_3 = FUNC_1(VAR_0);
 struct jffs2_inode_info *VAR_4 = FUNC_1(FUNC_4(VAR_1));
 int VAR_5;
 uint32_t VAR_6 = FUNC_2();

 VAR_5 = FUNC_5(VAR_2, VAR_3, VAR_1->d_name.name,
         VAR_1->d_name.len, VAR_4, VAR_6);
 if (VAR_4->inocache)
  FUNC_6(FUNC_4(VAR_1), VAR_4->inocache->pino_nlink);
 if (!VAR_5)
  VAR_0->i_mtime = VAR_0->i_ctime = FUNC_0(VAR_6);
 return VAR_5;
}
