
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_sb_info {int s_alloc_mutex; scalar_t__ s_lvid_dirty; struct buffer_head* s_lvid_bh; } ;
struct super_block {int dummy; } ;
struct logicalVolIntegrityDesc {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct logicalVolIntegrityDesc*) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_0, int VAR_1)
{
 struct udf_sb_info *VAR_2 = FUNC_0(VAR_0);

 FUNC_2(&VAR_2->s_alloc_mutex);
 if (VAR_2->s_lvid_dirty) {
  struct buffer_head *VAR_3 = VAR_2->s_lvid_bh;
  struct logicalVolIntegrityDesc *VAR_4;

  VAR_4 = (struct logicalVolIntegrityDesc *)VAR_3->b_data;
  FUNC_4(VAR_4);





  FUNC_1(VAR_3);
  VAR_2->s_lvid_dirty = 0;
 }
 FUNC_3(&VAR_2->s_alloc_mutex);

 return 0;
}
