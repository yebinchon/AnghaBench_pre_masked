
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udf_sb_info {scalar_t__ s_udfrev; int s_alloc_mutex; scalar_t__ s_lvid_dirty; struct buffer_head* s_lvid_bh; } ;
struct super_block {int dummy; } ;
struct TYPE_2__ {int * identSuffix; } ;
struct logicalVolIntegrityDescImpUse {void* minUDFWriteRev; void* minUDFReadRev; void* maxUDFWriteRev; TYPE_1__ impIdent; } ;
struct logicalVolIntegrityDesc {int integrityType; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct super_block*,int ) ;
 struct udf_sb_info* FUNC_1 (struct super_block*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct logicalVolIntegrityDesc*) ;
 struct logicalVolIntegrityDescImpUse* FUNC_11 (struct super_block*) ;

__attribute__((used)) static void FUNC_12(struct super_block *VAR_5)
{
 struct udf_sb_info *VAR_6 = FUNC_1(VAR_5);
 struct buffer_head *VAR_7 = VAR_6->s_lvid_bh;
 struct logicalVolIntegrityDesc *VAR_8;
 struct logicalVolIntegrityDescImpUse *VAR_9;

 if (!VAR_7)
  return;
 VAR_8 = (struct logicalVolIntegrityDesc *)VAR_7->b_data;
 VAR_9 = FUNC_11(VAR_5);
 if (!VAR_9)
  return;

 FUNC_6(&VAR_6->s_alloc_mutex);
 VAR_9->impIdent.identSuffix[0] = VAR_3;
 VAR_9->impIdent.identSuffix[1] = VAR_4;
 if (VAR_2 > FUNC_4(VAR_9->maxUDFWriteRev))
  VAR_9->maxUDFWriteRev = FUNC_2(VAR_2);
 if (VAR_6->s_udfrev > FUNC_4(VAR_9->minUDFReadRev))
  VAR_9->minUDFReadRev = FUNC_2(VAR_6->s_udfrev);
 if (VAR_6->s_udfrev > FUNC_4(VAR_9->minUDFWriteRev))
  VAR_9->minUDFWriteRev = FUNC_2(VAR_6->s_udfrev);
 if (!FUNC_0(VAR_5, VAR_1))
  VAR_8->integrityType = FUNC_3(VAR_0);






 FUNC_8(VAR_7);
 FUNC_10(VAR_8);
 FUNC_5(VAR_7);
 VAR_6->s_lvid_dirty = 0;
 FUNC_7(&VAR_6->s_alloc_mutex);

 FUNC_9(VAR_7);
}
