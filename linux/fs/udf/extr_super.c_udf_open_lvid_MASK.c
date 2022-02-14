
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udf_sb_info {int s_alloc_mutex; scalar_t__ s_lvid_dirty; struct buffer_head* s_lvid_bh; } ;
struct super_block {int dummy; } ;
struct TYPE_2__ {int * identSuffix; } ;
struct logicalVolIntegrityDescImpUse {TYPE_1__ impIdent; } ;
struct logicalVolIntegrityDesc {int integrityType; } ;
struct buffer_head {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct logicalVolIntegrityDesc*) ;
 struct logicalVolIntegrityDescImpUse* FUNC_9 (struct super_block*) ;

__attribute__((used)) static void FUNC_10(struct super_block *VAR_5)
{
 struct udf_sb_info *VAR_6 = FUNC_0(VAR_5);
 struct buffer_head *VAR_7 = VAR_6->s_lvid_bh;
 struct logicalVolIntegrityDesc *VAR_8;
 struct logicalVolIntegrityDescImpUse *VAR_9;

 if (!VAR_7)
  return;
 VAR_8 = (struct logicalVolIntegrityDesc *)VAR_7->b_data;
 VAR_9 = FUNC_9(VAR_5);
 if (!VAR_9)
  return;

 FUNC_5(&VAR_6->s_alloc_mutex);
 VAR_9->impIdent.identSuffix[0] = VAR_3;
 VAR_9->impIdent.identSuffix[1] = VAR_4;
 if (FUNC_3(VAR_8->integrityType) == VAR_0)
  VAR_8->integrityType = FUNC_2(VAR_1);
 else
  FUNC_1(VAR_5, VAR_2);

 FUNC_8(VAR_8);
 FUNC_4(VAR_7);
 VAR_6->s_lvid_dirty = 0;
 FUNC_6(&VAR_6->s_alloc_mutex);

 FUNC_7(VAR_7);
}
