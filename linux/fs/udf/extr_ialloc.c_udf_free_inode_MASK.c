
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udf_sb_info {int s_alloc_mutex; } ;
struct super_block {int dummy; } ;
struct logicalVolIntegrityDescImpUse {int numFiles; int numDirs; } ;
struct inode {int i_mode; struct super_block* i_sb; } ;
struct TYPE_2__ {int i_location; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct udf_sb_info* FUNC_2 (struct super_block*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct super_block*,int *,int *,int ,int) ;
 struct logicalVolIntegrityDescImpUse* FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct super_block*) ;

void FUNC_9(struct inode *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->i_sb;
 struct udf_sb_info *VAR_2 = FUNC_2(VAR_1);
 struct logicalVolIntegrityDescImpUse *VAR_3 = FUNC_7(VAR_1);

 if (VAR_3) {
  FUNC_4(&VAR_2->s_alloc_mutex);
  if (FUNC_0(VAR_0->i_mode))
   FUNC_3(&VAR_3->numDirs, -1);
  else
   FUNC_3(&VAR_3->numFiles, -1);
  FUNC_8(VAR_1);
  FUNC_5(&VAR_2->s_alloc_mutex);
 }

 FUNC_6(VAR_1, ((void*)0), &FUNC_1(VAR_0)->i_location, 0, 1);
}
