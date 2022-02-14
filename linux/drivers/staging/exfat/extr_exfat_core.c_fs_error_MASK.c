
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct exfat_mount_options {scalar_t__ errors; } ;
struct TYPE_2__ {struct exfat_mount_options options; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct super_block*) ;

void FUNC_4(struct super_block *VAR_3)
{
 struct exfat_mount_options *VAR_4 = &FUNC_0(VAR_3)->options;

 if (VAR_4->errors == VAR_0) {
  FUNC_1("[EXFAT] Filesystem panic from previous error\n");
 } else if ((VAR_4->errors == VAR_1) && !FUNC_3(VAR_3)) {
  VAR_3->s_flags |= VAR_2;
  FUNC_2("[EXFAT] Filesystem has been set read-only\n");
 }
}
