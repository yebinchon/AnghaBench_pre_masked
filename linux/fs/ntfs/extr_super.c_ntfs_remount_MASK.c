
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_10__ {int vol_flags; int major_ver; int logfile_ino; } ;
typedef TYPE_1__ ntfs_volume ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct super_block*,char*,...) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct super_block*,char*) ;
 int FUNC_12 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_13 (struct super_block*) ;
 int FUNC_14 (struct super_block*) ;

__attribute__((used)) static int FUNC_15(struct super_block *VAR_7, int *VAR_8, char *VAR_9)
{
 ntfs_volume *VAR_10 = FUNC_0(VAR_7);

 FUNC_5("Entering with remount options string: %s", VAR_9);

 FUNC_14(VAR_7);



 *VAR_8 |= VAR_2;
 if (!FUNC_12(VAR_10, VAR_9))
  return -VAR_0;

 FUNC_5("Done.");
 return 0;
}
