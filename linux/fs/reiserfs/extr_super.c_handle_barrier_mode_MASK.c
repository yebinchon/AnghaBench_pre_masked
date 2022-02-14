
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int s_mount_opt; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct super_block *VAR_2, unsigned long VAR_3)
{
 int VAR_4 = (1 << VAR_0);
 int VAR_5 = (1 << VAR_1);
 int VAR_6 = VAR_4 | VAR_5;

 if (VAR_3 & VAR_6) {
  FUNC_0(VAR_2)->s_mount_opt &= ~VAR_6;
  if (VAR_3 & VAR_4) {
   FUNC_0(VAR_2)->s_mount_opt |= VAR_4;
   FUNC_1("reiserfs: enabling write barrier flush mode\n");
  } else if (VAR_3 & VAR_5) {
   FUNC_0(VAR_2)->s_mount_opt |= VAR_5;
   FUNC_1("reiserfs: write barriers turned off\n");
  }
 }
}
