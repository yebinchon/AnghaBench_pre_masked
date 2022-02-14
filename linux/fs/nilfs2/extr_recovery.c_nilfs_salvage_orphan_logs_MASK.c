
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int dummy; } ;
struct super_block {int dummy; } ;
struct nilfs_root {int dummy; } ;
struct nilfs_recovery_info {scalar_t__ ri_lsegs_start; scalar_t__ ri_lsegs_end; scalar_t__ ri_need_recovery; int ri_cno; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct super_block*,int ,int,struct nilfs_root**) ;
 int FUNC_1 (struct super_block*,struct nilfs_root*) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct the_nilfs*,struct super_block*,struct nilfs_root*,struct nilfs_recovery_info*) ;
 int FUNC_5 (struct the_nilfs*,struct nilfs_recovery_info*) ;
 int FUNC_6 (struct super_block*,int ,char*,int) ;
 int FUNC_7 (struct the_nilfs*,struct super_block*,struct nilfs_recovery_info*) ;
 int FUNC_8 (struct nilfs_root*) ;
 int FUNC_9 (struct the_nilfs*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct the_nilfs *VAR_2,
         struct super_block *VAR_3,
         struct nilfs_recovery_info *VAR_4)
{
 struct nilfs_root *VAR_5;
 int VAR_6;

 if (VAR_4->ri_lsegs_start == 0 || VAR_4->ri_lsegs_end == 0)
  return 0;

 VAR_6 = FUNC_0(VAR_3, VAR_4->ri_cno, 1, &VAR_5);
 if (FUNC_10(VAR_6)) {
  FUNC_6(VAR_3, VAR_0,
     "error %d loading the latest checkpoint", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_5, VAR_4);
 if (FUNC_10(VAR_6))
  goto failed;

 if (VAR_4->ri_need_recovery == VAR_1) {
  VAR_6 = FUNC_7(VAR_2, VAR_3, VAR_4);
  if (FUNC_10(VAR_6)) {
   FUNC_6(VAR_3, VAR_0,
      "error %d preparing segment for recovery",
      VAR_6);
   goto failed;
  }

  VAR_6 = FUNC_1(VAR_3, VAR_5);
  if (FUNC_10(VAR_6))
   goto failed;

  FUNC_9(VAR_2);
  VAR_6 = FUNC_2(VAR_3);
  FUNC_3(VAR_3);

  if (FUNC_10(VAR_6)) {
   FUNC_6(VAR_3, VAR_0,
      "error %d writing segment for recovery",
      VAR_6);
   goto failed;
  }

  FUNC_5(VAR_2, VAR_4);
 }

 failed:
 FUNC_8(VAR_5);
 return VAR_6;
}
