
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct jfs_sb_info {scalar_t__ state; TYPE_3__* ipbmap; TYPE_1__* ipimap; } ;
struct TYPE_6__ {int i_mapping; } ;
struct TYPE_5__ {int i_mapping; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct jfs_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct super_block*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct super_block*,int ) ;

int FUNC_12(struct super_block *VAR_3, int VAR_4)
{
 struct jfs_sb_info *VAR_5 = FUNC_0(VAR_3);
 int VAR_6;






 if (VAR_4) {
  if (FUNC_1(VAR_3) || (VAR_5->state != VAR_1))
   return -VAR_0;

  FUNC_10(VAR_5->ipimap->i_mapping, 0);
  FUNC_10(VAR_5->ipbmap->i_mapping, 0);
  FUNC_5(VAR_5->ipimap, 1);
  if ((VAR_6 = FUNC_4(VAR_5->ipimap))) {
   FUNC_6("jfs_mount_rw: diMount failed!");
   return VAR_6;
  }

  FUNC_3(VAR_5->ipbmap, 1);
  if ((VAR_6 = FUNC_2(VAR_5->ipbmap))) {
   FUNC_6("jfs_mount_rw: dbMount failed!");
   return VAR_6;
  }
 }




 if ((VAR_6 = FUNC_8(VAR_3)))
  return VAR_6;




 if ((VAR_6 = FUNC_11(VAR_3, VAR_2))) {
  FUNC_6("jfs_mount: updateSuper failed w/rc = %d", VAR_6);
  FUNC_7(VAR_3);
  return VAR_6;
 }




 FUNC_9(VAR_3);

 return VAR_6;
}
