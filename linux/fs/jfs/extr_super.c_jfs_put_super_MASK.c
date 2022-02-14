
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct jfs_sb_info {TYPE_1__* direct_inode; int nls_tab; } ;
struct TYPE_2__ {int i_mapping; } ;


 struct jfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct jfs_sb_info*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct super_block *VAR_0)
{
 struct jfs_sb_info *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 FUNC_3("In jfs_put_super");

 FUNC_4(VAR_0);

 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2)
  FUNC_2("jfs_umount failed with return code %d", VAR_2);

 FUNC_8(VAR_1->nls_tab);

 FUNC_7(VAR_1->direct_inode->i_mapping, 0);
 FUNC_1(VAR_1->direct_inode);

 FUNC_6(VAR_1);
}
