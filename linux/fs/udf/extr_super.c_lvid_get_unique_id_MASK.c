
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct udf_sb_info {int s_alloc_mutex; struct buffer_head* s_lvid_bh; } ;
struct super_block {int dummy; } ;
struct logicalVolIntegrityDesc {scalar_t__ logicalVolContentsUse; } ;
struct logicalVolHeaderDesc {int uniqueID; } ;
struct buffer_head {scalar_t__ b_data; } ;


 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct super_block*) ;

u64 FUNC_6(struct super_block *VAR_0)
{
 struct buffer_head *VAR_1;
 struct udf_sb_info *VAR_2 = FUNC_0(VAR_0);
 struct logicalVolIntegrityDesc *VAR_3;
 struct logicalVolHeaderDesc *VAR_4;
 u64 VAR_5;
 u64 VAR_6;

 VAR_1 = VAR_2->s_lvid_bh;
 if (!VAR_1)
  return 0;

 VAR_3 = (struct logicalVolIntegrityDesc *)VAR_1->b_data;
 VAR_4 = (struct logicalVolHeaderDesc *)VAR_3->logicalVolContentsUse;

 FUNC_3(&VAR_2->s_alloc_mutex);
 VAR_6 = VAR_5 = FUNC_2(VAR_4->uniqueID);
 if (!(++VAR_5 & 0xFFFFFFFF))
  VAR_5 += 16;
 VAR_4->uniqueID = FUNC_1(VAR_5);
 FUNC_5(VAR_0);
 FUNC_4(&VAR_2->s_alloc_mutex);

 return VAR_6;
}
