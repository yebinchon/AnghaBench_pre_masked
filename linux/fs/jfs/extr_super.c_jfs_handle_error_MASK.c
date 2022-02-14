
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; int s_id; } ;
struct jfs_sb_info {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct jfs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,int ) ;

__attribute__((used)) static void FUNC_5(struct super_block *VAR_4)
{
 struct jfs_sb_info *VAR_5 = FUNC_0(VAR_4);

 if (FUNC_3(VAR_4))
  return;

 FUNC_4(VAR_4, VAR_0);

 if (VAR_5->flag & VAR_1)
  FUNC_2("JFS (device %s): panic forced after error\n",
   VAR_4->s_id);
 else if (VAR_5->flag & VAR_2) {
  FUNC_1("ERROR: (device %s): remounting filesystem as read-only",
   VAR_4->s_id);
  VAR_4->s_flags |= VAR_3;
 }


}
