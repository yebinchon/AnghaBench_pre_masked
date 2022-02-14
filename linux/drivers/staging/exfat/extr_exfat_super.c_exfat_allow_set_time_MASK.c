
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_gid; int i_uid; } ;
struct TYPE_2__ {int allow_utime; } ;
struct exfat_sb_info {TYPE_1__ options; } ;
typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct exfat_sb_info *VAR_1, struct inode *VAR_2)
{
 mode_t VAR_3 = VAR_1->options.allow_utime;

 if (!FUNC_2(FUNC_0(), VAR_2->i_uid)) {
  if (FUNC_1(VAR_2->i_gid))
   VAR_3 >>= 3;
  if (VAR_3 & VAR_0)
   return 1;
 }


 return 0;
}
