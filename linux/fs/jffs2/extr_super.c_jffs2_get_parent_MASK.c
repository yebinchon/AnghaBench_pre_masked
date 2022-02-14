
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct jffs2_inode_info {TYPE_1__* inocache; } ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {int ino; int pino_nlink; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ) ;
 struct jffs2_inode_info* FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static struct dentry *FUNC_7(struct dentry *VAR_0)
{
 struct jffs2_inode_info *VAR_1;
 uint32_t VAR_2;

 FUNC_0(!FUNC_4(VAR_0));

 VAR_1 = FUNC_2(FUNC_3(VAR_0));

 VAR_2 = VAR_1->inocache->pino_nlink;

 FUNC_1("Parent of directory ino #%u is #%u\n",
      VAR_1->inocache->ino, VAR_2);

 return FUNC_5(FUNC_6(VAR_0->d_sb, VAR_2));
}
