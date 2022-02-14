
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_super_block {int s_flags; } ;
struct TYPE_2__ {int s_mount_opt; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 struct reiserfs_super_block* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_5 (struct super_block*,char*,char*) ;

__attribute__((used)) static void FUNC_6(struct super_block *VAR_2)
{
 struct reiserfs_super_block *VAR_3 = FUNC_1(VAR_2);

 if (FUNC_4(VAR_2)) {
  if (FUNC_3(VAR_2)) {
   FUNC_5(VAR_2, "super-6517", "cannot support "
      "attributes on 3.5.x disk format");
   FUNC_0(VAR_2)->s_mount_opt &= ~(1 << VAR_0);
   return;
  }
  if (!(FUNC_2(VAR_3->s_flags) & VAR_1)) {
   FUNC_5(VAR_2, "super-6518", "cannot support "
      "attributes until flag is set in "
      "super-block");
   FUNC_0(VAR_2)->s_mount_opt &= ~(1 << VAR_0);
  }
 }
}
