
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct jfs_sb_info {TYPE_1__* direct_inode; int ipimap; int ipbmap; struct jfs_log* log; } ;
struct jfs_log {int dummy; } ;
struct TYPE_2__ {int i_mapping; } ;


 int VAR_0 ;
 struct jfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct jfs_log*,int) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct super_block*,int ) ;

int FUNC_7(struct super_block *VAR_1)
{
 struct jfs_sb_info *VAR_2 = FUNC_0(VAR_1);
 struct jfs_log *VAR_3 = VAR_2->log;

 if (!VAR_3)
  return 0;






 FUNC_4(VAR_3, 2);




 FUNC_1(VAR_2->ipbmap);
 FUNC_2(VAR_2->ipimap);







 FUNC_3(VAR_2->direct_inode->i_mapping);

 FUNC_6(VAR_1, VAR_0);

 return FUNC_5(VAR_1);
}
