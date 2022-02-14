
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct jfs_sb_info {struct jfs_log* log; } ;
struct jfs_log {int dummy; } ;


 int VAR_0 ;
 struct jfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,char*) ;
 int FUNC_2 (struct jfs_log*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_1)
{
 struct jfs_sb_info *VAR_2 = FUNC_0(VAR_1);
 struct jfs_log *VAR_3 = VAR_2->log;
 int VAR_4 = 0;

 if (!FUNC_3(VAR_1)) {
  VAR_4 = FUNC_5(VAR_1, VAR_0);
  if (VAR_4) {
   FUNC_1(VAR_1, "updateSuper failed\n");
   goto out;
  }
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4)
   FUNC_1(VAR_1, "lmLogInit failed\n");
out:
  FUNC_4(VAR_1);
 }
 return VAR_4;
}
